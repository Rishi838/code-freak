#include <iostream>

using namespace std;

int main() {
    int a,b,c,v;
    int X,Y,z;
    int e=0,num=0,tum=0,hel=0;
    cin>>a>>b>>c>>X>>Y>>z;
    int n,l;
    cin>>n;
  int  k=a+b+c;
    int g=X+Y+z;
    if(k<=5&&k!=0){
        n--;
    }
    else
    if(k>5){
        if(k%5==0){
            l=k/5;
            n=n-l;
            if(n<0){
                cout<<"NO";
                e++;
            }
        }
        else
        {
            l=k/5;
            l=l+1;
            n=n-l;
             if(n<0){if(e==0){
                cout<<"NO"<<endl;
                 num++;
             }
            }
        }
    }
    
    if(g<=10&&g!=0){
        n--;
    }
    else
    if(g>10){
        if(g%10==0){
           v=g/10;
            n=n-v;
             if(n<0){ if(num==0&&e==0){
                cout<<"NO"<<endl;
                 tum++;
             }
                   
                 
             }
        }
        else
        {
v=g/10;
            v=v+1;
            n=n-v;
             if(n<0){if(e==0&&num==0&&tum==0){
                cout<<"NO";
                 hel++;
             }
            }
        }
    }
    if(n>=0){
        cout<<"YES";
    }
    if(n<0){if(hel==0&&e==0&&num==0&&tum==0){
        cout<<"NO";}
    }
}
