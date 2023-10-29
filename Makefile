bin/galaga 	:	src/galaga.cpp	include/*.hpp
	c++ src/galaga.cpp -o bin/galaga -I include -l curses

run	:	bin/galaga
	./bin/galaga