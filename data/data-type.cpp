#include<iostream>
using namespace std;

int main()
{
    //整形
    short a=20;
    cout<<"a="<<a<<endl;

    //操作符，sizeof谁的大小是多少
cout<<"a的长度为:"<<sizeof a<<endl;

//无符号整型
unsigned short sl=40000;
cout<<"sl="<<sl<<endl;

//字符类型 ASCII
char c=65;
cout<<"c="<<c<<endl;
//当作整数输出
cout<<"c+1="<<(c+1)<<endl;

//c2转化为相应地字符数出
char c2=c+1;
cout<<"c+1="<<(c2)<<endl;

//布尔类型
bool b1=true;
cout<<"b1="<<b1<<endl;
cout<<"b1占据长度为:"<<sizeof b1<<endl;

//浮点类型
float f=2.5;
double d=3.79E-23;

cout<<"f="<<f<<endl;
cout<<"d="<<d<<endl;

//字面值常量
//整形
30;
//八进制
036L;
//16进制 LONGLONG
0xELL;

//浮点类型 float
3.14f;
//long double
1.25L;

//字符型字面值常量''
char c4=',';
cout<<"c4="<<c4<<endl;
char c3=c4+1;
cout<<"c4+1="<<c3<<endl;
//字符串类型字面值常量
"ABC";

//转义字符     \n换行符    \t横向制表符    \\反斜线
'\'';
char tc='\n';
cout<<"tc="<<tc<<endl;

cout<<"hello world!\t\"hello c++!\"\n\?"<<endl;

//赋值时的自动类型转变
//1.整数值赋给bool变量
bool btrans=25;
cout<<"btrans="<<btrans<<endl;

//2.将bool类型的值赋给算数整型    false自动转为0
short strans=false;
cout<<"strans="<<strans<<endl;

//3.浮点数赋值给整数类型  舍弃小数部分保留整数
int itrans=3.14;
cout<<"itrans="<<itrans<<endl;

//4.整数值赋值给浮点类型
float ftrans=3;
cout<<"ftrans="<<ftrans<<endl;

//5.赋值超出了整形范围    回推到能表达的最小值  0  
unsigned short ustrans=65536;
cout<<"ustrans="<<ustrans<<endl;
strans=32768;
cout<<"strans="<<strans<<endl;

cin.get();
} 
//基本数据类型