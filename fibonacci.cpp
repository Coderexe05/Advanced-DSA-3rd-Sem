#include<iostream>
using namespace std;

int fibo(int a){
    if(a==0)
    return 0;
    if(a==1)
    return 1;
    return fibo(a-1)+fibo(a-2);
}

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Fibonacci sequence: ";
    for(int i=1; i<=a; i++){
        cout<<fibo(i)<<" ";
    }
    return 0;
}