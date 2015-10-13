## Comilateur C et éditeur de liens
CC = gcc

## Options pour la compilation du C
CFLAGS = -Wall -Werror -ansi -pedantic
# Specifie la version de la norme POSIX a respecter
CFLAGS += -D_XOPEN_SOURCE=500
# Active les informations de débogage
CFLAGS += -g

##Première cible
all: mcat-scd


## Compilation séparée
mcat-scd.o: mcat-scd.c
	${CC} ${CFLAGS} -c $<

mcat-scd: mcat-scd.o
	${CC} ${LDFLAGS} -o $@ $^

clean:
	rm *.o || true
