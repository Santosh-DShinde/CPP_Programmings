#include<iostream>
using namespace std;

class Addition
{
	public :

		int ADD(int iNo1,int iNo2)
	{
		int iSum = 0 ;

		iSum = iNo1 + iNo2 ;
		return iSum;
	}
};

int main()
{
	int iNumber1=0,iNumber2=0,iSum=0,iRet=0;

	Addition mobj;

	cout<<"Enter First Number\n";
	cin>>iNumber1;

	cout<<"Enter First Number\n";
	cin>>iNumber2;
	
	iRet = mobj.ADD(iNumber1,iNumber2);
	cout<<"Addition is :"<<iRet<<"\n";
	return 0;
}