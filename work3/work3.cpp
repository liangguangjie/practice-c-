#include<iostream>
using namespace std;

void count_characters(const string& content)
{
  int capitals=0,lowercase=0,number=0,space=0,else_content=0;

  for (char c : content)
   {
    if (c>='a'&&c<='z')
      lowercase+=1;
    else if (c>='A'&&c<='Z')
       capitals+=1;
    else if(c>='0'&&c<='9')
       number+=1;
    else if(c=='_')
       space+=1;
    else
       else_content+=1;

   }

    cout << "英文小写字母个数: " << lowercase << endl;
    cout << "英文大写字母个数: " << capitals << endl;
    cout << "数字个数: " << number<< endl;
    cout << "空格个数: " << space << endl;
    cout << "其他字符个数: " << else_content << endl;

}


int main() 
{
    string content = "JhdW s3T && 234";
    count_characters(content);
    return 0;
}
   


    
