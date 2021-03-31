###
## Makefile 
## INFO0947: Projet 1
##
###

## Variables

# Tools & flags
CC=gcc
CFLAGS=--std=c99 --pedantic -Wall -W -Wmissing-prototypes
LD=gcc
LDFLAGS=

# Files
EXEC=multiplicite doc
OBJ_MULTIPLICITE=main.o multiplicite.o
OBJ_DOC=INFO0947_test.doxyfile

#executable
multiplicite: $(OBJ_MULTIPLICITE)
	$(LD) -o multiplicite $(OBJ_MULTIPLICITE) $(LDFLAGS)
	
doc: $(OBJ_DOC)
	doxygen $(OBJ_DOC)

#fichier OBJ
main.o: main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

multiplicite.o: multiplicite.c multiplicite.h
	$(CC) -c multiplicite.c -o multiplicite.o $(CFLAGS)

clean:
	rm -f *.o $(EXEC) *~