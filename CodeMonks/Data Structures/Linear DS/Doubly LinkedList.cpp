#include<bits/stdc++.h>
using namespace std;
struct Node{
	int key;
	Node *prev;
	Node  *next;
};
Node *head = NULL;
Node *tail = NULL;
Node* CreateNode(int k)
{
	Node *node = new Node();
	node->key = k;
	node->next = NULL;
	node->prev= NULL;
	return node;
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
		node->prev = tail;
		tail  = node;
	}
}
void PushFront(int key)
{
	Node* node  = CreateNode(key);
	if(head==NULL)
	{
		head = node;
		tail = node;
	}
	else
	{
		head->prev = node;
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
		head->prev = NULL;
		return temp;
	}
}
Node* PopBack()
{
	Node* temp;
	if(head==NULL)
	return NULL;
	else
	{
		temp = tail;
		tail = tail->prev;
		tail->next = NULL;
		return temp;
	}
}
void AddAfter(Node* node, int key)
{
	if(node==NULL)
	{
		cout<<"ERROR";
		return;
	}
	else
	{
		Node* node2 = CreateNode(key);
		node2->next = node->next;
		node2->prev = node;
		node->next = node2;
		if(node2->next!=NULL)
		{
			node2->next->prev = node2; 
		}
		if(node==tail)
		tail = node2;
	}
}
void AddBefore(Node* node, int key)
{
	if(node==NULL)
	{
		cout<<"ERROR";
		return;
	}
	else
	{
		Node* node2 = CreateNode(key);
		node2->prev = node->prev;
		node2->next = node;
		node->prev = node2;
		if(node2->prev!=NULL)
		{
			node2->prev->next = node2;
		}
		if(node==head)
		head = node2;
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
	AddBefore(head,4);
	AddBefore(tail,0);
	display();
}
