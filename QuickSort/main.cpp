#include <iostream>

using namespace std;

void swap(int input[],int i,int left)
{
    int temp;
    temp = input[i];
    input[i] = input[left];
    input[left] = temp;
}

int partition(int array[],int left, int right)
{
    //p <- Get a number from array
    int p=array[left];
    //Put elements < p to the left side
    //Put elements >= p to the right side
    int i=left,j;
    for(j=left+1;j<=right;j++)
    {
        if(array[j]<p)
        {
            i++;
            swap(array,i,j);
        }
    }
    //Put p in the middle slot which index is pivot
    swap(array,i,left);
    return i;
}


/*
@param array      --input array
@param left       --input left  index init
@param right      --input right index init
*/
void quicksort(int array[], int left, int right)
{
    //Do nothing if left <= right
    if(left<right)
    {
        int pivot=partition(array,left,right);
        //Recursive quicksort the left parts and right parts
        quicksort(array,left,pivot-1);
        quicksort(array,pivot+1,right);
    }
}


int main()
{
   cout << "Hello World" << endl; 
   
   int in[]={1,3,2,6,5};
   quicksort(in,0,4);
   
   for(int i=0;i<5;i++)
   {
       cout<<in[i]<<endl;
   }
   
   return 0;
}

