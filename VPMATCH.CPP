
#include<iostream.h>
#include<conio.h>
char stack[10];
int top=-1;
void push();
void check();
//void display();
void displayrev();
void main()
{
 clrscr();
 int ch;
 do
 {cout<<"\nenter your choice:";
  cout<<"\n1.insertion\n2.deletion\n3.display\n4.reverse display\n5.check\n6.EXIT";
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
  case 5:check();
	 break;
  case 6:break;
  default:cout<<"enter correct choice";
  }
  }while(ch!=6);
 }
 void push()
 {
  char val='a';
  cout<<"enter string:";
  while(val!='=')
  {
  cin>>val;
  if(top<10)
  stack[++top]=val;
  else
   {val='=';
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
void check()
{char val;
 int to=0,tc=0;
 if(top<0)
    cout<<"stack underflow";
 else
   {for(int i=top-1;i>-1;i--)
   { val=stack[i];
     if(val==')')
	tc++;
     else if(val=='(')
	 to++;
   }
   }
if(to==tc)
   cout<<"parenthesis match correctly";
else
   cout<<"parenthesis doesnot match correctly";
}
