#include <iostream>
#include<vector>
using namespace std;

int main()
{
   cout << "Hello World" << endl; 
   int num;
   cin>>num;
   
   int len;
   
   vector<int> vec;int k=0;
   bool flag =false;
   for(int i=2;i<=num;i++)
   {
       if(i==2) {vec.insert(vec.begin()+k++,i);}
       for(int j=2;j<i;j++)
       {
           if(i%j==0) {flag = false; break;}
           else if(j==i-1)
           {
               flag=true;vec.insert(vec.begin()+k++,i);
           }
       }
   }
   
   len =0;
   for(int i=0;i<vec.size();i++)
   {
       cout<<vec[i]<<endl;
       for(int j=i;j<vec.size();j++)
       {
           if((vec[i]+vec[j])==num)
           {
               len +=1;
           }
       }
   }
   
   
   
   cout<<len<<endl;
   
   
   return 0;
}

