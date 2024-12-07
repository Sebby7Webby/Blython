all:
	g++ -I external/src/include/SDL2 -I log -L external/src/lib -o main src/main.cpp -lSDL2main -lSDL2