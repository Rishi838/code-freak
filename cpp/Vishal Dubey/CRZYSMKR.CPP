//FOLLOW THIS LINK TO SEE THE QUESTION https://www.spoj.com/problems/CRZYSMKR/       
/* HOW MUCH NUMBER SHOULD BE ADDED SO THST GIVEN NUMBER IS DIVISIBLE BY 11 */

#include<iostream>


using namespace std;
int main(){

   long t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long s;
        s=30*n;

        for(int i=0;i<11;i++){
            if((s+i)%11==0){
                cout<<i<<endl;
            }
        }
        }
}
