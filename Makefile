CC = g++
FLAG = -W
FILE = stack_implementation
FILETEST = stack_queue

all: clear run

clear:
	clear

compile: 
	$(CC) $(FLAG) $(FILE).cpp -o $(FILE).out

run: compile
	./$(FILE).out  && rm $(FILE).out

	
test: clear
	$(CC) $(FLAG) $(FILETEST).cpp -o $(FILETEST).out && \
	./$(FILETEST).out  && rm $(FILETEST).out


	
