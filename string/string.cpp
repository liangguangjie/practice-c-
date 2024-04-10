#include<iostream>
#include<string>
using namespace std;
//string字符串

int main()
{
    //初始化
     //默认初始化，容器个数不定可以为空，也可以不为空
    string s1;
    //(拷贝初始化)
    string s2=s1;
    string s3="hello world";

     //直接初始化   
     string s4("hello world!");
     string s5(8,'h'); 

     cout<<s5<<endl;
    
    //访问字符
    cout<<"s4[2]="<<s4[2]<<endl;
    s4[0]='H';
    cout<<s4<<endl;
    
    //size可以获得字符串的长度
    s4.size();
    //更改最后一个字符“！”
    s4[s4.size()-1]='\?';
    cout<<s4<<endl; 

    //遍历
    //将小写变为大写
    for (int i=0;i<s4.size();i++)
    {
       s4[i]=toupper(s4[i]);
    }
    cout<<s4<<endl;

    //字符串拼接
    string str1="hello",str2("world");
    string str3=str1+str2;
    cout<<str3<<endl;

    string str4=str1+","+str2+"!";
    cout<<str3<<endl;

    //string str5="hello,"+"world";   //错误，两个字符串字面值常量，不能相加
//一个string对象和一个字符串字面值常量，可以进行字符串相加
//至少满足左结合律（最左边第一个要是string对象），每次相加至少一个是string对象


    //比较字符串
    str1="hello";
    str2="hello world";
    str3="hehehehe";

    str1==str2;   //f
    str1<str2;  //t
    str1>=str3;  //t


     cin.get();
}
