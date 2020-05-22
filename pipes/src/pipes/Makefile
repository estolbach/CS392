OBJS = pipes.o

DOTCS = pipes.c
CFLAGS= -Wall -Werror --pedantic -I../../include


LPATH=../../lib


all: $(OBJS)
	gcc pipes.c $(CFLAGS) -L$(LPATH) -lmy -o pipes

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) exec

re: fclean all
