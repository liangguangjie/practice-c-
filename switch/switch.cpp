#include<iostream>
using namespace std;


int main()
{
    //输入用户成绩
    cout<<"请输入您的成绩:"<<endl;

    char score;
    
    cin>>score;

    switch(score)
    {
        //case标签必须是整形
        //任意两个case标签不能相同
    case'A':
        cout<<"成绩优秀"<<endl;
        break;
    case'B':
        cout<<"成绩良好"<<endl;
        break;
    case'C':
        cout<<"及格了"<<endl;
        break;
    case'D':
        cout<<"欢迎下次再来"<<endl;
        break;
    default:
    cout<<"错误成绩输入"<<endl;
        break;
    }
    cin.get();
     cin.get();
}