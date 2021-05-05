//question link https://www.spoj.com/problems/AMR12D/


#include <bits/stdc++.h>
using namespace std;


void reverseStr(string& str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


int main()
{ int t;
  cin>>t;
  while(t--){
    string str ;
    string t;
    cin>>str;
      t=str;
    reverseStr(str);
  if(t==str){
  cout<<"YES"<<endl;}
  else
  {cout<<"NO"<<endl;}

}}
