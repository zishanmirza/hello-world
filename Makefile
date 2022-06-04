all:
	nasm -f elf64 -o main.o main.S
	nasm -f elf64 -o start.o start.S

	ld -o start start.o

	cc -Wall -Werror -Wextra -o main start.o main.c start.c
	rm main.o start.o

clean:
	rm -f main start
