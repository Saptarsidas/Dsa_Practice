
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;
	int L[50];
	int R[50];
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int l, int r)
{
   int m;
	if (l < r) {
		m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}
void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}
void main()
{

	int data[100],size,i=0;
	//clrscr();
	printf("Enter the number of element of the array : ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
	printf("Enter the element of the array : ");
	scanf("%d",&data[i]);
	}

	printf("Given array is \n");
	printArray(data, size);

	mergeSort(data, 0, size - 1);

	printf("\nSorted array is \n");
	printArray(data, size);
	getch();
}


