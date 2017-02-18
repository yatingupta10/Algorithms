#include<stdio.h>
#define n 4

int arrivalTime[n],executionTime[n],id[n];
int waitingTime[n],turnaroundTime[n],completionTime[n];
double avgWait=0.0, avgTurnaround=0.0;

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void sort()
{
	// sorting in increasing order of arrival time
	int i, j;

	for (i = 0; i < n-1; i++)     
	   for (j = 0; j < n-i-1; j++)
		   if (arrivalTime[j] > arrivalTime[j+1])
		   {
				swap(&id[j], &id[j+1]);
				swap(&arrivalTime[j], &arrivalTime[j+1]);
				swap(&executionTime[j], &executionTime[j+1]);
		   }
}

void compute()
{
	int i;

	//computing completion time

	completionTime[0] = executionTime[0];

	for(i=1;i<n;i++)
	{
		completionTime[i] = completionTime[i-1] + executionTime[i];
	}

	//computing waiting time

	waitingTime[0]=0;

	for(i=1;i<n;i++)
	{
		waitingTime[i] = completionTime[i-1] - arrivalTime[i];
		avgWait += waitingTime[i];
	}

	avgWait /= n;

	//computing turnaround time

	for(i=0;i<n;i++)
	{
		turnaroundTime[i] = waitingTime[i] + executionTime[i];
		avgTurnaround += turnaroundTime[i];
	}

	avgTurnaround /= n;
}

void disp()
{
	int i;

	printf("\nProcess \t Arrival Time \t Execution Time \t Waiting Time \t Turnaround Time \n");

	for(i=0;i<n;i++)
	{
		printf("p%d \t\t %d \t\t %d \t\t\t %d \t\t %d\n",id[i],arrivalTime[i],executionTime[i],waitingTime[i],turnaroundTime[i]);
	}

	printf("\nAvg Waiting Time : %lf \nAvg Turnaround Time : %lf \n",avgWait,avgTurnaround);
}

int main()
{
	int i;

	printf("Enter the arrival and execution time of processes : \n");

	for(i=0;i<n;i++)
	{
		scanf("%d%d",&arrivalTime[i],&executionTime[i]);
		id[i]=i+1;
	}

	sort();
	compute();
	disp();

	return 0;
}