CFILE=helloworld.cpp

build:
	mkdir -p ./build
	clang++ -std=c++23 -o ./build/$(basename $(notdir $(CFILE))) $(CFILE)

run:
	mkdir -p ./build
	if [ -d $(CFILE) ]; then \
	  clang++ -std=c++23 -o ./build/$(basename $(notdir $(CFILE))) $(CFILE)/*.cpp; \
	else \
	  clang++ -std=c++23 -o ./build/$(basename $(notdir $(CFILE))) $(CFILE); \
	fi
	./build/$(basename $(notdir $(CFILE)))


