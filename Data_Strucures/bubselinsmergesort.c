#include<stdio.h>

void bub_sort(int A[],int n)
{
    int i,j,c;
    float temp;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
        for(c=0;c<n;c++)
        printf("%d",A[c]);
        printf("\n");
    }
}

void sel_sort(int A[],int n)
{
    int i,j,c,M;
    float temp;
    for(i=0;i<(n-1);i++)
    {
        M=i;
        for(j=i+1;j<n;j++)
        {
            if(A[M]>A[j])
            M=j;
        }
        if(M!=i)
        {
            temp=A[M];
            A[M]=A[i];
            A[i]=temp;
        }
        for(c=0;c<n;c++)
        printf("%d",A[c]);
        printf("\n");
    }
}

void insert_sort(int A[],int n)
{
    int i,j,k,c;
    float temp;
    for(i=0;i<n;i++)
    {
        temp=A[0];
        for(j=n-1;j>=n-i&&A[j]>temp;j--);
        for(k=0;k<j;k++)
            A[k]=A[k+1];
        A[j]=temp;
        for(c=0;c<n;c++)
        printf("%d",A[c]);
        printf("\n");
    }
}
void merge(int arr[],int l,int m,int h);

void merge_sort(int arr[],int low,int high)
{
  int mid;
  if(low<high) {
    mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}

void merge(int arr[],int l,int m,int h)
{
  int arr1[10],arr2[10];
  int n1,n2,i,j,k;
  n1=m-l+1;
  n2=h-m;

  for(i=0; i<n1; i++)
    arr1[i]=arr[l+i];
  for(j=0; j<n2; j++)
    arr2[j]=arr[m+j+1];

  arr1[i]=9999;  // To mark the end of each temporary array
  arr2[j]=9999;

  i=0;
  j=0;
  for(k=l; k<=h; k++) { //process of combining two sorted arrays
    if(arr1[i]<=arr2[j])
      arr[k]=arr1[i++];
    else
      arr[k]=arr2[j++];
  }
}
void main()
{   system("color F0");
    int ch,i;
    int X[5]={3,1,7,4,2};
    printf("\n1.bubble sort\n2.selection sort\n3.insertion sort\n4.merge sort\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: bub_sort(X,5); break;
        case 2: sel_sort(X,5); break;
        case 3: insert_sort(X,5); break;
        case 4: merge_sort(X,0,4);
        for(i=0; i<5; i++)
    printf("%d",X[i]); break;
    }
}
