//Write a recursive C++ program to calculate the sum of the first N natural numbers.
#include<iostream>
using namespace std;

//recursive function to calculate the sum
int sum(int n){

    //base case
    if(n==0){
        return 0;
        
    }

    // recursive case
    return n + sum(n-1);
}

int main(){

    int  n;
    cout<<"Enter a positive number:";
    cin>>n;

    if(n<0){
        cout<<"Please enter a positive number."<<endl;
    }
    else{
        cout<<"The sum of first "<< n <<" ,natural numbers ="<<sum(n)<<endl;
    }
    return 0;
}