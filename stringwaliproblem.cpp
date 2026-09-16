#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int count=0;
    string s;
    cout<<"Enter String: ";
    cin>>s;
    int i=0;
    int j=0;
    for(int i=0; i<s.size(); i++){
        for(int j=i+1; j<s.size(); j++){
            if(s[i]==s[j]){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<i;
        }
    }
    return 0;
}