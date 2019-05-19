all: bin/prog

bin/prog: src/main.c src/palindrom.c src/process.c
	gcc -Wall -o bin/prog src/main.c src/palindrom.c src/process.c
