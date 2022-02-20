//incomplete

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT TogleNible(UINT iNo)
{
	UINT iMask = 0xF000000F;

	UINT iResult = 0;

	iResult = iNo ^ iMask;

	return iResult;
}

int main()
{
	UINT iValue1 = 0;
	UINT iRet=0;

	cout<<"Enter Number......\n";
	cin>>iValue1;

	iRet = TogleNible(iValue1);

	cout<<"Updated Number is ......:"<<iRet<<"\n";

	return 0;
}