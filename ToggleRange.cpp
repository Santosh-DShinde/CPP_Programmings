

#include<iostream>
using namespace std;

typedef unsigned int UINT;



UINT TogleRange(UINT iNo, int iSatrt , int iEnd)
{
	UINT iMask1 = 0xFFFFFFFF,iMask2 = 0xFFFFFFFF,iMask = 0;
	UINT iResult = 0;

	iMask1 = iMask1 << (iSatrt -1);
	iMask2 = iMask2 >> (32 - iEnd);

	iMask = iMask1 & iMask2 ;

	iResult = iNo ^ iMask ;

	return iResult;

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

	iRet = TogleRange(iValue1,i,j);

	cout<<"Updated Number is ......:"<<iRet<<"\n";

	return 0;
}