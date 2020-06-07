#include<stdio.h>
#include<conio.h>
void main()
{ int a[20];
  int i,max,n,min,sum=0;
  float avg;
  clrscr();
  printf("\nenter no. of student=");
  scanf("%d",&n);
  //printf("\nenter marks of student=");
  for(i=0;i<n;i++)
	 {printf("enter marks of student%d=",i+1);
	  scanf("%d",&a[i]);
	  sum+=a[i];
	 }
  avg=(float)sum/n;
  for(i=0;i<n;i++)
	 printf("\nmarks of student%d=%d",i+1,a[i]);
	//maximum of number
	max=a[0];
	for(i=1;i<n;i++)
	  {if(max<a[i])
		  max=a[i];
	  }
  //minimum
	min=a[0];
	for(i=1;i<n;i++)
	  {if(min>a[i])
		  min=a[i];
	  }
	printf("\nsum=%d\naverage=%.2f\nmaximum marks=%d\nminimum marks=%d",sum,avg,max,min);
	getch();
	}