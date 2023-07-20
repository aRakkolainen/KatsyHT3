//Project 3: Unix Shell
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
//Required build-in commands: exit, cd and path, other ones are 
// run with execv()-function!

int main(int argc, char *argv[]) {
    char *command=NULL;
    size_t len; 
    char exitValue[5];
    int pid = fork(); 

    //int r; 
    strcpy(exitValue, "exit\0");

    if (argc == 1) {
        do {
            printf("wish>");
            getline(&command, &len, stdin);
            if (pid < 0) {
                fprintf(stderr, "fork failed\n"); 
                exit(1);
            } else if (pid == 0) {
                execv(); 
            }
        }  

        } while (strcmp(command, exitValue) != 10);
         

    } else if(argc == 2) {
        printf("\n");
    }
    return(0);
}