math: main.o utils.o
	g++ main.o utils.o -o math

main.o: math_stuff.cpp
	g++ -c main.cpp

utils.o: math_utils.cpp
	g++ -c utils.cpp

clean:
	rm *.o math