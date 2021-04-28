//THis is given question link go through it to sove it https://www.spoj.com/problems/SILVER/ hope you will enjoy it
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	while(1){
		int i=1;
		cin>>n;
		if(n==0)
		break;
		else if(n==1)
		{cout<<"0"<<endl;
		  continue;
			
		}
		else
		{while(i<sqrt(n))
			{
				if(n<pow(2,i+1))
				{cout<<i<<endl;
					break;
					
				}
				else if(n==pow(2,2+i))
				{cout<<i+1<<endl;
					break;
					
				}
				i++;
			}
			continue;
		}
	}
}
