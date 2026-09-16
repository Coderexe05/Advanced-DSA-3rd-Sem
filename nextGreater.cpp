#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    stack<int>s;
    int a;
    cout<<"Enter no. of elements in stack: ";
    cin>>a;
    int b;
    for(int i=0; i<a; i++){
        cin>>b;
        s.push(b);
        b=0;
    }
    cout<<"Stack: ";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    vector<int>z(a,-1);
    int max=s.top();
    s.pop();
    int index=a-2;
    while(!s.empty()){
        if(s.top()<max){
            z[index]=max;
        }
        else{
            max=s.top();
            index--;
            s.pop();
        }
    }
    for(int i:z){
        cout<<"Next Greater element for every stack element: ";
        cout<<i<<" ";
    }
    return 0;
}