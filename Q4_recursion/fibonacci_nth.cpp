//Write a c++ program to find the nth term of fibonacci series using recursion.
#include<iostream>
using namespace std;

//recursive program to find fibonacci term
int fibonacci(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;

    }

    //recursive case
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){

    int n;
    cout<<"Enter a positive number:";
    cin>>n;

    if(n<0){
        cout<<"Enter a positive number."<<endl;
    }
    else {
        cout<<"The "<< n << "th term of fibonacci series = "<<fibonacci(n)<<endl;
    }
    return 0;
}