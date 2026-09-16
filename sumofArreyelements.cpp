#include<iostream>
#include<vector>
using namespace std;

int sumofArrayelements(const vector<int>&a, int b){
    if(b<0)
    return 0;
    return a[b]+sumofArrayelements(a,b-1);
}

int main(){
    int b;
    cout<<"Enter number of Elements: ";
    cin>>b;
    vector<int> a(b);
    for(int i=0; i<b; i++){
        cin>>a[i];
    }
    cout<<"Sum of elements is: "<<sumofArrayelements(a,b-1);

    return 0;
}