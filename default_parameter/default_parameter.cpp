//默认实参
#include<iostream>
#include<string>
using namespace std;

//定义一个返回学生信息的函数，加上默认实参，一个默认实参后面必须都是默认实参
string stuInfo(string name="",int age=18,double score=60)
{
    //字符串拼接“+”，关联起来
    //age是int类型，则无法拼接，将age转换成string，不能强转换，用to string将age作为一个参数传入
    string info="学生名字："+name+"\t年龄:"+to_string(age)+"\t成绩:"+to_string(score);

    return info;
} 

//string stuInfo(string name,int age=18,double score);  错误

int main()
{
    //传入的参数要按照顺序
    cout<<stuInfo()<<endl;
    cout<<stuInfo("张三",18,60)<<endl;  //传入的实参覆盖默认实参
    cout<<stuInfo("李四")<<endl;

    cin.get();


} 