#include<iostream>
using namespace std;

int main()
{
    cout<<"=====猜数字======"<<endl;

    cout<<"游戏规则:输入0～100的整数，有五次机会\n"<<endl;

    //生成随机数
    //rand产生的随机数与上一次相同，需要有随机数种子srand，使每次随机数不同
    srand(time(0));
   int target=rand()%100;

   //利用循环不断进行猜测
   int n=0;//表示猜的次数
   while (n<5)
   {
    cout<<"请输入0～100的整数："<<endl;

    //用num捕获用户键盘输入，cin是把输入信息放进num中
    int num;
    cin>>num;

    if(num==target)
    {
        cout<<"恭喜你猜对了，幸运数字是："<<num<<endl;
        break;
    }
    else if(num>target)
    {
        cout<<"数字太大了"<<endl;
    }
    else
    {
     cout<<"数字太小了"<<endl;
    }
    ++n;
   }
   //情况一：成功猜中，或者已经猜了五次没猜中，程序需要判断什么情况
 if(n==5)
{
    cout<<"已经猜过了五次"<<endl;
}  
cin.get();
cin.get();
}
