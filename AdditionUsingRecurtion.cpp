#include<iostream>
using namespace std ;

int SumR(int Arr[], int iSize)
{
	static int iSum =0, i=0;

	if(i != iSize)
	{
		iSum = iSum + Arr[i];
		i++;
		SumR(Arr,iSize);
	}
	return iSum;
}

int main()
{
	int iLength = 0,i=0;
	
	int *p = NULL;

	cout<<"Enter The Number of Element :\n";
	cin>>iLength;

	p = new int[iLength];

	cout<<"Enter the Elements:\n";

	for (i = 0; i < iLength; i++)
	{
		cin>>p[i];
	}

	int iRet = SumR(p,iLength);
	cout<<"Addition is :"<<iRet<<"\n";

	free(p);

	return 0;
}