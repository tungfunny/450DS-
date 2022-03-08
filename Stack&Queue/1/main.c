/**
 * @file main.c
 * @author tungdeptrai
 * @date 26-02-2022
 * 
 * @brief Implement two stacks in an array 
 *EX:our task is to implement  2 stacks in one array efficiently.

    Example 1:

    Input:
    push1(2)
    push1(3)
    push2(4)
    pop1()
    pop2()
    pop2()

    Output:
    3 4 -1

    Explanation:
    push1(2) the stack1 will be {2}
    push1(3) the stack1 will be {2,3}
    push2(4) the stack2 will be {4}
    pop1()   the poped element will be 3 
    from stack1 and stack1 will be {2}
    pop2()   the poped element will be 4 
    from stack2 and now stack2 is empty
    pop2()   the stack2 is now empty hence -1 .

    You don't need to read input or print anything. 
    You are required to complete the 4 methods push1, push2 which takes one argument an integer 'x' to be pushed into stack one
    and two and pop1, pop2 which returns the integer pop out from stack one and two.
    If no integer is present in the array return -1.
 */
#include<stdio.h>
#include<stdbool.h>

/**
 * @brief 
 * creat 2 stack, top, capacity of stack,
 * creat function IsEmpty(if false return -1)
 *  IsFull
 * Push1 Push2 
 * pop1 pop2 (print that poped element)
 *  
 */

int top;
int capacity;

bool IsEmpty(){
    if(top == -1) return true;
    else return false;
}

bool IsFull(){
    if (top == capacity-1) return true;
    else return false;
}

void Push(int stack[],int value){
    if(IsFull() == true) printf("full\n");
    else{
        ++top;
        stack[top]=value;
    }
}

void Pop(int stack[]){
    if(IsEmpty() == true) printf("empty\n");
    else{
        printf("%d ", stack[top]);
        --top;
    }
}

int main(){
    int stack[capacity];
    int capacity = 9;
    int top = -1;
    Push(stack,2);
    Push(stack,3);
    Pop(stack);
    Pop(stack);    Pop(stack);    Pop(stack);

    return 0;
}
