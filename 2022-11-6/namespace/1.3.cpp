#include<stdio.h>
#include<stdlib.h>
namespace A 
{
//定义变量/函数/结构体/类
int sand =10;
int sum(int a,int b); 
int sub(int a,int b)
{
return a-b;
}
class Student
{
public:
  int x ;
      Student(int x1)
  {
     x= x1;
  }

  int dex(int a,int b);
  void show()
  {
printf("%d",x);
  }
  
};

}
int A::Student::dex(int a,int b)
{
return a+b;
}
int A:: sum(int a,int b)
{
return a+b;
}
 
 int main()
 {
 A::Student s1 =A::Student(6);
 A::sum(4,5);
 s1.dex(5,6);
 s1.show();
 }

#include<stdio.h>
namespace A 
{
  int a =6;
  int sum(int a,int b)
  {
  return a+b ;
  }
 namespace B 
 {
  int c = 8;
  int sum(int a, int b)
  {
  return a+b;
  }
 }
}
namespace B
{
int d =5;
int sum(int a,int b)
{
return a+b;
}
}
int main()
{
int val1=A::sum(5,8);
int val2 = A::B::sum(5,8);
    printf("%d,%d",val1,val2);
return 0;

}
