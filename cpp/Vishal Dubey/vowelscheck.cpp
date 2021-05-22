#include <bits/stdc++.h>


using namespace std;

int main() {
  char str[50];
  cin>>str;
  int count=0;
    
    int l=strlen(str);
    for(int i=0;i<l;i++){
        if(str[i]=='a'||str[i]=='o'||str[i]=='i'||str[i]=='e'||str[i]=='u'){
            count++;
        }
    }

    cout<<count;
}
