
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnnRange(UINT iNo, int iSatrt , int iEnd)
{
	return (iNo ^ (0xFFFFFFFF << (iSatrt -1)) & (0xFFFFFFFF >> (32- iEnd)));
}

int main()
{
	UINT iValue1 = 0, i =0, j=0;
	UINT iRet=0;

	cout<<"Enter Number......\n";
	cin>>iValue1;

	cout<<"Enter Starting position.....\n";
	cin>>i;

	cout<<"Enter Ending position.....\n";
	cin>>j;

	iRet = OnnRange(iValue1,i,j);

	cout<<"Updated Number is ......:"<<iRet<<"\n";

	return 0;
}