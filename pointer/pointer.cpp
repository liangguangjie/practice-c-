#include<iostream>
using namespace std;

//指针存放的是内存里面的地址编号 
int main()
{
    //定义指针
    //类型“*指针变量
    int* p1; //p1是指向int类型数据的指针
    long* p2;
    long long* p3;

    cout<<"p1在内存中的长度(字节)为"<<sizeof(p1)<<endl;
    //指针长度与系统环境相关

    //指针的使用
    //取地址操作符（&）
    int a=10;
    int b=20;
    long c=35;

    p1=&a;
    //p2=&b; 错误  不能将int类型的值分配到long类型的实体
    p2=&c;
    cout<<"a的地址为:"<<&a<<endl;
    cout<<"b的地址为:"<<&b<<endl;
    cout<<"c的地址为:"<<&c<<endl;

    cout<<"p1="<<p1<<endl;
    cout<<"p2="<<p2<<endl;

    //通过指针访问对象
    //指针指向数据对象后，可以通过指针来访问对象
    //访问方式：解引用操作符（*）
    //可以更改a的值
    *p1=12;
    cout<<"a="<<a<<endl;
    
    //无效指针（野指针）     定义一个指针后，不进行初始化
    //int*p1；
    //*p=100；        危险，指针没有初始化，是无效

    //空指针
    //空指针所保存的就是“0值”，地址是真实存在的，所以也不允许访问
    //空指针一般在程序中用来做判断，看一个指针是否指向了数据对象
    int*ptr=nullptr; //空指针字面值
    ptr=NULL;  //预处理变量
    ptr=0;     //0值 

    int zero=0;
    //ptr=zero    错误，不能把int类型变量直接赋给指针

    //void*指针   只能进行地址的存放和比较
    //可以存放任意对象的地址，只需要是64位以内
    int i=100;
    char ch='a';
    string s="hello";

    void*vp=&i;
    vp=&ch;
    //void*不能对他进行数据访问
    //*vp；  错误不能进行解引用


    cout<<"---------"<<endl;

    //指向指针的指针
    i=1024;
    int*pi=&i;
    int**ppi=&pi;

    cout<<"i="<<i<<endl;
    cout<<"pi="<<pi<<endl;
    cout<<"ppi="<<ppi<<endl;
    cout<<"*pi="<<*pi<<endl;
    cout<<"*ppi="<<*ppi<<endl;
    cout<<"**ppi="<<**ppi<<endl; 

    cout<<"---------"<<endl;

    //指向常量的指针
    const int c1=10,c2=25; 
    //int*pc=&c1;  c1是const常量，int是变量，常量类型不能初始化变量int
    const int*pc=&c1;

    cout<<"*pc="<<*pc<<endl;
    
    //*pc=15   一旦指向某一常量。常量的值不能改，解引用不能改
    pc=&c2;
    cout<<"*pc="<<*pc<<endl;

    //指针常量（const指针）,可以修改解引用
    int*const cp=&i;   //int是变量所以不能赋值常量
    *cp=2048;   //通过指针修改对象的值
    cout<<"i="<<i<<endl;

    //指向数据对象和指针本身都是常量,指向常量的指针常量
    const int*const cpp=&c1;

    cout<<"---------"<<endl;

    //指针和数组
    int arr[]{1,2,3,4,5};
    //int arr2[5]=arr;  错误，因为arr是个指针，类型不匹配

    cout<<"arr="<<arr<<endl;   //arr存放的是arr[0]元素的地址
    cout<<"&arr[0]="<<&arr[0]<<endl;
    cout<<"&arr=[1]"<<&arr[1]<<endl;

    int*pia=arr;
    cout<<"*pia="<<*pia<<endl;

    *pia=100;
    //arr[0]=100;  等价，使用指针访问数组里的每个元素
    
    for(int num:arr)   //arr是一个指针，对arr解引用操作获取对应的数据元素，arr+1相当于遍历
    {
        cout<<num<<"\t";
    }
    cout<<endl;

    //指针的运算   针对地址的指针运算
    cout<<"pia="<<pia<<endl;
    cout<<"pia+1="<<(pia+1)<<endl;   //加1直接指向下一个数据对象

    *(pia+1)=256;
    *(arr+3)=126;  //对arr的第四个元素赋值  arr[3]=126;

    cout<<"---------"<<endl;


    //指针数组：一个数组，他所有元素都是相同类型的指针
    int* pa[5];

    //数组指针：一个指针，指向一个数组的指针 
    int(* ap)[5];

    cout<<"pa在内存中的长度为:"<<sizeof(pa)<<endl;
    cout<<"ap在内存中的长度为:"<<sizeof(ap)<<endl;

    pa[0]=&i;
    pa[1]=arr;
    pa[2]=arr+2;

    //ap=arr;   类型不同，ap是一个数组对象的指针              
    ap=&arr;   //ap指向的是整个arr数组。将arr的地址拿出来赋给ap
    cout<<"ap="<<ap<<endl; 
    cout<<"*ap="<<*ap<<endl;  //ap第一次解引用得到是arr，arr是一个地址指向的是arr[0]
    cout<<"**ap="<<**ap<<endl;  //访问arr里的元素arr[0]=100
    cout<<"*(*ap+1)="<<*(*ap+1)<<endl;  //访问的是arr[1]



    cin.get();


}  