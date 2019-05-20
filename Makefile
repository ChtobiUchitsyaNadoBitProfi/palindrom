all: bin/prog

bin/prog: src/main.c src/palindrom.c src/process.c src/strings.c
	gcc -Wall -o bin/prog src/main.c src/palindrom.c src/process.c src/strings.c
