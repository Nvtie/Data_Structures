//Illustrate the implementation of circular queue 
#include<iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

//function to insert an element
void enqueue(int value){
    if ((rear + 1) % SIZE == front){
        cout<< "Queue is full!"<<endl;
    }
    else {
        if (front == -1){
            front = 0;
        }

        rear = (rear + 1) % SIZE;
        queue[rear] = value;

        cout<< value << " Inserted"<<endl;
    }
}

//Function to remove an element
void dequeue(){
    if (front == -1){
        cout<< "Queue is empty!"<<endl;
    }
    else {
        cout<< "Removed: "<< queue[front] << endl;

        if (front == rear){
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % SIZE;
        }
    }
}

//Function to display the queue
void display(){
    if (front == -1){
        cout<< "Queue is empty!"<<endl;
    }
    else {
        cout<< "Queue elements: ";
        int i = front;
        while (true){
            cout<< queue[i] << " ";
            if (i == rear){
                break;
            }
            i = (i + 1) % SIZE;
        }
        cout<<endl;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    display();

    dequeue();

    enqueue(60);

    display();

    return 0;
}

