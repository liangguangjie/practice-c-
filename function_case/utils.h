#pragma once
#include<iostream>
using namespace std;

//立方和函数
int subeSum(int x,int y)
{
    return pow(x,3)+pow(y,3);
}

//阶乘函数
int factorial(int n)
{
    int result=1;
    for (int i = 1; i <=n; i++)
    {
        result*=i;
    }

    return result;
    
}



//显示自身被调用多少次的函数
int callCount()
{
    //定义局部变量加上static，局部静态对象
    //局部静态对象只有局部作用域，生命周期贯穿整个程序运行过程
    static int count=0;  //静态对象可以不做初始化，基本类型会被默认为初始化为0的值。自动对象必须要初始化
    ++count;
    cout<<"我被调用了"<<count<<"次"<<endl;
    return count;
}

//函数声明
string copyStr(string str, int n);