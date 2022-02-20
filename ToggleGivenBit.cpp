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

UINT TogleBit(UINT iNo , int iPos)
{
	int iResult = 0;

	int iMask = 0x00000001;

// input    0000 0000 0000 0000 0000 0000 0110 0100 
// iMask    0000 0000 0000 0000 0000 0000 0001 0000   ( ^ ) Operation
//iResult   0    0 	  0    0    0    0    0111 0100

	if ((iPos < 1) || (iPos >32))
	{
		return 0;
	}

	iMask = iMask << (iPos -1);

	iResult = iNo ^ iMask;

	return iResult;
}

int main()
{
	int iValue1 = 0,iValue2 = 0, iRet=0;

	cout<<"Enter Number......\n";
	cin>>iValue1;

	cout<<"Enter Position of Bit.......\n";
	cin>>iValue2;

	iRet = TogleBit(iValue1,iValue2);

	cout<<"Updated Number is ......:"<<iRet<<"\n";

	return 0;
}