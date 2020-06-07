#include<stdio.h>
#include<conio.h>
struct state
    { unsigned int mprto; //for rto no.
      char district[20];//for district name for which rto assign
    }mp;
void enter()//for enter value to structure for a file
{ printf("\nenter rto no:");
  scanf("%d",&mp.mprto);
  fflush(stdin);// to empty the buffer
  printf("\nenter district name:");
  gets(mp.district);
}
void print()//for printing of structure contain from file
{printf("\n\t\t-----------------------------------------------\n");
 printf("\t\t|\tmp : %d",mp.mprto);
 printf("\t\t\district :");
 puts(mp.district);
 printf("\t\t-----------------------------------------------");
}
void stateinfo();//for madhya pradesh information
void districtinfo();// for information district traffic number
void main()
{
  int ch;// for choice
  clrscr();
  do
  {clrscr();
  printf("\t\t\t\MADHYA PRADESH");
  printf("\n\t\t1.madhya pradesh information\n\t\t2.district information");
  printf("\n\t\t3.want to exit press 3");
  printf("\n\t\tenter your choice(1,2,3):");
  scanf("%d",&ch);
  switch(ch)
  {case 1:clrscr();
	   printf("\t\t\t       /~~~~~~~~~~~~\\\n");
	   printf("\t\t*-------------|MADHYA PRADESH|-------------*\n");
	   printf("\t\t\t       \\____________/\n");
	   stateinfo();
	   getch();
	   break;
   case 2:clrscr();
	  districtinfo();
	   break;
   case 3:break;
   default:printf("\t\tplease!! enter correct no");
	   getch();
  }
  }while(ch!=3);
}
void stateinfo()
{char c; //to store caracter which are coming from file
 FILE *mp; //file pointer
 mp=fopen("mp.txt","r"); //for opening a file with r+ i.e. reading and modification
 if(mp!=NULL) //to check text file exist or not
    { c=getc(mp);//getc is used to take a caracter at a time
      while(c!=EOF)// EOF shows the end of file
      {putchar(c);

      c=getc(mp);// getc automaticaly incremented
      }

     }
  else
      printf("file not found");

  fclose(mp);//for closing a file
}
void districtinfo()
{unsigned int chd,c=1,dno,flag=1;//chd=choice,c=for input loop control
			    //dno=district traffic no.,flag=for error message for not finding rto no.
 FILE *dis;
 dis=fopen("mp_district.dat","a+b");//a+b for appending and readind and b refer for binary file
 if(dis!=NULL)
 {printf("\t\t1.district information");
  printf("\n\t\t2.particular district");
 printf("\n\t\t3.add new district");
 printf("\n\t\tenter your choice:");
 scanf("%d",&chd);
 clrscr();
 switch(chd)
 {case 1: while(fread(&mp,sizeof(mp),1,dis))//mp=structure variable,dis=file pointer
	  {print();
	  }
	  break;
  case 2:printf("enter district no.:");
	 scanf("%d",&dno);
	 rewind(dis);//to take cursor to the beginning of file
	 while(fread(&mp,sizeof(mp),1,dis))
	 {if(dno==mp.mprto)
	      {print();
	       flag=0;
	      }
	 }
	 if(flag==1)
	     printf("data will be updated soon\nSORRY FOR INCONVIENENCE");
	 break;
  case 3:while(c==1)
	 {enter();
	   fwrite(&mp,sizeof(mp),1,dis);
	   printf("want to enter more enter 1:");
	   scanf("%d",&c);
	 }
	 break;
 default:printf("\n\t\t\tenter correct choice!!!!");
 }
 fclose(dis);
 }
 else
     printf("file not found!!!!");
 getch();
}