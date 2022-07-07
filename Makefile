DEFAULT_TARGET := build

build:
	mkdir -p bin
	gcc main.c -o bin/main

run:
	@bin/main
