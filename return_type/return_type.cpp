#include<iostream>
using namespace std;

//定义一个元素互换的函数，无返回值
void swap(int&x,int&y) //传引用
{
    //判断两数如果相等，就不做交换直接返回
    if(x==y)
    {
        return;
    }
    int temp=x;
    x=y;
    y=temp;
}

//有返回值的函数，返回较长的字符串
//返回值str是一个const string类型的引用，避免面了输出结果值拷贝的过程
const string& longStr(const string&str1,const string&str2)   //直接返回一个引用，不需要做一个完整的值拷贝，更加高效
{
    return str1.size()>str2.size()?str1:str2;
}

//如果返回的是一个函数内局部变量的引用
// const string &f()
// {
//     string str="test";
//     return str;
// }    这样做不安全，str是函数内部局部对象，函数执行后就销毁了，而返回值是他的引用，相当于引用了不存在的对象，导致出现问题

int main()
{
    //两数交换
    int a=10,b=25;
    swap(a,b);  
    cout<<'a='<<a<<endl;
    cout<<'b='<<b<<endl;

    string str1="hello world",str2="hello";
    
    cout<<longStr(str1,str2)<<endl;   //函数调用会创立一个临时对象，用来保存函数调用后的返回值
    //当返回类型是一个引用，则不需要开辟一个新的空间

    //链式调用
    cout<<longStr(str1,str2).size()<<endl;

    //返回数组指针
    int arr[5]={1,2,3,4,5};
    int*parr[5];    //指针数组，一个数组，元素是指针
    int(*ap)[5]=&arr;  //ap的一个指针，指向了一个int类型的数组，有五个元素
    //数组名是一个指针，把他的地址赋值给指针


    //函数声明
    int(*fun(int x))[5]; //返回值 类型为数组的指针
    //fun(int x)，函数名为fun，形参为int类型 的x
    //(*fun(int x)),说明是一个指针
    //(*fun(int x))[5]，表示指针指向的是一个长度为5的数组

    //简化函数声明
    typedef int arrayT[5]; //arrayT是一个自定义的类型别名，表示长度为5的int数组
    arrayT* fun2(int x);   //fun2的返回类型是指向arrayT的指针 

    //尾置返回类型
    //用->符号跟在形参列表后面，再把类型单独提出来放在最后
    auto fun3(int x)->int(*)[5]; //auto自动推断返回值类型



    cin.get();
}