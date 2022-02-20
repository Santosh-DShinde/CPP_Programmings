#include<iostream>
using namespace std;

int CountBit(int iNo)
{
	int i= 0,iCnt =0,iResult =0;
	int iMask = 0x00000001;

	for (i = 1; i < 32 ; i++)
	{
		iResult = iNo & iMask;

		if (iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask << 1;
		//Shift one by one to left side. 
	}
	return iCnt;
}	

int main()
{
	int iValue1 = 0,iValue2 = 0, iRet=0;

	cout<<"Enter Number......\n";
	cin>>iValue1;

	iRet = CountBit(iValue1);

	cout<<"Updated Number is ......:"<<iRet<<"\n";

	return 0;
}

//reduse time complexity of this code