/**
 * @file main.c
 * @author tungdeptrai
 * @date 22-02-2022
 * 
 * @brief Stack
 * EX:
 * 
 */
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
/*
Chúng ta sẽ chỉ có thể push(thêm phần tử) vào đỉnh stack khi stack chưa đầy.
 Nếu stack đầy, chúng ta sẽ đưa ra thông báo và không thực hiện push.
 Ngược lại, ta sẽ tăng top lên một đơn vị và gán giá trị cho phần tử tại chỉ số top.
*/
void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("\nStack is full. Overflow condition!");
    }else{
        ++top;
        stack[top] = value;
    }
}
/*
Chúng ta sẽ chỉ có thể pop(xóa phần tử) khỏi đỉnh stack khi stack không trống. 
Nếu stack trống, chúng ta sẽ đưa ra thông báo và không thực hiện pop. 
Ngược lại, ta sẽ giảm giá trị top đi một đơn vị.
*/
void Pop(){
    if(IsEmpty() == true){
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

int main(){
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];
    
    // pushing element 5 in the stack .
    Push(stack, 5, capacity); 
    
    printf("\nCurrent size of stack is %d", Size());
    
    Push(stack, 10, capacity);
    Push(stack, 24, capacity);
    
    printf("\nCurrent size of stack is %d", Size());
    
    // As the stack is full, further pushing will show an overflow condition.
    Push(stack, 12, capacity); 
    
    //Accessing the top element
    printf("\nThe current top element in stack is %d", Top(stack));
    
    //Removing all the elements from the stack
    for(int i = 0 ; i < 3;i++){
        Pop();
    }

    printf("\nCurrent size of stack is %d", Size());
    
    //As the stack is empty , further popping will show an underflow condition.
    Pop();  
}