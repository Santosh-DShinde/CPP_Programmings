#include <iostream>
using namespace std;


//Specific Function
void Swap(int *p, int *q)
{
	int temp ;

	temp = *p;
	*p = *q;
	*q = temp;
}

//Generic Function

template<class T>
void SwapX(T *p, T *q)
{
	T temp ;

	temp = *p;
	*p = *q;
	*q = temp;
}


int main()
{
	int x = 10 ,y = 20;
	SwapX(&x,&y);

	cout<<"Value of X becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";

	char p = 'A' ,q = 'B';
	SwapX(&p,&q);

	cout<<"Value of P becomes : "<<p<<"\n";
	cout<<"Value of Q becomes : "<<q<<"\n";

	return 0;

}