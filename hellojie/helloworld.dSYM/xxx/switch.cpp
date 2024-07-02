#include<iostream>
using namespace std;

int main()
{
    //输入用户成绩
    cout<<"请输入你的成绩"<<endl;

    char score;
    cin>>score;
    switch(score)
    {
        case'A':
        cout<<"成绩优秀"<<endl;
        break;
         case'B':
        cout<<"成绩优"<<endl;
        break;
         case'C':
        cout<<"成绩"<<endl;
        break;
         case'D':
        cout<<"成"<<endl;
        break;
    default:
        cout<<"错误"<<endl;
        break;

    }


    




    cin.get();
    cin.get();
}