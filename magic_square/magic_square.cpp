#include<iostream>
using namespace std;

int main()
{
 const int n=3;
 int arr[n][n]={
    {4,9,2},
    {3,5,7},
    {8,1,6}
 };
 //计算目标和
 int target=(1+n*n)*(n*n)/2/n;

 //使用bool类型标志位表示判定结果
 bool isMagic=true;

 //检验每一行
 for(int i=0;i<n;i++)
 {
    int sum=0;
    //遍历第i行每个元素，进行叠加
    for(int j=0;j<n;j++)
    {
        sum+=arr[i][j];
    }
    //判断是否等于target
    //！=检查两个操作数的值是否相等，如果不相等则条件为真，不相等则运行if里面的内容
    if(sum!=target)
    {
     isMagic=false;
     break;
    }
    else continue;
 }

//检验每一列
     for(int j=0;j<n;j++)
 {
    int sum=0;
    //遍历第i行每个元素，进行叠加
    for(int i=0;i<n;i++)
    {
        sum+=arr[i][j];
    }
 
 if(sum!=target)
    {
     isMagic=false;
     break;
    }
    else continue;
}

    //检验对角线 
    int sumDiag1=0,sumDiag2=0;
    for (int i=0;i<n; i++)
    {
       sumDiag1+=arr[i][i];
       sumDiag2+=arr[i][n-1-i];
    }
    //判断是否等于target
    if(sumDiag1!=target||sumDiag2!=target)
    {
     isMagic=false;
    }

//输出判断结果
cout<<"给定的矩阵arr"<<(isMagic?"是":"不是")<<n<<"阶幻方！"<<endl;

cin.get();
 }