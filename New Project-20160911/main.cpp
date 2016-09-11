#include<iostream>

using namespace std;

int main(){
    
    cout<<"hello world"<<endl;
    
    int max =0;
    int l1,l2,len=0;
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1<<endl<<s2<<endl;
    
    for(int i=0;i<s1.length();i++)
    {
        for(int j=0;j<s2.length();j++)
        {
            len =0;
            if(s1[i]==s2[j])
            {
                l1=i;l2=j;
                while(s1[l1]==s2[l2] && l1<s1.length() && l2<s2.length())
                {
                    len +=1;
                    l1++;l2++;
                }
                if(len>max){max = len;}
            }
        }
    }
    cout<<max<<endl;
    return 0;
}