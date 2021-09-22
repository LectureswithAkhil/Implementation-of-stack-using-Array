#include<iostream>
using namespace std;
int top=-1;
int a[5];

bool isempty()
{
	if (top==-1)
	return true;
	else
	return false;
}
void push(int value)
{
	if (top==4)
	{
		cout<<"stack is full \n";
		
	}
	else{
		top++;
		a[top]=value;
	}
}
void pop()
{
	if(isempty())
	cout<<"The stack is empty \n";
	else
	top--;
}
void top_show()
{
	if (isempty())
	cout<<"stack is empty \n";
	else
	cout<<"The top most element is:"<<a[top]<<"\n";
}
void display()
{
	if (isempty())
	{
		cout<<"stack is empty \n";
	}
	else
	{
		for(int i=0;i<=top;i++)
		cout<<a[i]<<" ";
		cout<<"\n";
	}
}
void isfull()
{
	if(top==4)
	{
		cout<<"The stack is full \n";
		
	}
	else
	{
		cout<<"The stack is not full";
	}
}
int main()
{
	int choice,flag=1,value;
	while(flag==1)
	{
		cout<<"\n 1.push 2.pop 3.top 4.display 5.EXIT \n";
		cin>>choice;
		switch(choice)
		{
			case 1:cout<<"enter value to be inserted : \n";
				   cin>>value;
				   push(value);
				   break;
			case 2:pop();
				   break;
			case 3:top_show();
			       break;
			case 4:display();
			       break;
			case 5:flag=0;
			 	   break;
		}
	}
	return 0;
}

