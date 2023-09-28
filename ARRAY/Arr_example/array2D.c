#include <stdio.h>
#include<conio.h>

void main()
{
    static int a[25][25];
    int r,c,i,j,ne_r,ne_c,k,ne;
    int ch,res;
    printf("Enter No of Row for 2d array:");
    scanf("%d",&r);
    printf("Enter No of Col for 2d array:");
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=1;j<=c;j++)
        {
            printf("Enter elements in a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements in 2D array:\n");
    for(i=0;i<r;i++)
    {
        a[i][0]=c;

        for(j=1;j<=c;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\t ");
        printf("\n");
    }
    //deletion
    printf("Enter Row to delete:");
    scanf("%d",&ne_r);
    printf("Enter Column to delete:");
    scanf("%d",&ne_c);

    if(ne_r>=r || ne_c>a[ne_r][0])
    {
        printf("Invalid !!!!\n");
    }
    else
    {
        for(k=ne_c;k<=a[ne_r][0];k++)
        {
            a[ne_r][k]=a[ne_r][k+1];
        }
        a[ne_r][0]--;

        //display
        printf("Elements in array after deletion:\n");
        for(i=0;i<r;i++)
        {
            for(j=1;j<=a[i][0];j++)
            {
                printf("%d",a[i][j]);
            }
        printf("\t ");
        printf("\n");
        }
    }


}
