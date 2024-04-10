#include<iostream>
using namespace std;

//定义一个枚举类型
//定义后，声明后枚举元素按常量处理，不能对他赋值
enum Week
{
    Mon,Tue,Wed,Thu=10,Fri,Sat,Sun
};
//枚举量默认从0开始，每个枚举量依次加一
//可以单独定义
//sat=10   错误

int main()
{
    //可以通过对枚举量赋值，显示每个枚举量的值
    Week w1=Mon;

    //week w3=3;错误
    Week w3=Week(3);   //强制类型转换，把int类型整数3，强制转化为week类型

    Week w4=Fri;
    Week w5=Week(20);  //允许扩大枚举类型合法值的范围
    cout<<"w1="<<w1<<endl;
    cin.get();
}