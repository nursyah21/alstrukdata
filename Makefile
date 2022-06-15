CC = g++
FLAG = -W
FILE = queue

all: clear run

clear:
	clear

compile: 
	$(CC) $(FLAG) $(FILE).cpp -o $(FILE).out

run: compile
	./$(FILE).out  && rm $(FILE).out

	

