#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
struct N
{   int d;
    struct N *n;
};
struct N *Front=NULL,*Rear=NULL;

void enqueue()
{   struct N *x;
    x=(struct N*)malloc(sizeof(struct N));
    x->n=NULL;
    cout<<"Enter the element to be inserted : ";
    cin>>x->d;
    if(Front==NULL)
    {  Front=Rear=x;
       cout<<Front->d<<" inserted"<<endl;
       return;
    }
    while(Rear->n!=NULL)
       Rear=Rear->n;
    Rear->n=x;
    Rear=Rear->n;
    cout<<Rear->d<<" inserted"<<endl;
}

void dequeue()
{   if(Front==NULL)
    {  cout<<"Queue is already empty!"<<endl;
       return;
    }
    struct N *p=Front;
    Front=Front->n;
    cout<<p->d<<" removed"<<endl;
    free(p);
}

void traverse()
{   struct N *t;
    t=Front;
    cout<<"The queue is :";
    if(Front==NULL)
       cout<<" (Empty)";
    else
    {  while(t)
       {   cout<<" "<<t->d;
	   t=t->n;
       }
    }
    cout<<endl;
}

main()
{   clrscr();
    int ch;
    while(1)
    {  cout<<"\nQueue operations (using Linked List)\n1. Enqueue\n2. Dequeue\n3. Traverse\n4. Exit\nEnter your choice : ";
       cin>>ch;
       cout<<"\n";
       switch(ch)
       {   case 1 : enqueue();
		    break;
	   case 2 : dequeue();
		    break;
	   case 3 : traverse();
		    break;
	   case 4 : exit(0);
	   default : cout<<"Wrong choice!!";
       }
    }
    getch();
}