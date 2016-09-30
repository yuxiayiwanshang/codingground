#include<iostream>
using namespace std;

int main()
{
	cout<<"hello"<<endl;
	
	// M :  big cube length,  N: the number of small cube, P the range
	int M,N,P;
	cout<<"--please input the M,N,P. M: big cube length, N: the number of small cube, P the range"<<endl;
	cin>>M>>N>>P;
	int bigCube[M][M][M];
	//int smallCube[][][][];
	//small cube 多个不确定需要存储，需用全局变量，但是却只能在函数内根据输入动态生成数组，局部变量，调用完即消失，所以用动态数组加全局指针，
    //so use the dynamic array,  use new and point p, 即在函数内部根据需要动态生成数据大小，使用new，不随函数结束而消失，
	//同时使用     全局p指针----指向局部new分配地址----局部变量但是分配在堆中       即得到动态数组，用完delete
	int *smallpoint[N];
	int L[N];
	
	// the big cube values  M^3 init;
	cout<<"--please input the big cube value, pow(M,3)"<<endl;
	for(int i=0;i<M;i++)
		for(int j=0;j<M;j++)
			for(int k=0;k<M;k++)
				cin>>bigCube[i][j][k];
	
	
	// input the small cube lenth L,  and the value L^3
	/* cout<<"--please input N lines small cube , L: is the length , values are L^3"<<endl;
	for(int jj=0;jj<N;jj++)
	{
		int L;
		cout<<"--enter the length of small cube  L symbol "<<endl;
		cin>>L;
		cout<<"--enter the values L^3"<<endl;
		int smallcube[L][L][L];
		for(int i=0;i<L;i++)
			for(int j=0;j<L;j++)
				for(int k=0;k<L;k++)
					cin>>smallcube[i][j][k];
		smallpoint = &smallcube[0][0][0];
	} */
	
	
	 // input the small cube lenth L,  and the value L^3
	for(int jj=0;jj<N;jj++)
	{
		cout<<"--enter the length of small cube  L symbol "<<endl;
		int num;
		cin>>num;
		L[jj] = num;
		//cout<<"--enter the values L^3"<<endl;
	    smallpoint[jj] = new int[num*num*num];   // 使用new 时 ，指定多维数组，数组大小必须是常量，一维不用，多维逐层动态开辟
		for(int i=0;i<L[jj];i++)
			for(int j=0;j<L[jj];j++)
				for(int k=0;k<L[jj];k++)
					cin>>*(smallpoint[jj]+i*num*num+j*num+k);
	}
	
	//cout<<*(smallpoint[0]+1);
	
	
	/*  
	1、开辟原则：从数组的低维开始依次向高维扩展，举例如下：  用new 开辟多维数组 
    int ***Arr;
	int i,j;
	Arr=new int **[10];
	for(i=0;i<10;i++)
	{
	   Arr[i]=new int *[9];
		for(j=0;j<9;j++)
		{
		  Arr[i][j]=new int [8];
		}
	}
	
	只有最上层的一维是可以动态的，后面的长度需要固定
	2、用new开辟的动态数组一定要进行释放，不然会造成内存泄露，释放原则：用了多少个new，就要用多少个delete[]。释放Arr举例如下：
    for(i=0;i<10;i++)
	{
		for(j=0;j<9;j++)
		{
			delete []Arr[i][j];
		}
		delete []Arr[i];
	}
	delete []Arr;
	 */
	 
	 

	// out put the big cube value 
	cout<<"--the big cube values"<<endl;
	for(int i=0;i<M;i++)
	{
		for(int j=0;j<M;j++)
			for(int k=0;k<M;k++)
				cout<<bigCube[i][j][k]<<" ";
	    cout<<endl;
	}
	
	
	// output the small cube value 
	cout<<"--the small cube values"<<endl;
	for(int jj=0;jj<N;jj++)
	{
		cout<<"--output the N small cube from 0,1,2... "<<endl;
		int num = L[jj];
		for(int i=0;i<L[jj];i++)
			for(int j=0;j<L[jj];j++)
				for(int k=0;k<L[jj];k++)
					cout<<*(smallpoint[jj]+i*num*num+j*num+k)<<" ";
		cout<<endl;
	} 
	
	
	return 0;
}