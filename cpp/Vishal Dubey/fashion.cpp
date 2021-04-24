//here number of test case t, and the hotness of girl and boy described by number from 1 to 10 then make a pair of boys and girl in which the product of there hotness is maximum


#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int ar[n];
    
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
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
            
        }
        counter=1;

        while (counter < n)
        {
            for (int i = 0; i < n-1; i++)
            {
                if (ar[i] > ar[i + 1])
                {
                    int tep = ar[i];
                    ar[i] = ar[i + 1];
                    ar[i + 1] = tep;
                }
            }
            counter++;
        }

      
        
          int sum=0;
          for(int i=0;i<n;i++)
          {
              sum+=arr[i]*ar[i];
          }
       
       cout<<sum<<endl;
    }
}
