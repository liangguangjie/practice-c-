#include <iostream>
using namespace std;
//c风格字符串
int main()
{
  char str1[5]={'h','e','l','l','o'}  ;  //str1并不是一个字符串
  //未使用的局部变量占用的局部空间，会默认格式化为0xcc
   char str2[6]={'h','e','l','l','o','\0'};   //str2是一个字符串  '\0'用于区分纯粹的“字符数组”和“字符串”

   cout<<"str1="<<str1<<endl;
   cout<<"str2="<<str2<<endl;

   char str3[]="hello";    //字面值常量进行赋值

   cout<<"str3="<<str3<<endl;
   cout<<"str3的长度为："<<sizeof str3<<endl;


   cin.get();
}