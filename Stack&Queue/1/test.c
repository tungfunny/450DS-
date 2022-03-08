#include <stdio.h>
#include <stdbool.h>
int top = -1;
 
bool IsFull(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}
 
bool IsEmpty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}
 
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nStack is full. Overflow condition!\n");
    }else{
        ++top;
        stack[top] = value;
    }
}
 
void Pop(){
    if(IsEmpty() == true){
        printf("\nStack is empty. Underflow condition!\n");
    }else{
        printf("%d", stack[top]);
        --top;
    }
}
 
 
int Top(int stack[]){
    return stack[top];
}
 
int Size(){
    return top + 1;
}
 
int main(){
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];

    Push(stack, 2, 3);  
    Pop();
    Pop();
    Pop();

    return 0;
}