include<stdio.h>
#include<stdlib.h>
namespace A 
{    
    int sand =10;    
}
int  sand = 20;
 
 int main()
 {
     int sand = 30;
     printf("%d\n",sand);//未使用域运算符，局部优先原则
     printf("%d\n",::sand);//使用域运算符，在全局变量范围内找
     printf("%d\n",A::sand);//在命名空间A里找
     return 0;
 }
#include <iostream>
using namespace std;
namespace s1
{
    class S_Class
        {
        public:
            void show() 
            {
                cout << '调用命名空间S1中类S_Class的函数show().' << endl;
            }
        };
}
namespace s2
{
    class S_Class
    {
    public:
        void show()
        {
            cout << '调用命名空间s2的类S_Class的函数show()' << endl;
        }
    };
}
int main() {
    s1::S_Class x; //声明一个s1中类S_Class的实例x
    x.show(); //调用类实例x中的show()，输出结果
    s2::S_Class y; //声明一个s2中类S_Class的实例y
    y.show(); //调用类实例y中的show()，输出结果
    return 0;
}
#include <iostream>
#include <string.h>
class cbook
{
    private:
        char * m_pczname;
        int m_npages;
        int m_nedition;
    public:
        void getbookname(char *pname);
        int getbookedition();
    private:
        void setbookname(char * pname);
        void settotalpages(int npages);
    public:
        cbook();
}; //定义一个类和结构体的结尾处的大括号后面有个分号
void cbook::getbookname(char * pname)
{
    strcpy(pname, m_pczname); //定义成员函数
}
int cbook::getbookedition()
{
    return m_nedition; //成员函数中引用类成员变量，直接写名字，不需要加self
}
void cbook::setbookname(char * pname)
{
    if (m_pczname != 0)
        delete[] p_pczname;
    m_pczname = new char[strlen(pname)+1]; //重新分配存储空间
    strcpy(m_pczname,pname); //复制字符串
}
void cbook::settotalpages(int npages)
{
    m_npages = npages; //成员函数中引用类成员变量，直接写名字，不需要加self
}
void main ()
{
    cbook op1; //声明该类的对象
    int i;
    i = op1.getbookedition();
    cout << i << endl;
}