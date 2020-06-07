#include<iostream.h>
#include<conio.h>
void push();
void pop();
void display();
int stack[5],top=-1;
void main()
{
 clrscr();
 int ch,i;
 do
 {cout<<"\n\t1.Intersion\n\t2.Deletion\n\t3.Display\n\t4.EXIT\nenter your choice:";
  cin>>ch;
  switch(ch)
  {case 1:push();
	  break;
   case 2:pop();
	  break;
   case 3:display();
	  break;
   case 4:
	  break;
   default:cout<<"\n\t\tenter correct number!!!!";
  }
 }while(ch!=4);
}
void push()
{
  if(top>3)
	cout<<"stack overflow!!!!";
  else
	{cout<<"enter element:";
	cin>>stack[++top]; }
  }
void pop()
{if(top>-1)
 {cout<<stack[top]<<" is deleted!!";
  top--;}
 else
   cout<<"STACK UNDERFLOW!!";
 }
void display()
{
 if(top>-1)
   for(int i=top;i>=0;i--)
      cout<<stack[i]<<endl;
 else
  cout<<"stack underflow!!";
 }
