#include<stdio.h>
#include<conio.h>
void enter(int a[][10],int ,int );
void print(int a[][10],int ,int );
int max(int a[][10],int ,int );
void sum(int a[][10],int b[][10],int ,int ,int ,int );
void sub(int a[][10],int b[][10],int ,int ,int ,int );
void product(int a[][10],int b[][10],int ,int ,int ,int );
void transpose(int a[][10],int ,int );
void main()
{
  int a[10][10],ar[10][10],ab,b,r,c,m;
  clrscr();
  printf("enter row and column of first maxtrics=");
  scanf("%d%d",&r,&c);
  printf("enter row and column of second maxtrics=");
  scanf("%d%d",&ab,&b);
  printf("\nenter array elementsof first maxtrics=\n");
		enter(a,r,c);
  printf("\n array elements=\n");
		print(a,r,c);
  printf("\nenter array elements of second maxtrics=\n");
		enter(ar,ab,b);
  printf("\n array elements of second maxtrics=\n");
  print(ar,ab,b);
		m=max(a,r,c);
  printf("\nmaximum no. in first maxtrics=%d",m);
  printf("\nmaximum no. in second maxtrics=%d",max(ar,ab,b));
  printf("\nsum of matricx=\n");
		sum(a,ar,r,c,ab,b);
  printf("\nsub of matricx=\n");
		sub(a,ar,r,c,ab,b);
  printf("\n transpose of 1 matricx=\n");
		transpose(a,r,c);
  printf("\n transpose of 2 matricx=\n");
		transpose(ar,ab,b);
  printf("\n product of matricx=\n");
		product(a,ar,r,c,ab,b);
  getch();
}
void enter(int a[][10],int r,int c)
{
 int i,j;
  for(i=0;i<r;i++)
	 {
		for(j=0;j<c;j++)
		 {
			scanf("%d",&a[i][j]);
		 }
	 }
}
void print(int a[][10],int r,int c)
{
 int i,j;
  for(i=0;i<r;i++)
	 {
		for(j=0;j<c;j++)
		 {
			printf("%d ",a[i][j]);
		 }
		 printf("\n");

	 }
}
int max(int a[][10],int r,int c)
{
  int i,j,m;
  m=a[0][0];
  for(i=0;i<r;i++)
  {
	  for(j=1;j<c;j++)
	  {
		 if(m<a[i][j])
			 m=a[i][j];
	  }
  }
  return (m);
}
void sum(int a[][10],int b[][10],int r,int c,int ab,int b2)
{ int i,j;
	if((ab==r)&&(b2==c))
		 for(i=0;i<r;i++)
			{ for(j=0;j<c;j++)
				{ printf("  %d  ",a[i][j]+b[i][j]);
				}
			printf("\n");
			}
	else
		 printf("\nsum cant be perform");
}
void sub(int a[][10],int b[][10],int r,int c,int ab,int b2)
{ int i,j;
	if((ab==r)&&(b2==c))
		 for(i=0;i<r;i++)
			{ for(j=0;j<c;j++)
				{ printf("  %d  ",a[i][j]-b[i][j]);
				}
			printf("\n");
			}
	else
	  printf("sub. cant be performed");
}
void transpose(int a[][10],int r,int c)
{
 int i,j;
  for(i=0;i<c;i++)
	 { for(j=0;j<r;j++)
			{printf("  %d  ",a[j][i]);
		  }
		printf("\n");
	 }
}
void product(int a[][10],int b[][10],int r,int c,int ab,int b2)
{
	int i,j,k,m=0;
	 if(c==ab)
		{for(i=0;i<c;i++)
		 { for(j=0;j<ab;j++)
			 {for(k=0;k<c;k++)
				{ m+=a[i][k]*b[k][j];
				 }
				  printf("  %d  ",m);
				  m=0;

			  }
		 printf("\n");
		}
		}
	 else
		printf("\n multiplication cnt be done");
}