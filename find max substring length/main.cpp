#include<iostream>

using namespace std;

int main(){
    
    cout<<"hello world"<<endl;
    
    int max =0;                // find max ,compare , temp
    int l1,l2,len=0;              // l1,l2 string index,  len computer the length comm string
    string s1,s2;
    cin>>s1>>s2;                   // input string
    cout<<s1<<endl<<s2<<endl;
    
    for(int i=0;i<s1.length();i++)           //     fix the first string,    start traverse
    {
        for(int j=0;j<s2.length();j++)             //  the second string traverse to find comm char
        {
            len =0;
            if(s1[i]==s2[j])                          // comm char distinguish
            {
                l1=i;l2=j;
                while(s1[l1]==s2[l2] && l1<s1.length() && l2<s2.length())    //  traverse border distin
                {
                    len +=1;                                                  // jishu
                    l1++;l2++;
                }
                if(len>max){max = len;}                                   //compare
            }
        }
    }
    cout<<max<<endl;
    return 0;
}