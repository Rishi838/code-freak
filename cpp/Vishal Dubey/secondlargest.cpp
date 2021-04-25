//printing second largest number in a given array
#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n=3;
        
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int counter = 1;
        {
            while (counter < n)
            {
                for (int i = 0; i < n-1 ; i++)
                {
                    if (arr[i] > arr[i + 1])
                    {
                        int temp = arr[i];
                        arr[i] = arr[i + 1];
                        arr[i + 1] = temp;
                    }
                }
                counter++;
            }
            
            
        
        cout<<arr[1]<<" ";
    }
        cout<<endl;
    }
}
        
