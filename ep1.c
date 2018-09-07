#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>

char comando[25], argumento[25];

int protegepracaramba (){
    chmod("ep1.c",0000);
}

int liberageral(){
    chmod("ep1.c",0777);
}

int rodeveja(){
    int pid=fork();
    if (pid!=0){
        /*Processo pai*/
        wait();
    }
    else{
            /*Processo filho*/
        execve(comando);
    }
}

int rode(){
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
    while(scanf("%s", comando)!=EOF){
        if(scanf("%s", argumento)==EOF) return;
        print(">");
        if(strcmp(comando, "protegepracaramba")==0){
            protegepracaramba();
        }
        else if(strcmp(comando, "liberageral")==0){
            liberageral();
        }
        else if(strcmp(comando, "rodeveja")==0){
            rodeveja();
        }
        else if(strcmp(comando, "rode")==0){
            rode();
        }
    }
}
