#include <stdio.h>
#include <stdlib.h>

void main()
{

	// This pointer will hold the
	// base address of the block created
	int *ptr, *ptr1;
	int n, i;
	clrscr();

	// Get the number of elements for the array
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("\nEnter number of elements : %d ", n);


	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n * sizeof(int));

	// Dynamically allocate memory using calloc()
	ptr1 = (int*)calloc(n, sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL || ptr1 == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");

		// Free the memory
		free(ptr);
		printf("Malloc Memory successfully freed.\n");

		// Memory has been successfully allocated
		printf("\nMemory successfully allocated using calloc.\n");

		// Free the memory
		free(ptr1);
		printf("Calloc Memory successfully freed.\n");
	}

	getch();
}
