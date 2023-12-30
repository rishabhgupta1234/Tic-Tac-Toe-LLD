output: main.o player.o game.o board.o
	g++ main.o player.o game.o board.o -o play

main.o: main.cpp
	g++ -c main.cpp

player.o: player.cpp player.h
	g++ -c player.cpp

game.o: game.cpp game.h
	g++ -c game.cpp

board.o: board.cpp board.h
	g++ -c board.cpp

clean:
	rm *.o play
