/**
 * @file stack.h
 * @author tungdeptrai
 * @date 24-02-2022
 * 
 * @brief Basic Function of Stack
 * 
 */
#include<stdio.h>
#include<stdbool.h>

int top = -1;

bool Full(int capacity){
    if(top >= capacity - 1){
        return true;
    }else{
        return false;
    }
}
 
bool Empty(){
    if(top == -1){
        return true;
    }else{
        return false;
    }
}

void Push(int stack[], int value, int capacity){
    if(Full(capacity) == true){
        printf("\nStack is full. Overflow condition!");
    }else{
        ++top;
        stack[top] = value;
    }
}

void Pop(){
    if(Empty() == true){
        printf("\nStack is empty. Underflow condition!");
    }else{
        --top;
    }
}
 
int Top(int stack[]){
    return stack[top];
}
 
int Size(){
    return top + 1;
}
