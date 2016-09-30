#include<iostream>
using namespace std;

int main()
{
	cout<<"hello"<<endl;
	
	
	int *p[2];
	int length[2];
	
	for(int i=0;i<2;i++)
	{
		int num;
		cin>>length[i];
		num = length[i];
		//cout<<num;
		p[i] = new int[num];
		//cout<<p[i]<<endl;
		//cout<<*(p[i]-1)<<endl;
		for(int j=0;j<num;j++)
			cin>>*(p[i]+j);
		cout<<"enter the other"<<endl;
	}
	
	for(int i=0;i<2;i++)
	{
        for(int j=0;j<length[i];j++)
			cout<<*(p[i]+j)<<" ";
		cout<<endl;
	}
	
    return 0;
}