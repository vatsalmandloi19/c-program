#include<iostream.h>
#include<conio.h>
class v
{int i;
 public:
 // void input() ;
  void output();


  v()
  {i=0;
  i++;
  }
  ~v()
  {i--;
  }
 };
 void v:: output()
 {cout<<i;
 }
 void main()
 {
  v obj1,obj2;
  obj1.output();
  obj2.output();
  getch();
  obj1.output();
  obj2.output();
 getch();
 }