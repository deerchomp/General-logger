all:
	g++ -o logger p1.cpp
	./logger

compile:
	g++ -o logger p1.cpp
	
clean:
	rm log.txt
	rm logger
