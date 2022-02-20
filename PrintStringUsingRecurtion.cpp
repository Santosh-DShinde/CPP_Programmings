#include<iostream>
using namespace std;

void DisplayI(int iNo)
{
	int iCnt=1;

	while(iCnt <= iNo)
	{
		cout<<"Jay Ganesh...\n";
		iCnt++;
	}
}

void DisplayR(int iNo)
{
	static int iCnt=1;

	if (iCnt <= iNo )
	{
		cout<<"Jay Ganesh...\n";
		iCnt++;
		DisplayR(iNo);
	}
}

int main()
{
	int iValue = 0;

	cout<<"Enter Number :  ";
	cin>>iValue;

	cout<<"\n";

	//DisplayI(iValue);

	DisplayR(iValue);

	return 0;
}