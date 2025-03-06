
output: main.o 
	gcc main.o -o parC
	rm main.o

main.o: 
	gcc src/main.c -c 

clean: 
	rm main.o
