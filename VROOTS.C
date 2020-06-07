#include<stdio.h>
#include<conio.h>
#include<math.h>
//void roots1(int ,int ,int);
//void roots2(int ,int ,int);
void proot1(float *a,float *r);

//loat root1,root2,*ptr1=&root1,*ptr2=&root2;
//int a,b,c,*cptr=&a;
void main()
{
	float a[3],r[2];
	int i;
	clrscr();
	printf("\nenter coefficient");
	for(i=0;i<3;i++)
			 scanf("%f",a[i]);
		//	printf("%u %u %u",&a,&b,&c);
	proot1(a,r);
	printf("\n roots are=");
	for(i=0;i<2;i++)
		 {	printf("%f",r[i]);
				printf("\n");
		 }
	getch();
	}
void proot1(float *a,float *r)
	{
		r[0]=(- a[1]+sqrt( a[1]* a[1]-4*a[0]*a[2]))/(2*a[0]);
		r[1]=(- a[1]-sqrt( a[1]* a[1]-4*a[0]*a[2]))/(2*a[0]);
	}

