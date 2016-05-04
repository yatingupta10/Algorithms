#include <iostream.h>
#include <conio.h>

template <class bubble>
void bubble(bubble a[], int n) {
	int i,j;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j]){
				bubble z;
				z = a[i];
				a[i]=a[j];
				a[j]=z;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

void main() {
	int a[6] = {1,7,5,9,4,3};
	clrscr();
	bubble(a,6);
	getch();
}