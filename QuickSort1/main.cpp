#include <iostream>

using namespace std;
/*QuickSort
@param int input[] = {1,3,2,4,5}
@param int output[] ={1,2,3,4,5}
*/
//错误
void QuickSort(int l1,int l2,int pri,int input[])
{
    //int l1,l2,pri,temp;
    
    int temp;
    
   // int len = sizeof(input) / sizeof(int)-1;
    int len = l2-l1+1;
    
    //l1 = 0;l2=len-1;pri=len-1;
    while(l1<l2)
    {
        while(input[l1]<input[pri] && l1<l2)
        {
            l1++;
        }
        
        while(input[l2]>input[pri] && l1<l2)
        {
            l2--;
        }
        
        if(input[l1]>input[l2])
        {
            temp = input[l1];
            input[l1] = input[l2];
            input[l2] = temp;
        }
        l1++;l2++;
        
        if(l1==l2)
        {
            pri = l1;
            QuickSort(0,l1,pri,input);
            
            pri = l2;
            QuickSort(l2,l2+len,l2+len,input);
        }
    }
}
int main()
{
   cout << "Hello World" << endl; 
   
   int in[5] = {1,3,2,6,5};
   QuickSort(0,4,4,in);
   for(int i=0;i<5;i++)
   {
       cout<<in[i]<<endl;
   }
   return 0;
}



