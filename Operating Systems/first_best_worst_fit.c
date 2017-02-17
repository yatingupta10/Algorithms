

#include<stdio.h>
#define n 4
#define m 5

const int ASCENDING = 0 , DESCENDING = 1;
const int FIRST_FIT = 0, BEST_FIT = 1, WORST_FIT = 2;

int process_size[n];
int partition_size[m];

int id[n];
int space_left[m], partition_no[m];

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sort(int order)
{
    // sorting in order specified of partition_size
    int i, j;

    for (i = 0; i < m-1; i++)     
       for (j = 0; j < m-i-1; j++)

           if (order == ASCENDING && partition_size[j] > partition_size[j+1])
           {
                swap(&partition_size[j], &partition_size[j+1]);
                swap(&space_left[j], &space_left[j+1]);  
                swap(&partition_no[j], &partition_no[j+1]);               
           }    

           else if (order == DESCENDING && partition_size[j] < partition_size[j+1])
           {
                swap(&partition_size[j], &partition_size[j+1]);
                swap(&space_left[j], &space_left[j+1]);
                swap(&partition_no[j], &partition_no[j+1]);        
           }   
}

void init()
{
    int i;

    for (i = 0; i < n; ++i)
        id[i] = -1;

    for (i = 0; i < m; ++i)
        space_left[i] = partition_size[i];
}

void disp()
{
    int i,temp;

    printf("Process (Size) \t\t Allocated Partition (Size) \t Remaining partition size\n");

    for(i=0;i<n;i++)
    {
        if(id[i] == -1)         // Process i not allocated to any memory partition
            printf("%d (%d) \t\t Not Allocated \n",i,process_size[i]);
        else
        {
            temp =id[i];
            printf("%d (%d) \t\t %d (%d) \t\t\t %d \n",i, process_size[i], partition_no[temp], partition_size[temp], space_left[temp]);
        }
    }
}

void compute(int choice)
{
    int i,j;

    init();

    for(i=0;i<n;i++)    //n processes
    {
        if(choice == BEST_FIT)
            sort(ASCENDING);
        else if(choice == WORST_FIT)
            sort(DESCENDING);
        else
             {}

        for(j=0;j<m;j++)             //m partitions
        {
            if(process_size[i] <= space_left[j])
            {
                id[i] = j;        //process i is in partition j
                space_left[j] = space_left[j] - process_size[i];
                break;
            }
        }
    }

    disp();
}

int main()
{
    int i;

    printf("Enter partition's size: \n");

    for(i=0;i<m;i++)
    {
        scanf("%d",&partition_size[i]);
        space_left[i] = partition_size[i];
        partition_no[i] = i;
    }

    printf("Enter process' size: \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&process_size[i]);
    }

    printf("\nFIRST FIT\n\n");
    compute(FIRST_FIT);

    printf("\nBEST FIT\n\n");
    compute(BEST_FIT);

    printf("\nWORST FIT\n\n");
    compute(WORST_FIT);

    return 0;
}
