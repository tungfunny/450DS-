#include<stdio.h>
#include<stdbool.h>

int top = -1;
int stack[];
int capacity;

bool IsEmpty(){
    if (top == -1) return true;
    else return false;
}

bool IsFull(){
    if (top > capacity-1) return true;
    else return false;
}

void Push(int stack[], int value){
    if(IsFull) print("Stack is Full, OverFlow/n");
    else{
        ++top;
        stack[top] = value;
    }
}

void Pop(int stack[]){
    if(IsEmpty) print("Stack is Empty, UnderFlow/n");
    else{
        --top;
    }
}

int Top(int stack[]){
    return stack[top];
}

int Size(int stack[]){
    return top+1;
}


int main(){

    return 0;
}