#include<iostream>
using namespace std;

//goto 标签；
int main()
{
    int x=0;
//标签
begin:
    cout<<"程序开始。。。"<<endl;

//do while总会运行一次，则++c总会加一，直到x=15跳出循环
    do
    {
      cout<<"x="<<++x<<endl;
    } while (x<10);
    
   if(x<15)
   {
    cout<<"回到原点"<<endl;
    goto begin;
   }

   cout<<"程序结束"<<endl;

   cin.get();
   


}