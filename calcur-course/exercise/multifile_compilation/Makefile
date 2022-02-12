math: main.o utils.o
	g++ main.o utils.o -o math

main.o: main.cpp
	g++ -c main.cpp

utils.o: utils.cpp
	g++ -c utils.cpp

clean:
	rm *.o math