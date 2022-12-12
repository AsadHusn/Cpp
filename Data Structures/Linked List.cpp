#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class List
{
	private:
		node *head;
	public:
		List()
		{
			head = NULL;
		}
		void add(int n)
		{
			node *newnode = new node;
			newnode->data = n;
			newnode->next = NULL;
			if(head==NULL)
			{	
				head = newnode;
			}
			else
			{
				node *temp = head;
				for(; temp->next!=NULL; temp=temp->next);
				temp->next = newnode;
			}
		}
		void del(int n)
		{
			if(head->data == n)
			{
				node *temp = head;
				head = head->next;
				delete temp;
				return;
			}
			
			node *pre = head;
			for(node *temp=head; temp!=NULL; temp=temp->next)
			{
				if(temp->data==n)
				{
					pre->next = temp->next;
					delete temp;
					return;
				}
				pre = temp;
			}
			cout<<"Not found"<<endl;
		}
		void show()
		{
			for(node *temp=head; temp!=NULL; temp=temp->next)
				cout<<temp->data<<'\t';
		}
		void free()
		{
			while(head!=NULL)
			{
				node *temp = head->next;
				delete head;
				head = temp;
			}
		}
};
int main()
{
	List l;
	for(int i=0; i<5; i++)
	{
		l.add(i+1);
	}
	l.show();
	l.free();
}
