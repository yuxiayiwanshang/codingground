#include <iostream>

using namespace std;

class Solution {
public:
    int max =0;int len = 0;
    bool findlist(string list,char key)
    {
        bool flag = false;
        for(int i=0;i<list.size();i++)
        {
            if(key == list[i])
            {
                flag = true; break;
            }
            else
            {
                flag = false;
            }
        }
        
        return flag;
    }
    int lengthOfLongestSubstring(string s) {
        int length=0;
        bool findflag = false;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i;j<s.length();j++)
            {   
                //char gg[s.length()];
                
                string sub="";
                
                for(int k=i;k<j+1;k++)
                {
                   sub+= s[k];
                }
                
                
                
                bool rep = false;
                for(int k=0;k<sub.size();k++)
                {
                    for(int h=k+1;h<sub.size();h++)
                    {
                        if(sub[k]==sub[h])
                        {
                            rep = true;break;
                        }
                    }
                    if(rep==true){findflag = false;break;}
                    else if(rep==false && k==sub.size()-1)
                    {
                        findflag = true;len = sub.size();
                        if(len>max){max = len;}
                    }
                }
                
                
            }
        }
        
        return max; 
            
    }
};

int main()
{
   cout << "Hello World" << endl; 
   
   string s;
   cin>>s;
   
   Solution sl;
   int len = sl.lengthOfLongestSubstring(s);
   cout<<len<<endl;
   return 0;
}

