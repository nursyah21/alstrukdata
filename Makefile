CC = g++
FLAG = -W
FILE = double_list

all: clear compile run

clear:
	clear

compile:
	$(CC) $(FLAG) $(FILE).cpp -o $(FILE).out

run:
	./$(FILE).out
