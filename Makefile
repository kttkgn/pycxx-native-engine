.PHONY: build clean
build:
	mkdir -p build && cd build && cmake .. && cmake --build . --config Release

clean:
	rm -rf build
