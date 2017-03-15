#include <stdio.h>
#define no_of_frames 4			//Assuming no_of_pages >= no_of_frames
#define no_of_pages 20

int pages[no_of_pages];
int frames[no_of_frames];
int pf=0;		// page faults

// no_of_pages 20 - 7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
// no_of_pages 20 - 1 2 3 4 2 1 5 6 2 1 2 3 7 6 3 2 1 2 3 6

void init()
{
	int i;

	for(i=0;i<no_of_frames;i++)
		frames[i]=-1;
}

void disp()
{
	int i;

	for (i = 0; i < no_of_frames; i++)
	{
		printf("%d ",frames[i]);
	}

	printf("\n");
}

int contains(int x)
{
	int i, res= -1;

	for(i=0;i<no_of_frames;i++)
	{
		if(frames[i] == x)
		{
			res = i;
			break;
		}
	}

	return res;
}

void compute_FIFO()
{		//Stack implementation
	int i,j,pointer = 0;
	pf=0;

	init();

	for(i = 0; i < no_of_pages; i++)
	{
		if(contains(pages[i]) == -1)
		{
			frames[pointer]=pages[i];
			pf++;

			pointer = (pointer+1) % no_of_frames;
		}
	}

	printf("FIFO - Page Faults : %d \n",pf);
}

void compute_LRU()
{		//Queue implementation
	int i,j,
	 index,				// index at which current page is already present in frames[]
	 pointer = 0;		// index at which current page to be stored in frames[]
	pf=0;

	init();

	for (i = 0; pf < no_of_frames; i++)
	{
		index = contains(pages[i]);

		if (index == -1)
		{
			frames[pointer]=pages[i];
			pf++;

			pointer++;
		}
		else
		{
			for(j = index; j < no_of_frames -1; j++)
				frames[j] = frames[j+1];

			frames[i-1] = pages[i];
		}
	}

	for( ; i < no_of_pages; i++)
	{
		index = contains(pages[i]);

		if(index == -1)
		{		//shifting frames to the left by 1; adding current frame to the end
			for(j = 0; j < no_of_frames -1; j++)
				frames[j] = frames[j+1];

			frames[j] = pages[i];
			pf++;
		}
		else
		{		//moving existing frame to the end
			for(j = index; j < no_of_frames - 1; j++)
				frames[j] = frames[j+1];

			frames[j] = pages[i];
		}
	}

	printf("LRU - Page Faults : %d \n",pf);
}

int linear_search(int start, int item)
{
	int i, res = no_of_pages;

	for (i = start; i < no_of_pages; i++)
	{
		if(item == pages[i])
		{
			res = i;
			break;
		}
	}

	return res;
}

int getOptimalPosition(int next_pos[no_of_frames])
{
	int i, max = 0, pos = -1;

	for (i = 0; i < no_of_frames; i++)
	{
		if (next_pos[i] > max)
		{
			max = next_pos[i];
			pos = i;
		}
	}

	return pos;
}

void compute_Optimal()
{		//Stack implementation
	int i,j,
	 index,						// index at which current page is already present in frames[]
	 pointer = 0,				// index at which current page to be stored in frames[]
	 next_pos[no_of_frames];	// stores the position of next occurence of each frame

	pf=0;

	init();

	for (i = 0; pf < no_of_frames; i++)
	{
		index = contains(pages[i]);

		if (index == -1)
		{
			frames[pointer]=pages[i];
			pf++;

			pointer++;
		}
	}

	for( ; i < no_of_pages; i++)
	{
		index = contains(pages[i]);

		if(index == -1)
		{
			for(j = 0; j < no_of_frames; j++)
				next_pos[j] = linear_search(i , frames[j]);
			
			pointer = getOptimalPosition(next_pos);

			frames[pointer] = pages[i];
			pf++;
		}
	}

	printf("Optimal - Page Faults : %d \n",pf);
}

int main(void) {

	int i;

	printf("Enter %d pages :\n", no_of_pages);
	for(i = 0; i < no_of_pages; i++)
		scanf("%d", &pages[i]);

	compute_FIFO();
	compute_LRU();
	compute_Optimal();

	return 0;
}
