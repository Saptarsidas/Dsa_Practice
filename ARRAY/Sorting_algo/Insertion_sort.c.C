// Insertion sort in C

#include <stdio.h>
#include <conio.h>

// Function to print an array
void printArray(int array[], int size) {
  int i=0;
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertionSort(int array[], int size) {
  int step,key,j;
  for (step = 1; step < size; step++) {
    key = array[step];
    j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
  int data[100],size,i=0;
  //clrscr();
  printf("Enter  the array size  : ");
  scanf("%d",&size);
  for(i=0;i<size;i++)
  {
	printf("Enter the element of the array : ");
	scanf("%d",&data[i]);
  }
  insertionSort(data, size);
  printf("Sorted array in ascending order:\n");
  printArray(data, size);
  getch();
}