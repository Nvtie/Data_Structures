//Write a function to implement deque operations
#include <stdio.h>

#define SIZE 5

int deque[SIZE];
int front = -1;
int rear = -1;

//check whether deque is full
int isFull(){
    return ((front == 0 && rear == SIZE - 1) || (front == rear + 1));
}

// insert element at the front
void insertFront(int value){

    if (isFull()){
        printf("Deque is full\n");
        return;
    }

    if (front == -1){
        front = rear = 0;
    }
    else if (front == 0){
        front = SIZE - 1;
    }
    else{
        front--;
    }

    deque[front] = value;

    printf("Inserted %d at front\n", value);
}

//insert element at the rear
void insertRear(int value){

    if (isFull()){
        printf("Deque is full\n");
        return;
    }

    if (rear == -1){
        front = rear = 0;
    }
    else if (rear == SIZE - 1){
        rear = 0;
    }
    else{
        rear++;
    }

    deque[rear] = value;

    printf("Inserted %d at rear\n", value);
}

//Delete element from the front
void deleteFront(){

    if (front == -1){
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted %d from front\n", deque[front]);

    if (front == rear){
        front = rear = -1;
    }
    else if (front == SIZE - 1){
        front = 0;
    }
    else{
        front++;
    }
}

//Delete element from the rear
void deleteRear(){

    if (rear == -1){
        printf("Deque is empty\n");
        return;
    }

    printf("Deleted %d from rear\n", deque[rear]);

    if (front == rear){
        front = rear = -1;
    }
    else if (rear == 0){
        rear = SIZE - 1;
    }
    else{
        rear--;
    }
}

//Display elements of deque
void displayDeque(){

    if (front == -1){
        printf("Deque is empty\n");
        return;
    }

    printf("Elements in deque: ");

    int i = front;
    while (1){
        printf("%d ", deque[i]);
        if (i == rear){
            break;
        }
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main(){
    
    insertRear(1);
    insertRear(2);
    insertFront(3);
    insertFront(4);
    displayDeque();

    deleteRear();
    displayDeque();

    deleteFront();
    displayDeque();

    return 0;
}