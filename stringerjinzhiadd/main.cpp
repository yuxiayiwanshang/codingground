#include <iostream>

using namespace std;

void add(char &he,char s1,char s2,char &jin)
{
    if(jin=='0')
    {
        if(s1=='0' && s2=='0')
        {
            he='0';
        }
        else if(s1=='1' && s2=='0')
        {
            he='1';
        }
        else if(s1=='0' && s2=='1')
        {
            he='1';
        }
        else if(s1=='1' && s2=='1')
        {
            he='0';jin='1';
        }
    }
    else if(jin=='1')
    {
        if(s1=='0' && s2=='0')
        {
            he='1';
        }
        else if(s1=='1' && s2=='0')
        {
            he='0';jin='1';
        }
        else if(s1=='0' && s2=='1')
        {
            he='0';jin='1';
        }
        else if(s1=='1' && s2=='1')
        {
            he='1';jin='1';
        }
    }
}

int main()
{
   cout << "Hello World" << endl; 
   
   int a = 3>2?1:2;
   cout<<a;
   
   string s1,s2;
   cin>>s1>>s2;
   string s3="";
   char he;
   int jishu;
   if(s1.size()>s2.size())
   {
       jishu = s1.size();
   }
   else
   {
       jishu = s2.size();
   }
   
   jishu = (s1.size()>s2.size())?s1.size():s2.size();
   char jin = '0';
   int i=0; int l1=0,l2=0;
   while(i<jishu)
   {
       l1=s1.size()-1-i;l2=s2.size()-1-i;
       if(l1>-1 && l2>-1)
       {
          add(he,s1[l1],s2[l2],jin);
       }
       if(l1>-1 && l2<=-1)
       {
           add(he,s1[l1],'0',jin);
       }
       if(l1<=-1 && l2>-1)
       {
           add(he,'0',s2[l2],jin);
       }
       i++;
       s3+=he;
   }
   if(jin == '1')
   {
       s3+=jin;
   }
   string s4="";
   for(int i=0;i<s3.size();i++)
   {
       s4+=s3[s3.size()-1-i];
   }
   
   cout<<s4<<endl;
   
   return 0;
}

