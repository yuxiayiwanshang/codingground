#include <iostream>
#include<string.h>

using namespace std;

int main()
{
   cout << "Hello World" << endl; 
   
   string s = "shili";
   cout<<s.size()<<endl;
   
   int i=0;
   while(s[i]!='\0')
   {
       cout<<s[i]<<endl;
       i++;
   }
   
   string ce="";
   
   char gg[] = {'s','h','i','l','i','\0'};
   
   ce+='s';
   cout<<ce<<endl;
   
   cout<<i<<endl;
   cout<<strlen(gg)<<endl;
  // cout<<strlen(s)<<endl;    cuowu
   cout<<gg<<endl;
   
   return 0;
}

