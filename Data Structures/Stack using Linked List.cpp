#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class Stack
{
	private:
		node *top;
	public:
		Stack()
		{
			top = NULL;
		}
		void push(int n)
		{
			node *newnode = new node;
			newnode->data = n;
			newnode->next = NULL;
			if(top==NULL)
			{	
				top = newnode;
			}
			else
			{
				node *temp = top;
				for(; temp->next!=NULL; temp=temp->next);
				temp->next = newnode;
			}
		}
		int pop()
		{
			if(top == NULL)
			{
				cout<<"Stack is empty";
				return -1;
			}
			node *temp = top;
			int n = top->data;
			top = top->next;
			delete temp;
			return n;
		}
		void show()
		{
			for(node *temp=top; temp!=NULL; temp=temp->next)
				cout<<temp->data<<'\t';
		}
		void free()
		{
			while(top!=NULL)
			{
				node *temp = top->next;
				delete top;
				top = temp;
			}
		}
};
int main()
{
	Stack s;
	for(int i=0; i<5; i++)
	{
		s.push(i+1);
	}
	s.show();
	
}
