#include <stdio.h>

void printinfo(char name[],int age){
      
        printf("Name : %s\n",name);
        printf("Age  : &d\n",age);

}
void getinput (char name[] ,int *age){
        
            printf ("Enter your name : ");
            scanf("%s",name);

            printf ("Enter your age :  ");
            scanf("%d", age);
}


int main (){
      
    char  name[50];
    int   age;

getinput( name,&age);
printf("\n------Your information-----\n");

printinfo(name,age);
   



return 0;
}
