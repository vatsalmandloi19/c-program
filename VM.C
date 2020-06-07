#include<stdio.h>
#include<conio.h>
void main()
{
  int r1,r2,c1,c2,m,sum=0,k,c[10][10],a[10][10],b[10][10],i,j;
  clrscr();
  printf("\nenter row and colume of 1 maxtrics=");
  scanf("%d%d",&r1,&c1);
  printf("\nenter row and column of 2 maxtrics=");
  scanf("%d%d",&r2,&c2);
  if(c1==r2)
    {printf("\nenter values of 1st matrics=");
      for(i=0;i<r1;i++)
       {
	  for(j=0;j<c1;j++)
	      scanf("%d",&a[i][j]);
	}
       printf("\n enter values of 2nd matrics=");
       for(i=0;i<r2;i++)
	{
	  for(j=0;j<c2;j++)
	      scanf("%d",&b[i][j]);
	}
       for(i=0;i<r1;i++)
       {  printf("\n");
	  for(j=0;j<c1;j++)
	      printf("%d  ",a[i][j]);

	}
       printf(" \n ");
       for(i=0;i<r2;i++)
	{ printf("\n");
	  for(j=0;j<c2;j++)
	      printf("%d  ",b[i][j]);

	}
	printf("\n = \n");
	for(i=0;i<r1;i++)
	  {
	   for(j=0;j<c2;j++)
	    {sum=0;
	      for(k=0;k<r2;k++)
	       {m=a[i][j]*b[j][k];
		sum+=m;
	       }

	    c[i][j]=sum;
	   }
	   }
	for(i=0;i<r1;i++)
	 {
	   for(j=0;j<r2;j++)
	       printf("%d  ",c[i][j]);
	   printf("\n");
	 }
	}
       else
	 printf("!!!!!error!!!!!\n colume of 1st matrix must be equal to row of 2nd matrix");
       getch();
       }
