CFILE=helloworld.cpp

build:
	mkdir -p ./build
	clang++ -std=c++23 -o ./build/$(basename $(notdir $(CFILE))) $(CFILE)

run:
	mkdir -p ./build
	clang++ -std=c++23 -o ./build/$(basename $(notdir $(CFILE))) $(CFILE)
	./build/$(basename $(notdir $(CFILE)))


