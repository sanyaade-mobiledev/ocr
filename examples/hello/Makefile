PROG=helloworld
CFLAGS=-O0 -g -Werror
OCR_FLAGS=-L${OCR_INSTALL}/lib -I${OCR_INSTALL}/include -locr

all-test: compile run

compile:
	gcc -g $(OCR_FLAGS) -I. $(PROG).c -o $(PROG).exe

run:
	./$(PROG).exe

clean:
	-rm -Rf *.o $(PROG).exe
