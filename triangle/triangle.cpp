#include <iostream>
using namespace std;

int main()
{
cout<<"输入3个double类型的值"<<endl;
    double a,b,c;
    cin>>a>>b>>c;
    if(((a+c)>b)&&((a+b)>c)&&((b+c)>a))
    {
    cout<<"这三个值可以表示一个三角形的三条边"<<endl;
    }
    else
    {
    cout<<"这三个值不可以表示一个三角形的三条边"<<endl; 
    }
    cin.get();
    cin.get();
}