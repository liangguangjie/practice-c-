#include<iostream>
using namespace std;
//引用，在变量名前加上&，表示他是另一个变量的引用
//就是数据变量的别名
int main()
{
    int a=10,b=25;
    int& ref=a;   //ref是a的引用

    cout<<"ref="<<ref<<endl;

    cout<<"a的地址为:"<<&a<<endl;
    cout<<"ref的地址为:"<<&ref<<endl;  //地址完全相同
  
    ref=15;

    cout<<"a="<<a<<endl;

    ref=b;   //ref没有绑定b，而是把b的值赋给了ref绑定的a
    cout<<"ref的地址"<<&ref<<endl;
    cout<<"a="<<endl;

    //int& ref2;  引用一定要初始化

    //引用的引用
    int& rref=ref;

    rref=36;
    cout<<"a="<<a<<endl;

    //int& ref2=10;  错误，不能定义一个字面值常量的引用，一定是字面值变量

    //double d=2.5；
    //int& ref3=d;  错误，定义引用的数据类型，必须与他变量的数据类型保持一致

    //对常量的引用
    //对常量的引用是常量的别名，绑定的对象不能修改
    const int zero=0;
    const int&cref=zero;

    //creaf=10; 错误,不能修改
    
    //常量初始化要求宽松很多
    int i=30;
    const int&cref2=i;  //可以用一个变量做初始化
    double d=3.14;
    const int&cref4=d;  //d会先转成int类型3，

    cin.get();
}