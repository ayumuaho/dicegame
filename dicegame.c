#include <stdio.h>

int main (){
    char name[100];
    
    printf("What is your name?\n");

    scanf("%99s", name);

    printf("Hello, %s!\n", name);

    if(total > 7){
        printf("You won\n");
    }else{
        printf("You lose\n");
    }

    return 0;
}
