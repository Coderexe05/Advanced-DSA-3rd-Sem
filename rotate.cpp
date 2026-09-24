#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>a={1,3,4,0,5,6,7};
    // cout<<a.size();
    int x;
    int y;
    cout<<"Enter number of values you want to rotate from the back to the front: ";
    cin>>y;
    if(y>a.size()){
        cout<<"Invalid Request";
        return 0;
    }
    for(int i=1; i<=y; i++){
        x=a[a.size()-1];
        for(int i=a.size()-1; i>0; i--){
            a[i]=a[i-1];
        }
        a[0]=x;
        x=0;
    }
    for(int i:a){
        cout<<i<<" ";
    }
    return 0;
}