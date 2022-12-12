#include<iostream>
using namespace std;
struct node{
	int data;
	node *left, *right;
};
class Tree{
	private:
		node *root;
	public:
		Tree()
		{
			root = NULL;
		}
		void add(int n)
		{
			node *newnode = new node;
			newnode->data = n;
			newnode->left = newnode->right = NULL;
			if(root == NULL)
			{
				root = newnode;
			}
			else
			{
				node *temp = root;
				node *parent = NULL;
				
				while(temp != NULL)
				{
					parent = temp;
					if(n < temp->data)
					{
						temp = temp->left;
					}
					else
					{
						temp = temp->right;
					}
				}
				parent->data > n ? parent->left=newnode : parent->right=newnode;
			}
		}
		void traverse()
		{
			inorder(root);
		}
		void inorder(node *r)
		{
			if(r!=NULL)
			{
				inorder(r->left);
				cout<<r->data<<'\t';
				inorder(r->right);
			}
		}
};
int main()
{
	Tree t;
	for(int i=0; i<5; i++)
	{
		t.add(i+1);
	}
	t.traverse();
}
