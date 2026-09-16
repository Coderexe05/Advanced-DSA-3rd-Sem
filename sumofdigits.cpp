#include<iostream>
using namespace std;

int sumofDigits(int a){
    if(a==0)
    return 0;
    return (a%10)+sumofDigits(a/10);
}

int main(){
    int a;
    cout<<"Enter number to get sum of its digit: ";
    cin>>a;
    cout<<sumofDigits(a);
    return 0;
}