// you are given an integer array nums that the sum of the digit of nums [i] = i, if no such index exists, return -1.

#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int a){
    if(a==0)
    return 0;
    return a%10+sumOfDigits(a/10);
}

int main(){
    int a;
    cout<<"Enter number of elements: ";
    cin>>a;
    vector<int>v(a);
    for(int i=0; i<a; i++){
        cin>>v[i];
    }
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    int x;
    for(int i=0; i<a; i++){
        x=sumOfDigits(v[i]);
        if(x==i){
            cout<<"Smallest index at which sum of sigit is equal to its index: "<<i;
            return 0;
        }
        x=0;
    }
    return 0;
}