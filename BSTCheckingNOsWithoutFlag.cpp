#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node*lchild;
	struct node*rchild;
}NODE,*PNODE,**PPNODE;


void Insert(PPNODE Head, int no)
{		
		PNODE temp = *Head;

	PNODE newn = new NODE;

	newn->data = no;
	newn->lchild = NULL;
	newn->rchild = NULL;

	if (*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		while(1)     //while(true)  its also valid        //for(;;)  Unconditional loop
		{
			if (temp->data == no)
			{
				cout<<"Duplicate Data \n";
				delete newn;
				break;
			}
			else if (temp->data > no)  // if Data is Small
			{
				if(temp->lchild == NULL)
				{
					temp->lchild = newn;
					break;
				}
				temp = temp->lchild;

			}

			else if(temp->data < no)  // if Data is Big
			{
				if (temp->rchild == NULL)
				{
					temp->rchild = newn;
					break;
				}
				temp = temp->rchild;
			}
		}
	}
}

bool Search(PNODE Head, int no)
{
	if (Head == NULL)   //if tree is empty
	{
		return false;
	}
	else             // tree contains at least 1 node
	{
		while(Head != NULL)
		{
			if (Head->data == no)     //node sapadla
			{
				break;	
			}
			else if (no > (Head->data))
			{
				Head = Head->rchild;
			}
			else if (no < (Head->data))
			{
				Head = Head->lchild;
			}
		}
		if (Head == NULL)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

int main()
{
	int no =0;
	bool bRet = false;

	PNODE first = NULL;

	Insert(&first, 51);
	Insert(&first, 21);
	Insert(&first, 101);

	cout<<"Enter Number to Search :  ";
	cin>>no;

	bRet = Search(first,no);

	if (bRet == true)
	{
		cout<<"Data is There :\n";
	}
	else 
	{
		cout<<"Data is Not There :\n";
	}
	return 0;
}