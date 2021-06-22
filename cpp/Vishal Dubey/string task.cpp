#include <iostream>

using namespace std;

int main() {
    string s;
    cin>>s;
    
    int k=s.length();
    char ch[k];
    for(int i=0;i<k;i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y'&&s[i]!='Y'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'){
          int g=s[i];
          
          if(g>=65&&g<=90){
              s[i]=g+32;
              cout<<"."<<s[i];
          }else
           cout<<"."<<s[i];
        }
    }
 
}
