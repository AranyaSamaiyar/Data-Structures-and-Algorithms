#include<bits/stdc++.h>
using namespace std;
struct dll{
	dll *next;
	int info;
	dll* prev;
};
dll* getNode(int i)
{
	dll* node = new dll();
	node->info = i;
	node->next = NULL;
	node->prev = NULL;
	return node;
}
dll* insertdll(dll *head, int i)
{
	cout<<"hey"<<" "<<i;
	dll* node = getNode(i);
	if(head==NULL){
		head = node;
	return (head);}
	if(i<=head->info)
	{node->next = head;
	head->prev = node;
	node->prev = NULL;
	head = node;
	return head;}
	
	dll* ptr = head;
	while(ptr->next!=NULL&&ptr->next->info<=i)
	{
		cout<<"ho"<<" ";
		ptr = ptr->next;
		
	}
	node->next = ptr->next;
	node->prev = ptr;
	node->next->prev = node;
	ptr->next = node;
	return head;
}
dll* deletedll(dll* head, int i)
{
	if(head==NULL)
	{
		cout<<"ERROR";
		return head;
	}
	else
	{
		if(head->info==i)
		{
			head = head->next;
			head->prev = NULL;
			return head;
		}
		dll* ptr = head;
		while(ptr->next!=NULL&&ptr->next->info!=i)
		{
			ptr = ptr->next;
		}
		if(ptr->next==NULL)
		{
			cout<<"Not Found";
			return head;
		}
		else
		{
			ptr->next = ptr->next->next;
			ptr->next->prev = ptr;
			return head;
		}
	}
}
void display(dll* head)
{
	cout<<"hey";
	dll* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->info<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}
int main()
{
	dll* head = NULL;
	head = insertdll(head,50);
	head = insertdll(head,40);
	head = insertdll(head,20);
	head = insertdll(head,30);
	head = insertdll(head,70);
	head = insertdll(head,60);
	display(head);
	head = deletedll(head,50);
	display(head);
	head = deletedll(head,70);
	display(head);
}
