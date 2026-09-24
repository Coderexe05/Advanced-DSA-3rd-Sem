#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,r;
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>r;
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    for(int i=0; i<v[i]; i++){
        if(v[i]>0){
            char x;
            for(int i=1; i<=v[i]; i++){
                x=r[r.size()-1];
                for(int i=r.size()-1; i>0; i--){
                    r[i]=r[i-1];
                }
                r[0]=x;
                x=0;
            }
        }
        // else if(v[i]<0){
        //     for(int )
        // }
        // else{
        //     cout<<"Invalid Request"<<endl;
        // }
    }
    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }
    return 0;
}