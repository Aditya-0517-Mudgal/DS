#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define Length 5
int Queue[Length];         //Size of Queue will be 4
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
    cout<<i<<" inserted";
}

int dequeue()
{   if(isEmpty())
    {  cout<<"Queue is already empty!";
       return NULL;
    }
    return Queue[(F++)%Length];
}

void traverse()
{   int x;
    cout<<"The queue is :";
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
    {   cout<<"\nCircular Queue operations (using Array)\n1. Insert\n2. Delete\n3. Traverse\n4. Exit\nEnter your choice : ";
	cin>>ch;
	cout<<"\n";
	switch(ch)
	{    case 1 : if(isFull())
			 cout<<"Queue is already full!";
		      else
		      {  cout<<"Enter the number to be inserted : ";
			 cin>>i;
			 enqueue(i);
		      }
		      cout<<endl;
		      break;
	     case 2 : i=dequeue();
		      if(i!=NULL)
			 cout<<i<<" is removed";
		      cout<<endl;
		      break;
	     case 3 : traverse();
		      break;
	     case 4 : exit(0);
	     default : cout<<"Wrong choice!!";
	}
    }
    getch();
}
