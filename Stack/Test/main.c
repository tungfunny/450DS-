#include<stdio.h>
#include<string.h>

void Check(char stack[], char str[]){
    int size = strlen(str);
    int top = -1;

    for(int i=0; i<size; i++){
        switch(str[i]){
            case '(' :{
                ++top; break;
            }
            case ')' :{

                --top; break;
            }
        }
        if(top < -1) break;

    } 
    if (top == -1)
        printf("balanced\n");
    else printf("not balanced\n");
}

int main(){
    //Input string, stack
    char stack[15];
    char str[] = "()()";
    //Check string
    Check(stack, str);
    //print balance or not balance
    return 0;
}