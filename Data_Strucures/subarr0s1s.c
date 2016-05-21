#include <stdio.h>
#include <stdlib.h>
  
int max(int a, int b) { return a>b? a: b; }
  
int findSubArray(int arr[], int n)
{
    int maxsize = -1, startindex;  
  
    int sumleft[n];
    int min, max; 
    int i;
  
    sumleft[0] = ((arr[0] == 0)? -1: 1);
    min = arr[0]; max = arr[0];
    for (i=1; i<n; i++)
    {      
        sumleft[i] = sumleft[i-1] + ((arr[i] == 0)? -1: 1);
        if (sumleft[i] < min)
            min = sumleft[i];
        if (sumleft[i] > max)
            max = sumleft[i];
    }
  
    int hash[max-min+1];
  
    for (i=0; i<max-min+1; i++)
        hash[i] = -1;
  
    for (i=0; i<n; i++)
    {
        if (sumleft[i] == 0)
        {
           maxsize = i+1;
           startindex = 0;
        }
  
        if (hash[sumleft[i]-min] == -1)
            hash[sumleft[i]-min] = i;
        else
        {
            if ( (i - hash[sumleft[i]-min]) > maxsize )
            {
                maxsize = i - hash[sumleft[i]-min];
                startindex = hash[sumleft[i]-min] + 1;
            }
        }
    }
    if ( maxsize == -1 )
        printf("No such subarray");
    else
        printf("%d to %d", startindex, startindex+maxsize-1);
  
    return maxsize;
}
  
int main()
{
    int arr[] =  {1, 0, 0, 1, 0, 1, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
  
    findSubArray(arr, size);
    return 0;
}
