//this is one of the best spoj question and try your best to solve it here is the link to solve the questiion https://www.spoj.com/problems/NSTEPS/
#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    int x;

    int s;

    int y;

    while(t--){
      cin>>x;
      cin>>y;
        if(x==y){
            if(x%2==0){

                s=2*x;
                cout<<s<<endl;
            }
            else
            {
                s=2*x-1;
                cout<<s<<endl;
            }
        }
    else
   if(x-y==2) {
        if(x%2==0){
            s=x+y;
            cout<<s<<endl;
        }
        else
        {  int p;
            p=y*2+1;
            cout<<p<<endl;
        }
    }
    else
    { cout<<"No Number"<<endl;
    }

    }
    }


