#include<iostream>
#include<stdio.h>

using namespace std ;

int CountCap(char *str)
{
	static int iCnt = 0;

	if(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			iCnt++;
		}
		str++;
		CountCap(str);
	}
	return iCnt;
}

int main()
{
	char Arr[20];
	int iRet = 0;

	cout<<"Enter String\n";
	scanf(" %[^'\n']s",Arr);

	iRet = CountCap(Arr);
	cout<<"Capital Aphabets Are :"<<iRet<<"\n";
	
	return 0;
}