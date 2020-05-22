OBJS = myselect.o

DOTCS = myselect.c
CFLAGS= -Wall -Werror --pedantic -I../../include


LPATH=../../lib


all: $(OBJS)
	gcc myselect.c $(CFLAGS) -L$(LPATH) -lmy -lncurses -o myselect


clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) exec

re: fclean all
