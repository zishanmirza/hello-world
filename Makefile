all:
	nasm -f elf64 -o main.o main.S
	cc -Wall -Werror -Wextra -o main main.o main.c start.c
	@rm main.o

clean:
	rm -f main.o main
