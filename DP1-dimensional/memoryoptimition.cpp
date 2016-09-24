#include <iostream>
#include<map>

using namespace std;

/* example  1,3,4
input 5 = 1+1+1+1+1
          1+1+3
          1+3+1
          3+1+1
          1+4
          4+1
output Type Sum = 6
base D0 = 1; D1 = 1;  D2 = 1; D3 =2;   subprobelm
reccurence 
     n = x1+x2+...+xm;
     xm=1  Dn = Dn-1
     Xm=3  Dn = Dn-3
     Xm=4  Dn = Dn-4
then Dn = Dn-1 + Dn-3 + Dn-4
*/
int DP1_dimensional(int n)            // 状态转移方程，保存在数组中， 用a[] 来表示Dn状态
{
    if(n>=3)
    {
        int a[n+1];
        a[0]=1;a[1]=1;a[2]=1;a[3]=2;
        
        for(int i=4;i<=n;i++)
        {
            a[i] = a[i-1]+a[i-3]+a[i-4];
        }
        return a[n];
    }
    else if(n<3 && n>=0)
    {
        return 1;
    }
}


int reccurence(int n)                 //递归一定有return 
{
    if(n>=0)          // 出口
    {
        switch(n)
        {
           case 0: return 1;        // 基
           case 1: return 1;        // 基
           case 2: return 1;        // 基
           case 3: return 2;        // 基
           default: return reccurence(n-1)+reccurence(n-3)+reccurence(n-4);   // 递归表达式
        }
    }
}

map<int,int> memo;
int reccurence1(int n)                 //递归一定有return 
{
    if(n>=0)          // 出口
    {
        if(memo.count(n)) {return memo[n];}
        switch(n)
        {
           case 0: return 1;        // 基
           case 1: return 1;        // 基
           case 2: return 1;        // 基
           case 3: return 2;        // 基
           default: return memo[n]=reccurence(n-1)+reccurence(n-3)+reccurence(n-4);   // 递归表达式
        }
    }
}

int main()
{
   cout << "Hello World" << endl; 
   int n;
   cin>>n;
   
   int result = DP1_dimensional(n);
   
   int result1 = reccurence(n);
   
   int result2 = reccurence1(n);
   
   cout<<"Type number is "<<result<<endl;
   cout<<"Type number is "<<result1<<endl;
   cout<<"Type number is "<<result2<<endl;
   
   return 0;
}









