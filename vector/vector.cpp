#include<iostream>
#include<vector>
using namespace std;

//数组是更加底层的数据类型，运行更高效，但是安全性没有保证
//vector是数组的上层抽象，运行效率低 

//容器
int main()
{
    //默认初始化，容器个数不定可以为空，也可以不为空
    vector<int> v1;
    //列表初始化  (拷贝初始化)
    vector<char>v2={'a','b','c'};
     vector<char>v3{'a','b','c'};

     //直接初始化   有5个元素，元素类型short，默认为0
     vector<short> v4(5);
     //有5个元素，每个元素是100
     vector<long> v5(5,100);

     //访问元素
     cout<<v5[3]<<endl;
     //更改
     v5[3]=25;
     //可以越界访问，会报错
     //cout<<v5[6]<<endl;

     //可以直接调用元素个数
     cout<<"v5的长度为："<<v5.size()<<endl;

     //遍历所有元素
     for(int i=0;i<v5.size();i++)
     {
      cout<<v5[i]<<"\t";
     }
     cout<<endl;

     for(int num:v5)
     {
        cout<<num<<"\t";
     }
     //与数组的区别，可以在容器里面添加元素
     v5.push_back(69);

     //向空容器中添加倒序元素
     for(int i=10;1>0;i--)
     {
        v1.push_back(i);
     }
     for(int num:v1)
     {
        cout<<num<<"\t";
     }
     cout<<endl;



     cin.get();

}