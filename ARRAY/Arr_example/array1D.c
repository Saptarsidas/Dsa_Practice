#include<stdio.h>

void main()
{
	int a[5],n,i,position;
	printf("How many elements do you want to insert?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter value for a[%d]",i);
		scanf("%d",&a[i]);
	}

	printf("Entered elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("| %d |",a[i]);
	}

    printf("\nEnter the location where you wish to delete element:");
    scanf("%d", &position);

    if (position >= n+1)
    {
       printf("Deletion not possible.\n");
    }

    else
    {
        for (i = position - 1; i < n - 1; i++)
        {
             a[i] = a[i+1];
        }

        printf("Resultant array:\n");

        for (i = 0; i < n - 1; i++)
        {
            printf("%d  ", a[i]);
        }

   }


}
