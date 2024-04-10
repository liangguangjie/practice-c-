#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str,str2;

    //1.使用输入操作符读取单词
    cin>>str;
    cout<<"str="<<str<<endl;

  cin>>str2;
    cout<<"str2="<<str2<<endl;
    //完整地打印输出
    cin>>str>>str2;
    cout<<str<<str2<<endl;

    //2.使用getline读取一行,只需要一个 cin.get();
    string str3;
    getline(cin,str3);
    //getline会一直读取输入流中的内容，直到遇到换行符为止，换行符不会进入字符串中，这与char——arry不同
    cout<<"str3="<<str3<<endl;

    //3.使用get读取一个字符
    char ch;
    ch=cin.get();     //将捕获的字符赋值给ch
    cin.get(ch);      //直接将ch作为参数传给get

    //get读取一整行
    char str4[20];
    cin.get(str4,20);
    cout<<"str4="<<str4<<endl;


   
     

    cin.get();
    cin.get();
} 