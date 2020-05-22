#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>


char* shift(char* in){
	char* word = in;
	int i = 0;
	while(i < (my_strlen(word))){
		if((word[i] >= 65 && word[i] < 90) || (word[i] >= 97 && word[i] < 122)){
			word[i] += 1;
		}
		else if(word[i] == 90 || word[i] == 122){
			word[i] -= 25;
		}
		i++;
	}
	return word;
}

// A main function should creates a pipe to communicate from it to a forked child process.
// A child process should also create a different pipe to communicate from it to a "grandchild" process (i.e. create a fork within the child process).
// The main program should take the command line arguments and send them as a string across the pipe to the child.
// The child process should take the text from the first pipe and shift every letter forward by one. Ex (a -> b or A -> B) Both Z and z should wrap to A and a respectively. Print out the shifted message and then take the UNSHIFTED text and pass it along the second pipe to the grandchild.
// The "grandchild" process should take the unshifted text from the second pipe, reverse it, and print it out.



int main(int argc, char *argv[]) {
	if(argc < 2){
		printf("Usage : %s [string]", argv[0]);
		exit(1);
	}

	pid_t pid;
	int fds[2];
	int fds1[2];
	pipe(fds);
	pipe(fds1);
	//char str[200];
	char buff[200];

	if((pid = fork()) < 0) {
		perror("fork"), exit(1); // A main function should creates a pipe to communicate from it to a forked child process.
	}
	else if(pid == 0){
		//child
		if((pid = fork()) < 0) {
			perror("fork"), exit(1);
		}
		else if(pid == 0){
			//grandchild

			read(fds[0], buff, 200); // The child process should take the text from the first pipe and shift every letter forward by one. Ex (a -> b or A -> B) Both Z and z should wrap to A and a respectively. Print out the shifted message and then take the UNSHIFTED text and pass it along the second pipe to the grandchild.
			wait(NULL);
			write(fds1[1], buff, 200);
			char* shifted = shift(buff);
			//printf("child %s\n", shifted);
			my_str("Child: ");
			my_str(shifted);
			my_str("\n");
			exit(0);
		}
		else{
			// actual child
			read(fds1[0], buff, 200); //WRONG PIPE // The "grandchild" process should take the unshifted text from the second pipe,
			wait(NULL);
			my_revstr(buff); // reverse it,
			//my_str(buff); // and print it out.
			//printf("grandchild %s\n", buff);
			my_str("Grandchild: ");
			my_str(buff);
			my_str("\n");
			exit(0);
		}
		close(fds1[0]);
		wait(NULL);
	}
	else{
		for (int i = 0; i < 200; i++){
			buff[i] = '\0';
			//str[i] = '\0';
		}

		// read(0, buff, 200);
		//char* vstr = my_vect2str(argv+1);
		char* cut = my_vect2str(argv+1);

		// char* cut = (char*) malloc(sizeof(*vstr));
        //
		// int i = 1;
		// int k = 0;
		// while(i < my_strlen(vstr)){
		// 	if (vstr[i] == 32){
		// 		break;
		// 	}
		// 	else{
		// 		i++;
		// 	}
		// }
		// while(i < my_strlen(vstr)){
		// 	cut[k] = vstr[i];
		// 	i++;
		// 	k++;
		// }
		// cut[k] = '\0';

	//	printf("Parent %s\n", cut);
		//printf("Parent %s\n", cut );
		my_str("Parent: ");
		my_str(cut);
		my_str("\n");
		write(fds[1], cut, 200); // The main program should take the command line arguments and send them as a string across the pipe to the child.
		close(fds[0]);
		close(fds1[0]);
		wait(NULL);
	}
	return 0;
}
