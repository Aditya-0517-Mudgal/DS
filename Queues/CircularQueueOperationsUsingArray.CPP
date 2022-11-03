#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define Length 5
int Queue[Length];
int F=0,R=0;

int isFull()
{   if((R%Length)==(F%Length)-1 || ((R%Length)==Length-1 && (F%Length)==0))
       return 1;
    else
       return 0;
}

int isEmpty()
{   if(F==R)
       return 1;
    else
       return 0;
}

void enqueue(int i)
{   Queue[(R++)%Length]=i;
    cout<<i<<" inserted"<<endl;
}

int dequeue()
{   if(isEmpty())
    {  cout<<"\nQueue is already empty"<<endl;
       return NULL;
    }
    return Queue[(F++)%Length];
}

void traverse()
{   int x;
    cout<<"\nThe queue is :";
    if(isEmpty())
    {	cout<<" (Empty)"<<endl;
	return;
    }
    for(x=F;x<R;x++)
	cout<<" "<<Queue[x%Length];
    cout<<endl;
}

void main()
{   clrscr();
    int ch,i;
    while(1)
    {   cout<<"\nQueue operations\n1. Insert\n2. Delete\n3. Traverse\n4. Exit\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{    case 1 : if(isFull())
			 cout<<"\nEnqueue not possible!"<<endl;
		      else
		      {  cout<<"\nEnter the number to be inserted : ";
			 cin>>i;
			 enqueue(i);
		      }
		      break;
	     case 2 : i=dequeue();
		      if(i!=NULL)
			 cout<<"\n"<<i<<" is removed"<<endl;
		      break;
	     case 3 : traverse();
		      break;
	     case 4 : exit(0);
	     default : cout<<"\nWrong choice!!";
	}
    }
    getch();
}