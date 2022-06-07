all:
	nasm -f elf64 -o main.o main.S
	nasm -f elf64 -o hello_world.o hello_world.S

	ld -o start hello_world.o main.o

	cc -Wall -Werror -Wextra -o main hello_world.o main.c start.c
	rm hello_world.o main.o

clean:
	rm -f main start
