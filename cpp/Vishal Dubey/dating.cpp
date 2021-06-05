#include <stdio.h>

int main()

{int t,s=0,n,i,bug;

scanf("%d",&t);

while(t>0){

scanf("%d %d ",&n,&bug);

    int a[n];

    for( i=0; i<n; i++){

        scanf("%d",&a[i]);

        s+=a[i];

    } if(s>bug)?

    printf("YES\n"):printf("NO\n");

 

t--;

s=0;

    }

return 0;

}
