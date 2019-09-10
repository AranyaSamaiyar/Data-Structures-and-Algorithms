#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node *next;
};
Node* head = NULL;
Node* tail = NULL;
Node* CreateNode(int a)
{
	Node *temp = new Node();
	temp->key = a;
	temp->next = NULL;
	return temp;
}
void PushFront(int key)
{
	Node *node = CreateNode(key);
	if(head==NULL)
	{
		head = node;
		tail = node;
		
	}
	else{
		node->next = head;
		head = node;
	}
}
Node* PopFront()
{
	Node* temp;
	if(head==NULL)
	return NULL;
	else
	{
		temp = head;
		head = head->next;		
	}
	if(head==NULL)
	head=tail;
	return temp;
}
void PushBack(int key)
{
	
	Node *node = CreateNode(key);
	if(head==NULL)
	{
		head = node;
		tail = node;
	}
	else
	{
		tail->next = node;
		tail = node;
	}
	
	
}
Node* PopBack()
{
	if(head==NULL)
	return NULL;
	else
	{
		Node* p = head;
		while(p->next->next!=NULL)
		p= p->next;
		p->next = NULL;
		Node* temp = tail;
		tail = p;
		return temp;
	}
}
void AddAfter(Node* node, int key)
{
	Node* node2 = CreateNode(key);
	if(node==NULL)
	{
		cout<<"ERROR";
		return;
	 } 
	 else
	 {
	 	node2->next = node->next;
	 	node->next = node2;
	 	if(node==tail)
	 	tail = node2;
	 }
}
void display()
{
	Node *p = head;
	while(p!=NULL)
	{
		cout<<p->key<<" ";
		p = p->next;
	}
	cout<<"\n";
}
int main()
{
	PushFront(5);
	PushBack(3);
	PushBack(7);
	display();
	PopFront();
	display();
	AddAfter(tail,1);
	display();
	PopBack();
	display();
	
}
