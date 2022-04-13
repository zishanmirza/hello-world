all:
	gcc -Wall -Werror -Wextra -o main main.c start.c

clean:
	rm main
