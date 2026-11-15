//Write a program to implement enqueue and dequeue operations in a queue
#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

//function to insert an element
void enqueue(int value){

    if (rear == SIZE - 1){
        cout <<"Queue is full!"<<endl;
    }
    else{
        if (front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = value;

        cout << value <<"Inserted into queue."<<endl;
    }
}

//Function to remove an element
void dequeue(){

    if (front == -1 || front > rear){
        cout << "Queue is empty!"<<endl;
    }
    else{
        cout << "Removed element: " << queue[front] << endl;

        front++;

        if(front>rear){
            front = -1;
            rear= -1;
        }
    }
}

//function to display the queue
void displayQueue(){
    if (front == -1){
        cout << "Queue is empty!"<<endl;
    }
    else{
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++){
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    displayQueue();
    dequeue();
    displayQueue();
    enqueue(50);
    displayQueue();

    return 0;
}