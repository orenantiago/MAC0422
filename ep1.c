#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

char comando[25], argumento[50];

int protegepracaramba (char *argumento){
    chmod(argumento,0000);
}

int liberageral(char *argumento){
    chmod(argumento,0777);
}

int rodeveja(argumento){
    int status; 
    if (fork() !=0){
        /*Processo pai*/
        wait(&status);
    }
    else{
            /*Processo filho*/
        execve(argumento);
    }
}

int rode(argumento){
    int pid=fork();
    if (pid!=0){
        /*Processo pai*/
    }
    else{
            /*Processo filho*/
        execve(comando);
    }
}

int main(int argc, char **argv){
    printf("mac422shell \n\n");
    while(scanf("%s %s", comando, argumento)!=EOF){
        if(strcmp(comando, "protegepracaramba")==0){
            protegepracaramba(argumento);
        }
        else if(strcmp(comando, "liberageral")==0){
            liberageral(argumento);
        }
        else if(strcmp(comando, "rodeveja")==0){
            rodeveja(argumento);
        }
        else if(strcmp(comando, "rode")==0){
            rode(argumento);
        }
    }
}
