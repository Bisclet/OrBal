main: main.cpp
	g++ -I../include -o main main.cpp glad.c -ldl -lglfw -lm -lassimp

main_debug: main.cpp
	g++ -g3 -I../include -o main main.cpp glad.c -ldl -lglfw -lm -lassimp

Triangle: Triangle.cpp
	g++ -I../include -o Triangle Triangle.cpp glad.c -ldl -lglfw -lm -lassimp

run: main
	./main

test: Triangle
	./Triangle

clean: main
	rm main