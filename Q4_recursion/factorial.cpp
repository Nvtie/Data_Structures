//Write a c++ program to calculate the factorial of a given number using recursion.

#include<iostream>
using namespace std;

//recursive function to calculate the factorial
int factorial(int n){

    //base case
    if (n==0 || n==1){
        return 1;
    }

    //recursive case
    return n * factorial(n-1);

}
int main(){

    int n;
    cout<<"Enter a positive number:";
    cin>>n;

    if(n<0){
        cout<<"Please enter a positive number."<<endl;
    }
    else{
        cout<<"The factorial of "<< n <<" = "<<factorial(n)<<endl;
    }
    return 0;
}