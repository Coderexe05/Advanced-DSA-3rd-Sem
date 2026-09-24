#include <bits/stdc++.h>
using namespace std;
string removeduplicacies(string s)
{
  stack<char> st;
  string ans;
  for (int i = 0; i < s.size(); i++)
  {
    if (st.top() != s[i])
    {
      st.push(s[i]);
    }
    else
    {
      st.pop();
    }
  }
  while (!st.empty())
  {
    ans += st.top();
    st.pop();
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int main()
{
  string s;
  cout << "ENter the String: ";
  cin >> s;
  removeduplicacies(s);
  return 0;
}