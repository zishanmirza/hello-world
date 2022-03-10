all:
	gcc -o main1 main.c
	g++ -o main2 main.cc

clean:
	rm main1
	rm main2
