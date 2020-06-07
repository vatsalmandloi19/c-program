#include<iostream.h>
#include<conio.h>
char stack[10];
int top=-1;
void push();
//void pop();
//void display();
void displayrev();
void main()
{
 clrscr();
 int ch;
 do
 {cout<<"\nenter your choice:";
  cout<<"\n1.insertion\n2.deletion\n3.display\n4.reverse display\n5.EXIT";
  cin>>ch;
  switch(ch)
  {case 1:push();
	  break;
  case 2:// pop();
	 break;
  case 3://display();
	break;
  case 4:displayrev();
	 break;
  case 5:break;
  default:cout<<"enter correct choice";
  }
  }while(ch!=5);
 }
 void push()
 {
  char val='a';
  cout<<"enter string:";
  while(val!='.')
  {
  cin>>val;
  if(top<10)
  stack[++top]=val;
  else
   {val='.';
    cout<<"stack overflow";
   }
  }
}
void displayrev()
{
  if(top<0)
   cout<<"stack underflow";
  else
   for(int i=top-1;i>-1;i--)
       cout<<stack[i];
}