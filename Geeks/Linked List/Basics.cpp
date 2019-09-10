#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node* next;
	int key;
};
Node* getNewNode(int k)
{
	//cout<<"hey";
	Node* node = new Node();
	node->next = NULL;
	node->key = k;
	return node;
}
Node* insertll(Node* head, int key)
{
	//cout<<"hey"<<key<<" ";
	Node* node = getNewNode(key);
	if(head==NULL)
	{
		head = node; 
		return head;
	}
	else
	{
		Node *ptr = head;
		if(head->key>key)
		{
			node->next = head;
			head = node;
			return head;
		}
		while(ptr->next!=NULL&&ptr->next->key<=key)
		{

			ptr = ptr->next;
		}
		node->next = ptr->next;
		ptr->next = node;
		return head;
	}
	return head;
}
Node* deletell(Node* head, int key)
{
	//cout<<"hello";
	if(head==NULL)
	{
		cout<<"ERROR";
		return head;
	}
	else
	{
		Node* ptr = head;
		if(ptr->key==key)
		{
			//Node* temp = head;
			head = head->next;
			//delete(temp);
			return head;
		}
		else
		{
			Node* ptr = head;
			while(key!=ptr->next->key&&ptr->next!=NULL)
			{
				ptr = ptr->next;
			}
			if(ptr->next==NULL)
			{
				cout<<"NOT FOUND";
				return head;
			}
			else
			{
				ptr->next = ptr->next->next;
				//delete(ptr->next);
				return head;
			}
		}
	}
	return head;
}
void disp(Node* head)
{
//	cout<<"hi";
	Node* ptr = head;
	while(ptr!=NULL)
	{
		cout<<ptr->key<<" ";
		ptr = ptr->next;
	}
	cout<<"\n";
}
int main()
{
	Node* head = NULL;
	head = insertll(head,50);
	head = insertll(head,40);
	head = insertll(head,20);
	head = insertll(head,30);
	head = insertll(head,70);
	head = insertll(head,60);
	disp(head);
	head = deletell(head,50);
	disp(head);
	head = deletell(head,70);
	disp(head);
	
}
