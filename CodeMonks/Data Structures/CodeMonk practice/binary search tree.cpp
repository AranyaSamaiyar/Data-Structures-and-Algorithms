#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct Node{
	Node* left;
	Node* right;
	ll key;
};
Node* GenerateNewNode(ll key)
{
	Node* node = new Node();
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	return node;
}
Node* Insert(Node* &head, ll key)
{
	Node* temp = GenerateNewNode(key);
	if(head==NULL)
	{
		head = temp;
	//	return temp;
	}
	else if(head->key>=key)
	{
		head->left = Insert(head->left,key);
	}
	else
	{
		head->right = Insert(head->right,key);
	}
	return head;
}

bool Search(ll key,Node* head){
	if(head==NULL)
	return false;
	else 
	{
		if(key<head->key)
		return Search(key,head->left);
		else if(key>head->key)
		return Search(key,head->right);
		else
		return true;	
	}
}
Node* FindMin(Node* node)
{
	Node* t = node;
	while(t->left!=NULL)
	t = t->left;
	return t;
}
Node* Delete(Node* head, ll key)
{
	if(head==NULL)
	return head;
	else if(head->key>key)
	head->left = Delete(head->left,key);
	else if(head->key<key)
	head->right = Delete(head->right,key);
	else
	{
		if(head->left==NULL&&head->right==NULL)
		{
			head = NULL;
			return head ;
		}
		else if(head->left == NULL)
		{
			Node* temp = head;
			head = head->right;
			delete temp;
			return head; 
		}
		else if(head->right==NULL)
		{
			Node* temp = head;
			head = head->left;
			delete temp;
			return head;
		}
		else
		{
			Node* temp = FindMin(head->right);
			head->key = temp->key;
			head->right = Delete(head->right,temp->key);
			return head;
		}
	}
}
Node* Find(ll key, Node* head)
{
	if(head==NULL)
	return head;
	else if(head->key>key)
	return Find(key,head->left);
	else if(head->key<key)
	return Find(key,head->right);
	else 
	return head;
}
Node* GetSuccessor(ll key, Node* head)
{
	Node* current = Find(key,head);
	if(current==NULL)
	{
		cout<<"ERROR";
		return NULL;
	}
	else
	{
		if(current->right!=NULL)
		{
			
			return FindMin(current->right);
		}
		else
		{
			Node* ancestor = head;
			Node* successor = NULL;
			while(ancestor!=current)
			{
				if(ancestor->key>current->key)
				{
					successor = ancestor;
					ancestor = ancestor->left;
				}
				else
					ancestor = ancestor->right;
			}
			return successor;
		}
	}
	
}
void Inorder(Node* head)
{
	if(head==NULL)
	return;
	else
	{
		Inorder(head->left);
		cout<<head->key<<"\n";
		Inorder(head->right);
	}
}
int main()
{
	Node* head = NULL;
/*	head = Insert(head,20);
	head = Insert(head,10);
	head = Insert(head,30);
	head = Insert(head,50);
	head = Insert(head,40);
	head = Insert(head,90);
	head = Insert(head,60);
	Inorder(head);
	cout<<"\n"<<GetSuccessor(60,head)->key<<"\n";
	head  = Delete(head,50);
	Inorder(head);
	if(Search(30,head))
	cout<<"\n"<<"Found";*/
	ll n,m;
	cin>>n;
	ll input[n];
	for(ll i=0;i<n;i++)
	{
		cin>>input[i];	
		head = Insert(head,input[i]);
	}
	cin>>m;
	Inorder(Find(m,head));
}
