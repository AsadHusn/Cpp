#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};

class Queue{
	private:
		node *front, *rear;
	public:
		Queue()
		{
			front = rear = NULL;
		}
		void enqueue(int n)
		{
			node *newnode = new node;
			newnode->data = n;
			newnode->next = NULL;
			if(front==NULL)
			{
				front = rear = newnode;
			}
			else
			{
				rear->next = newnode;
				rear = newnode;
			}
		}
		void dequeue()
		{
			if(front == NULL)
			{
				cout<<"Queue is empty"<<endl;
				return;
			}
			else
			{
				node *temp = front;
				front = front->next;
				delete temp;
			}
		}
		void show()
		{
			for(node *temp=front; temp!=NULL; temp=temp->next)
			{
				cout<<temp->data<<'\t';
			}
		}
		void free()
		{
			while(front!=NULL)
			{
				node *temp = front->next;
				delete front;
				front = temp;
			}
		}
};

int main()
{
	Queue q;
	for(int i=0; i<5; i++)
	{
		q.enqueue(i+1);
	}
	q.show();
	q.free();
}
