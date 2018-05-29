#include<iostream>
#include<stdlib.h>
#include"Node.cpp"

using namespace std;

class BTS
{
	Node *root;
	public:
		BTS()
		{
			root=NULL;
		}
		
		void insert(int value)
		{
			Node *temp;
			temp=root;
			if(root==NULL)
			{
				cout << "Enter new node"<< endl;
				root=new Node;
				root->data=value;
				root->left=NULL;
				root->right=NULL;
			}else
			{
				while(temp!=NULL)
				{
					if(temp->data<=value)
					{
						cout <<"Entered greater and equal"<< endl;
						temp=temp->left;
						temp=new Node;
						temp->data=value;
						temp->left=NULL;
						temp->right=NULL;
						break;
					}else if(temp->data>value)
					{
						cout <<"Entered lesser"<< endl;
						temp=temp->right;
						temp=new Node;
						temp->data=value;
						temp->left=NULL;
						temp->right=NULL;
						break;
					}
				}
			}
		}
		
		
		
		void search(int value)
		{
			
			
			if(root!=NULL)
			{
				Node *temp;
			    temp=root;
				while(temp!=NULL)
				{
					cout << "Entered"<<endl;
					if(temp->data==value)
					{
						cout << value <<  " is found" << endl;
						break;
					}else if(temp->data< value)
					{
						temp=temp->right;
					}else
					{
						temp=temp->left;
					}
				}
				
				if(temp==NULL)
				{
					cout << "No element is found"<< endl;
				}
				
			}else
			{
				cout << "No elements are present";
			}
		}
		
		
		
};


int main()
{
	BTS b;
	int i,value;
	for(i=0;i<5;i++)
	{
		cout << "Enter value:";
		cin >> value;
		b.insert(value);
	}
	
	
	cout << "Enter the value to be search";
	cin >> value;
	
	b.search(value);
	
	return 0;
}
