#include <iostream>
#include<map>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ret =0;
        map<char,int> m;
        int start = 1;
        for(int i=1;i<=s.size();i++)
        {
            char c=s[i-1];
            if(m[c]>=start)
            {
                start = m[c]+1;
                m[c]=i;
            }
            else
            {
                m[c] = i;
                ret = max(ret,i-start+1);
            }
        }
        return ret;
    }
};

int main()
{
   cout << "Hello World" << endl; 
   
   string s;
   cin>>s;
   
   int len;
   
   Solution sl;
   
   len = sl.lengthOfLongestSubstring(s);
   
   cout<<len;
   
   return 0;
}

