#include <iostream>
using namespace std;

void Swap(int *p, int *q)
{
	int temp ;

	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int x = 0 ,y = 0;

	cout<<"Enter Value Of X :-  \n";
	cin>>x;

	cout<<"Enter Value Of Y :-  \n";
	cin>>y;

	Swap(&x,&y);

	cout<<"Value of X becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";

	return 0;

}