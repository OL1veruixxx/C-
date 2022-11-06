#include<stdio.h>
namespace A 
{
int a = 6;
int sum(int a, int b)
{
return a+b;
}
}
int main()
{
   printf("%d",A::a);
   int  m = A::sum(5,6);


}
#include<stdio.h>
namespace A 
{
int a = 6;
int sum(int a, int b)
{
return a+b;
}
}
using A::a;//在实际应用中将常用的展开，避免自己定义的时候与常用的变量重名即可
int main()
{

   printf("%d",a);
   int m = A::sum(5,6);
   printf("%d",m);


}
#include<stdio.h>
namespace A 
{
int a = 6;
int sum(int a, int b)
{
return a+b;
}
}
using namespace A;//相当于把命名墙拆了，用起来方便了
有暴露的风险  项目里面最好不要出现
int main()
{

   printf("%d",a);
   int m = sum(5,6);
   printf("%d",m);

}