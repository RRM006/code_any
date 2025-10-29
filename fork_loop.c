#include <stdio.h>
#include <unistd.h>

int main (){


for (int i=0;i<3;i++){

    fork();

    printf("Iteration %d - THIS IS FORK LOOP .\n child id : %d \n and parent ID :  %d\n",i,getpid(),getppid()) ;
}
    return 0;
}
