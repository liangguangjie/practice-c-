#include<iostream>
using namespace std;

int main()
{
    //数组定义:数据类型  数组名[元素个数]
    //10个int数据类型变量
    int a1[10];

//const代表的是数据常量，元素个数只能用常亮表示
    const int n=4;
    double a2[n];

    int i=4;
    //double a3[i]; 错误，元素个数不能为变量

    //局部变量里没有付出值那么就是未定义的，不能直接使用局部变量，要初始化
    //没有初始化的元素值会用十六进制表示11001100
    int a3[4]={1,2,3,4};
    //元素个数可以自动识别
    float a4[]={2.5,3.8,1.79};
    short a5[10]={3,5,4};     //正确，只对数组前三个元素赋值，其他元素都为0
    //short a6[2]={3,5,4};  错误，元素不能超过定义的元素个数
    //int a6[4]=a3;         错误，不能用另一个数组对数组进行赋值

    char c[10];
    char c1[]={"abc"};
    //数组长度是4, 不是3，对字符串常量，编译器在后面加‘\0’
    cout<<"c="<<c<<endl;
    
    cout<<"----------"<<endl;

    //数组的访问，访问是从0开始计数，2为第三个
    //数组名[元素下标]
    int a[]={1,2,3,4,5,6,7,8};
    cout<<"a[2]="<<a[2]<<endl;
    //也可以对他赋值
    a[2]=36;
     cout<<"a[2]="<<a[2]<<endl;

     //数组大小： 数组所占空间=数据类型所占空间大小*元素个数
     cout<<"a数组所占空间大小"<<sizeof(a)<<endl;
     cout<<"a数组中的每个元素所占空间大小为："<<sizeof(a[0])<<endl;

     int aSize=sizeof(a)/sizeof(a[0]);
     cout<<"数组a的长度为："<<aSize<<endl;

     //直接访问a不能拿到数组中的所有元素，只能显示a这个数组存放的位置
     //使用循环，依次访问    遍历
     for(int i=0;i<aSize;i++)
     {
        cout<<"a["<<i<<"]="<<a[i]<<endl;
     }

//范围for循环  不需要计算asize，for后面定义一个局部变量
     for(int num:a)
     {
        cout<<num<<endl;
     }

    




    //多维数组
    //初始化 行，列
    int ia[3][4]=
    {
     {1,2,3,4},
     {5,6,7,8},
     {9,10,11,12}
    };

    int ia2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    int ia3[3][4]={12};

//可以省略第一个维度\行维度（有几个数组）
    int ia4[][4]={1,2,3,4,5,6,7};


    //访问  行号和列号都是从0开始
    cout<<"ia[1][2]="<<ia[1][2]<<endl;
    //更改
    ia[0][1]=19;

    //遍历  多维有多个循环
    cout<<"ia总大小"<<sizeof(ia)<<endl;
    cout<<"ia每一行的大小"<<sizeof(ia[0])<<endl;
    cout<<"ia每一个元素的大小"<<sizeof(ia[0][0])<<endl;

    int rowCnt=sizeof(ia)/sizeof(ia[0]);
    int colCnt=sizeof(ia[0])/sizeof(ia[0][0]);

    for(int i=0;i<rowCnt;i++)
    {
        for(int j=0;j<colCnt;j++)
        {
            cout<<ia[i][j]<<"\t";    //\t制表符
        }
        cout<<endl;
    }

    //范围for循环
    for(auto& row:ia)
    {
        for(auto num:row)
        {
            cout<<num<<"\t";
        }
        cout<<endl;
    }


     

     cin.get();

    

    


}