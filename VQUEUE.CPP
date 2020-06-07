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
{int val;
 if((rear>4)||((rear==(front-1))&&(rear!=0)))

     cout<<"queue overflow";
 else
  {cout<<"enter element";
   cin>>val;
   if(rear==-1)
    {queue[++rear]=val;
     front++;
    }
   else if((rear<5)&&(rear>front))
	  queue[++rear]=val;
	else if((rear==4)&&(front>0))
	{ rear=0;
	  queue[++rear]=val;
	}
}
}
void deletion()
{
 if((rear==-1)||((rear==front)&&(rear!=0)))
     cout<<"queue underflow";
 else
 { cout<<"element"<<queue[front]<<"is deleted";
 if(rear>front)
      front++;
 else if((front==4)&&(rear>0))
	front=0;
 }

}
void display()
{
 if((rear==-1)||((rear==front)&&(rear!=0)))
     cout<<"queue unde5rflow";
 else
  {
     if(rear>front)
       for(int i=front;i<=rear;i++)
	  cout<<queue[i];
      else
       {for(int i=front;i<5;i++)
	   cout<<queue[i];
       for(int j=0;j<=rear;j++)
	    cout<<queue[j];
      }
     }
 }





