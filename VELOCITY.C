#include<stdio.h>
#include<conio.h>
void main()

{
  float v,a,t,u;
  clrscr();
  printf("enter acceleration");
  scanf("%f",&a);
  printf("enter initial velocity in");
  scanf("%f",&u);
  printf("enter time in seconds");
  scanf("%f",&t);
  v=u+(a*t);
  printf("velocity is %.3f m/s",v);
  getch();
}
