#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cout<<"Enter Vector size: ";
    cin>>a;
    stack<int>s;
    vector<int>v1(a);
    for(int i=0; i<a; i++){
        int x;
        cin>>x;
        s.push(x);
        x=0;
    }
    return 0;
}