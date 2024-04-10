#include<iostream>
using namespace std;

//定义一个判断质数的函数，返回布尔类型bool结果
bool isPrime(int num)
{
int i=2;
    while(i<num)
    {
        if(num%i==0)
        {
            return false;
           
            //break,if本身没有break的操作，但是处于if的花括号里，则break跳出的是离他最近的while循环
            break;

        }
        ++i;
    }
        return true;
}

int  main()
{
    cout<<"请输入一个自然数(不超过20亿):"<<endl;

//定义变量，用num接受键盘的输入
    int num;
    cin>>num;
    //定义一个布尔类型的标志位，用来区分是从break跳出，还是完整的运行完程序
    bool result=true;
    //用循环
    // int i=2;
    // while(i<num)
    // {
    //     if(num%i==0)
    //     {
    //         result=false;
           
    //         //break,if本身没有break的操作，但是处于if的花括号里，则break跳出的是离他最近的while循环
    //         break;

    //     }
    //     ++i;
    // }
    //根据标志位判断结果
    // if(result)
    
    //      cout<<num<<"是质数"<<endl;
    // else
    //   cout<<num<<"不是质数"<<endl;
     if(isPrime(num))
    
         cout<<num<<"是质数"<<endl;
    else
      cout<<num<<"不是质数"<<endl;

      //输出0到100内所有的质数
      cout<<"0～100内的所有指数："<<endl;

      for(int i=2;i<=100;i++)
      {
        if (isPrime(i))
        cout<<i<<"\t";  
      }
      cout<<endl;
    
    cin.get();
    //cin>>num已将做过一次输入操作，输入以回车做结束标志，结束标志给cin.get捕捉到,所以还要再加一个cin.get
    cin.get();
} 