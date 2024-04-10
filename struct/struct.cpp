#include<iostream>
using namespace std;
//结构体
//复合数据类型,包含不同的数据类型
struct StudentInfo
{
    string name;
    int age;
    double score;
    //可以直接创造空的结构体对象，算术类型的默认值就是0
}stu2,stu3{"小明",19,65.0};//1.定义结构体之后立即创建对象

int main()
{
    //2.使用列表初始化
   //创建数据对象并做初始化 方法一和二
   StudentInfo stu={"占三",18,75.0};
   StudentInfo stu1{"里斯",20,82};
   
   //3.使用另一结构体对象进行赋值 
   //拷贝初始化，用另外一个定义好的结构体的数据对象赋值
   StudentInfo stu4=stu3;

   //输出一个数据对象的完整信息
   void printInfo(StudentInfo stu);
   {
    cout<<"学生姓名："<<stu.name<<"\t年龄:"<<stu.age<<"\t成绩:"<<stu.score<<endl;
   }

   //访问数据
   //访问结构体变量的数据成员，可以使用成员运算符 
   //cout<<"学生姓名："<<stu.name<<"\t年龄:"<<stu.age<<"\t成绩:"<<stu.score<<endl;

   //赋值
   stu2.name="王武";
   stu2.age=22;
   stu.score=60.0; 

   
   //打印输出
   printInfo(stu);
   printInfo(stu1);
   printInfo(stu2);
   printInfo(stu3);


   //定义结构体数组
   StudentInfo s[3]={
    {"小红",17,85.5},
    {"小绿",19,87.5},
    {"小黄",18,82.5}
   };

   printInfo(s[1]);

   //更改
   s[2].age=21;
   cout<<s[2].age<<endl;

   //遍历,简单写法范围for循环
   for(StudentInfo stu:s)
   {
     printInfo(stu);
   }
   
    
   cin.get();
}