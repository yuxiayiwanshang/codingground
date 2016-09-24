#include <iostream>

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
int DP1_dimensional(int n)
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

int main()
{
   cout << "Hello World" << endl; 
   int n;
   cin>>n;
   
   int result = DP1_dimensional(n);
   
   cout<<"Type number is "<<result<<endl;
   
   return 0;
}

