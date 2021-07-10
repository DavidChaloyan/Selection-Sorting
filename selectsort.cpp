#include <iostream>
using namespace std;
void swap(int *xp, int *yp)
{
	//elements swaping function
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void select(int arr[], int n) //sorting function
{
int i, j, min;
for (i=0; i<n-1; i++)
{
		min=i;
	for (j=i+1; j<n; j++)
		if (arr[j]<arr[min])
		min=j;
		swap(&arr[i], &arr[min]);	
}
}

