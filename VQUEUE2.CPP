#include<iostream.h>
#include<conio.h>
void insertion();
void deletion();
void display();
int queue[5],front=-1,rear=-1;
void main()
{
 clrscr();
 int ch;

 do
 {cout<<"\n\t1.Insertion\n\t2.Deletion\n\t3.Display\n\t4.EXIT\nenter your choice:";
  cin>>ch;
  switch(ch)
  {case 1:insertion();
	  break;
   case 2:deletion();
	  break;
   case 3:display();
	  break;
   case 4:
	  break;
   default:cout<<"\n\t\tenter correct number!!!!";
  }
 }while(ch!=4);
}
void insertion()
{
  int val;
  if(((rear>3)&&(front==0))||(front==(rear+1)))
	 cout<<"queue overflow";
  else
  {  cout<<"enter element:";
      cin>>val;
     if((rear== 4)&&(front!=0))
	 {rear=0;
	  queue[rear]=val;
	 }
     else
	{if(rear==-1)
	     { front=0;
	       queue[++rear]=val;
	     }
	else
	 queue[++rear]=val;
       }
  }
}
void deletion()
{
 if((rear==-1)||(front>rear))
	cout<<"queue underflow";
 else
    {  cout<<"element:"<<queue[front]<<"is deleted";
       if(front<4)
	    front++;
       else
	  front=0;
}
}
void display()
{
  if(rear==-1)//||(front>rear))//((front==-1)||((rear==front-1)&&(front!=0)))
	    cout<<"queue underflow";
  else
    { if(rear>front)
	     for(int i=front;i<=rear;i++)
		    cout<<queue[i];
      else
       { for(int i=front;i<4;i++)
	       cout<<queue[i];
	 for(int j=0;j<=rear;j++)
	      cout<<queue[j];
       }
    }
}

