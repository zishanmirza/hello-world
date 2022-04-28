all:
	@cc -Wall -Werror -Wextra -o main main.c start.c

clean:
	@rm main
