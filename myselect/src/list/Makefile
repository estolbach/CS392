OBJS = new_node.o add_node.o add_elem.o append.o add_node_at.o debug_int.o remove_node.o remove_last.o count_s_nodes.o empty_list.o remove_node_at.o print_int.o print_char.o print_string.o traverse_char.o traverse_int.o traverse_string.o debug_string.o debug_char.o elem_at.o node_at.o 

DOTCS = new_node.c add_node.c add_elem.c append.c add_node_at.c debug_int.c remove_node.c remove_last.c count_s_nodes.c empty_list.c remove_node_at.c print_int.c print_char.c print_string.c traverse_char.c traverse_int.c traverse_string.c debug_string.c debug_char.c elem_at.c node_at.c
CFLAGS= -Wall -Werror --pedantic -I../../include

TSRC= ../../test/testlist.c
TFILE= ../../test/testlist

LPATH=../../lib
LNAME=liblist.a

TFLAGS= -o $(TFILE) $(CFLAGS) -L$(LPATH) -llist -lmy

all: $(OBJS)
	ar -rc $(LNAME) $(OBJS)
	ranlib $(LNAME)
	mv $(LNAME) $(LPATH)

test:
	gcc $(TSRC) $(TFLAGS) $(LPATH)/$(LNAME)
	./$(TFILE) -g


clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS) exec

re: fclean all