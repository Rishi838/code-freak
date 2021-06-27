#include<bits/stdc++.h>

using namespace std;

int main() {
    int basic_salary,total,allow;
    char grade;
    cin>>basic_salary>>grade;
    if(grade=='A'){
        allow=1700;
    }
    else
    if(grade=='B'){
     allow=1500;   
    }
    else
    allow=1300;
    
    total=basic_salary+0.2*basic_salary+0.5*basic_salary+0.11*basic_salary+allow;
    cout<<total<<endl;
    cout<<allow;
}
