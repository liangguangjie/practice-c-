#include<iostream>
//使用符号常量   宏定义 全大写
#define PI 3.14

using namespace std;

//定义全局变量
     int number=8;
     
int main()
{
    //定义变量
    int a=1,b;
    cout<<"a="<<a<<endl;
b=10;
     cout<<"b="<<b<<endl;

     //定义局部变量
     int number=1;
     cout<<"number="<<number<<endl;
       cout<<"::number="<<::number<<endl;
    
    //定义常量const限定符
    //程序运行过程中不能被改变
    const float pi=3.14;
    //pi=3.14

       cout<<"PI="<<PI<<endl;
       cout<<"pi="<<pi<<endl;
    cin.get();
}
//变量和数据类型