//Write a C++ program to generate the first N terms of a fibonacci series
#include<iostream>
using namespace std;

//recursive function to generate fibonacci series
void fibonacci(int n, int a, int b){

    //base case
    if(n==0){
        return;
    }

    //display current term
    cout<<a<< " ";

    //recursive call
    fibonacci(n-1,b,a+b);
}

int main(){

    int n;

    cout<<"Enter a positive number:";
    cin>>n;

    if(n <=0){
        cout<<"Please enter a positive number."<<endl;
    }
    else{
        cout<<"Fibonacci series: ";
        fibonacci(n,0,1);

    }
    return 0;
}