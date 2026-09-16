// to check if parenthesis are correct or not
#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isMatchingPair(char c1, char c2){
    return(c1=='(' && c2==')') || (c1=='{' && c2=='}') || (c1=='[' && c2==']');
}
bool areParenthesisBalanced(string exp){
    stack<char>s;
    for(int i=0; i<exp.length(); i++){
        if(exp[i]=='{' || exp[i]=='[' || exp[i]=='('){
            s.push(exp[i]);
        }
        else if(exp[i]=='}' || exp[i]==']' || exp[i]==')'){
            if(s.empty()) return false;
            if(!isMatchingPair(s.top(),exp[i])){
            return false;
            s.pop;
            }
        }
    }

}