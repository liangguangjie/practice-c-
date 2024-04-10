#include<iostream>
using namespace std;

int main()
{
    int a=10;
    //引用和指针常量
    int& ref=a;  //引用，ref无内存地址，不需要开辟内存空间，来储存
    int*const p=&a;

    ref=20;
    cout<<"a="<<a<<endl;
    *p=15;
    cout<<"a="<<a<<endl;

    cout<<"a的地址"<<&a<<endl;
    cout<<"ref的地址"<<&ref<<endl;
    cout<<"p的地址"<<&p<<endl;
    cout<<"p的值"<<&p<<endl;

    //绑定指针的引用
    int*ptr=&a; //ptr是一个指针，指向int类型对象
    int*&pref=ptr;   //pref是一个引用，绑定指针ptr

    *ptr=100;
    cout<<"a="<<a<<endl; 

    //int&* rptr=&ref;   错误，不允许使用指向引用的指针，引用没有内存空间，无地址
    int* ptr2=&ref; 

    cin.get();

} 