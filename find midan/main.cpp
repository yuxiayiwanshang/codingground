#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
void swap(int &a,int &b)
{
    int temp;
    temp =a;
    a= b;
    b = temp;
}
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> vec;
        double mid;
        int tou;
        
        int index;
        
        int i=0;
        
        index =0;
        
        int l1=0,l2=0;
        while(l1<nums1.size() || l2<nums2.size())
        {
            
            if(l1<nums1.size() && l2<nums2.size())
            {
                if(nums2[l2]>nums1[l1])
                {
                    vec.insert(vec.begin()+index++,nums1[l1]);
                    if(index>1)
                    {
                        if(vec[index-2]>vec[index-1]){swap(vec[index-2],vec[index-1]);}
                    }
                    l1++;
                    
                }
                else
                {
                    vec.insert(vec.begin()+index++,nums2[l2]);
                    if(index>1)
                    {
                        if(vec[index-2]>vec[index-1]){swap(vec[index-2],vec[index-1]);}
                    }
                    l2++;
                    
                }
                
            }
            
          
            if(l1<nums1.size() && l2>=nums2.size())
            {
                vec.insert(vec.begin()+index++,nums1[l1]);   l1++;
                if(index>1)
                    {
                        if(vec[index-2]>vec[index-1]){swap(vec[index-2],vec[index-1]);}
                    }
            }
            if(l1>=nums1.size() && l2<nums2.size())
            {
                vec.insert(vec.begin()+index++,nums2[l2]);       l2++;
                 if(index>1)
                    {
                        if(vec[index-2]>vec[index-1]){swap(vec[index-2],vec[index-1]);}
                    }
                    
            }
            
            
        }
        
        
        
        
        int len = nums1.size()+nums2.size();
        
        if(len>0)
        {
            if(len%2==1)
            {
                mid = vec[len/2];
            }
            else
            {
                mid = vec[len/2]+vec[len/2-1];
                mid = mid/2;
            }
        }
        else
        {
            mid =0;
        }
        
        
        return mid;
    }
};

int main()
{
   cout << "Hello World" << endl; 
   Solution s;
   
   int nums1[]={1,4,6};
   int nums2[]={2,3,7};
   
   vector<int> v1,v2;
   for(int i=0;i<sizeof(nums1)/sizeof(int);i++)
   {
       v1.insert(v1.begin()+i,nums1[i]);
   }
   for(int i=0;i<sizeof(nums2)/sizeof(int);i++)
   {
       v2.insert(v2.begin()+i,nums2[i]);
   }
  // vector<int> vec;
  // vector<int>::iterator it;
  // for(it=vec.begin();it!=vec.end();it++)
  // {
  //   cout<<vec[it]<<endl;
  // }
    
   
   double gg = s.findMedianSortedArrays(v1,v2);
   cout<<gg<<endl;
   
   return 0;
}

