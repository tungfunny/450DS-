/**
 * @file main.c
 * @author tungdeptrai
 * @date 24-02-2022
 *      
 * @brief Queue basic function
 * 
 */

#include<stdio.h>
#include<stdbool.h>

int queue[]; //First in, First out
volatile int rear; //Index of element on  will be enqueued in next time
volatile int front; //Index of element on top of array = index of element will be dequeued in next time
int capacity; //size of queue , from 0 to (capacity-1)

bool IsFull(){
    if (rear == capacity) return true;
    else return false;
}

bool IsEmpty(){
    if (rear = front) return true;
    else return false;
}

int Enqueue(int queue[], int value){
    if(IsFull) printf("Queue is full, OverFlow\n");
    else{
        queue[rear] = value;
        ++rear;
    }
}

int Dequeue(int queue[]){
    if(IsEmpty) printf("Queue is Empty, UnderFlow\n");
    else{
        queue[front] = 0;
        --front;
    }
}

int Size(int queue[]){
    return(rear-front);
}

int Top(int queue[]){
    return queue[front];
}

int main(){
    int queue[20]={2,7,4,3};
    int front = 0;
    int rear = 4;
    int capacity = 20;

    for(int i=0; i<4; i++){
        Enqueue(queue, queue[i]);
        Dequeue(queue);

    }

    for(int i=0; i<4; i++){
        printf(" %d", queue[i]);
    }
    return 0;
}