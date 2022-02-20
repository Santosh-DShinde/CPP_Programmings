//incomplete

#include<iostream>
using namespace std;

typedef unsigned int UINT;

/*
op1		op2		&		|		^

 1      0		0 		1 		1
 1		1 		1 		1 		0
 0 		0 		0 		0	 	0
 0 		1 		0 		1 		1
*/

UINT TogleBit(UINT iNo , int iPos1 , int iPos2)
{
	int iResult = 0;

	int iMask1 = 0x00000001;
	int iMask2 = 0x00000001 , iMask = 0;

iMask1 = iMask1 << (iPos1 -1);
iMask2 = iMask2 << (iPos2 -1);

	iMask = iMask1 | iMask2;

	iResult = iNo ^ iMask;

	return iResult;
}

int main()
{
	int iValue1 = 0,iValue2 = 0, iValue3=0 ,iRet=0;

	cout<<"Enter Number......\n";
	cin>>iValue1;

	cout<<"Enter First Position of Bit.......\n";
	cin>>iValue2;

	cout<<"Enter Second Position of Bit.......\n";
	cin>>iValue2;

	iRet = TogleBit(iValue1,iValue2,iValue3);

	cout<<"Updated Number is ......:"<<iRet<<"\n";

	return 0;
}