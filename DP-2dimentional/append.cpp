#include <iostream>
#include<string>

using namespace std;



int length(string s1,string s2)
{
    int n = s1.size();
    int m = s2.size();
    s1 = '0'+s1;
    s2 = '0'+s2;
    //cout<<n<<m;
    int a[n+1][m+1];
    for(int i=0;i<=n;i++) a[i][0] = 0;
    for(int j=0;j<=m;j++) a[0][j] = 0;
    
    for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)
       {
           if(s1[i]==s2[j])
           {
               a[i][j] = 1+a[i-1][j-1];
           }
           else if(s1[i]!=s2[j])
           {
               a[i][j] = max(a[i-1][j],a[i][j-1]);
           }
       }
    return a[n][m];
}

int main()
{
   cout << "Hello World" << endl; 
   
   string s1,s2;
   cin>>s1>>s2;
   
   int result = length(s1,s2);
   
   cout<<"the lCS is "<<result<<endl;
   return 0;
}

