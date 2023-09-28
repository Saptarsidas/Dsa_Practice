#include<stdio.h>
int main()
{
    int A[2][2],B[2][2],C[2][2],i,j,k,ch,sum=0;
    printf("Enter 9 numbers for the first matrix=");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter 9 numbers for second matrix=");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
    printf("Enter the value of ch=");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			sum=sum+A[k][j]*B[i][k];
			C[i][j]=sum;
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		   printf("The multiplication result is = %d\n",C[i][j]);
		}
	}
     break;

    case 2:
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			sum=sum+A[i][j]+B[i][j];
			C[i][j]=sum;
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		   printf("The additiontion result is = %d\n",C[i][j]);
		}
	}
    break;
    case 3:
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			sum=sum+A[i][j]-B[i][j];
			C[i][j]=sum;
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		   printf("The substraction result is = %d\n",C[i][j]);
		}
	}
    break;
    case 4:
    for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			sum=sum+A[i][j]/B[i][j];
			C[i][j]=sum;
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		   printf("The divition result is = %d\n",C[i][j]);
		}
	}
    break;
    default:
    printf("Wrong choice=");
    return 0;
   }
}