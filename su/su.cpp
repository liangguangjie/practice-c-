#include <iostream>
using namespace std;

//定义一个求素数的函数
int su(int);

//打印素数
int main()
{
    int i;

    //从0开始，循环到1000
    for(i=0;i<=1000;i++)
       if(su(i)==1)
       {
        cout<<i<<" ";
       }


       //判断素数
    cout<<"请输入一个数："<<endl;
    int a;
    cin>>a;
if(su(a)==1)
    {
        cout<<"这个数是素数"<<endl;
    }
    else
    {
        cout<<"这个数不是素数"<<endl;
    }
    cin.get();
    cin.get();

}


//将上面的i的值输进来
int su(int n)
{
//求素数判断，除了一和本身之外，不被任何数整除，所以从2开始到n-1
    for(int j=2;j<n;j++)
    {
        if(n%j==0) return 0;//如果余数等于0，说明可以整除，不是素数，返回0
    }
    return 1;//如果余数不等于0，说明不可以整除，是素数，返回1到主函数中
}





