#include<iostream>
using namespace std;

//让传入的x递增1
// void increase(int x)
// {
//     ++x;
// }

void increase(int*p)
{
    ++(*p);
}

//使用引用为形参
//方便函数调用，函数参数传递过程中用引用
//避免数据的拷贝，加快效率
void increase(int& x)
{
    ++x;
}

//比较两个字符串的长度
//const  1.避免了对数据对象误更改 2.可以用变量初始化，扩大了调用时能传的实参范围
bool isLonger(const string& str1,const string& str2) //常量引用，后面不能通过str进行更改
{
    return str1.size()>str2.size();
}

//遍历数组元素进行打印
void printArray(const int arr[],int size)//()传入的是int类型的指针，数组不能直接拷贝
              //（int*arr）             //arr存放的是arr[0]元素的地址
              //int[5]    虽然指定了数组长度，但是编译器会把传入的数组名解析成指针，数组长度无法确定
//为了确定数组结束，把数组长度作为形参，增加一个形参，专门表示数组的长度 int size
{
   for(int i=0;i<size;i++)
   {
    cout<<arr[i]<<"\t";
   }
   cout<<endl;
}

//使用数组引用作为形参
void printArray(const int(&arr)[5])   //(&arr)一定要有括号，只能定义数组的引用
{
    for(int num:arr)
   {
     cout<<num<<"\t";
   }

    cout<<endl;
}

int main()
{
    int n=0;

    //传值参数
    // increase(&n);  //实参传入的是n变量的地址
    // increase(&n);

    //传引用参数
    increase(n);//别名，x=n

    cout<<"n="<<n<<endl;

    //当数据类型是string，需要通过定义变量来实现
    string str1="hello world",str2="hello";
    // isLonger(str1,str2);
     isLonger("hello world","hello");   //“”属于char数组类型，与string不同，不能用于string,则定义const



    int arr[5]={1,2,3,4,5};

    printArray(arr,5);
     printArray(arr);



    

    

    cin.get();

}