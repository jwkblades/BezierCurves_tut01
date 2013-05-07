EXE=bezier

.cpp.o:
	g++ -Wall $^ -c

install:
	make ${EXE}
	rm -rf *.o

${EXE}:Point.o main.o
	g++ -Wall $^ -o $@

clean:
	rm -f *.o *.gch ${EXE}
