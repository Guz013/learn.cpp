{
  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };
  outputs = {nixpkgs, ...}: let
    forAllSystems = f:
      nixpkgs.lib.genAttrs ["x86_64-linux" "aarch64-linux" "x86_64-darwin" "aarch64-darwin"] (system: let
        pkgs = import nixpkgs {inherit system;};
      in
        f {
          inherit pkgs;
          inherit (pkgs) lib stdenv;
        });
  in {
    devShells = forAllSystems ({
      lib,
      pkgs,
      ...
    }: {
      default =
        pkgs.mkShell.override {
          stdenv = pkgs.clangStdenv;
        } {
          env = {
            LIBLLDB_PATH = "${pkgs.vscode-extensions.vadimcn.vscode-lldb}/share/vscode/extensions/vadimcn.vscode-lldb/lldb/lib/liblldb.so";
          };
          packages = with pkgs; [
            clang-tools
            lldb
            gnumake
            (pkgs.writeShellScriptBin "codelldb" ''
              ${pkgs.vscode-extensions.vadimcn.vscode-lldb}/share/vscode/extensions/vadimcn.vscode-lldb/adapter/codelldb "$@"
            '')
          ];
          shellHook = ''
          '';
        };
    });
  };
}
