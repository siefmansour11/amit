#include <stdio.h>
#include <stdlib.h>

int main()
{

    int arr[]= {7,10,2,8,0,9};
    int n =sizeof(arr)/sizeof(int);
    for( int a= 0; a< n-1; a++)
    {
        for(int b=a+1; b,n; b++)
        {
            if(arr[a]>arr[b])
            {
                int temp =arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        printf("%d\n",arr[i]);
        printf("%d\n",arr[i]*2);
    }
    return 0;
}
