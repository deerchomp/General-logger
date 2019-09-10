all:
	g++ p1.cpp
	./a.out
	cat log.txt

clean:
	rm log.txt
	rm a.out
