// you are given a string s, cosisting of alphabets, digits and special characters,
// create a new string by reversing only the alphabets, present in s while keeping
// all other charracters in their original positions, print the newly formed string.

#include <iostream>
#include <string>
#include <cctype>
#include <utility>

using namespace std;

string reverseAlphabets(string s) {
    int left = 0;
    int right = s.length() - 1;
    
    while (left < right) {
        if (!isalpha(s[left])) {
            left++;
        } else if (!isalpha(s[right])) {
            right--;
        } else {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
    
    return s;
}

int main() {
    string s = "e*12hi&7AX";
    cout << reverseAlphabets(s) << endl;
    return 0;
}