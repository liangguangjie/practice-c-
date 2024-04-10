#include<iostream>
using namespace std;

//声明函数，则可以将函数放在主函数后面
//形参可以直接省略掉
//int square(int x);
int square(int);

int main()
{
    int n=6; //实参类型必须与形参类型匹配，个数一致，按位置一一对应

    cout<<n<<"的平方"<<square(n)<<endl;

    cout<<square(3.5)<<endl;   //类型自动转换为int
    cout<<square('a')<<endl;   

    cin.get();
}
int square(int x) //形参，带上类型
{
/*  int y=x*x
    return y;  */
    return x*x;
} 