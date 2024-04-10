#include<iostream>
using namespace std;

int main()
{
int arr[]={5,9,2,7,4,3,12,6,1,5,7};

//数组长度
int size=sizeof(arr)/sizeof(arr[0]);

//选择排序
for(int i=0;i<size;i++)
{
    for(int j=i+1;j<size;j++)
    {
        if(arr[j]<arr[i])
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }

    }
}

for(int num:arr)
{
    cout<<num<<"\t";
}

cout<<endl;

//冒泡排序
for (int i = 0; i < size; i++)
{
 for(int j=0;j<size-i-1;j++)
 {
    if(arr[j]>arr[j+1])
    {
        int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
    }
 }
}





cin.get();



}