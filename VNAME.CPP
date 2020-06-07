#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class v
{
 char *surname;
  char *v;
 char *name;

 public:
  void input();
  void output();
 v()
 {v="a";}
 };
 void v::input()
 {cout<<"enter name and surname:";
   gets(name);
   gets(surname);
 }
 void v::output()
 {
  cout<<"name:";
  puts(name);
  cout<<"\nsurname:";
  puts(surname);
 }
 void main()
 {
 clrscr();
 v o;
 o.input();
 o.output();
 getch();
}
