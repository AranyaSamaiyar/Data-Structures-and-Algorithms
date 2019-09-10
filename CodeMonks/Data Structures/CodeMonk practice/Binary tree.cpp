#include<bits/stdc++.h>
using namespace std;
struct Node{
	Node* left;
	Node* right;
	int key;
};
Node* head = NULL;
Node* GetNewNode(int i)
{
	Node* node = new Node();
	node->key = i;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void Insert(string s,int i)
{
	Node* t = GetNewNode(i);
	Node* node = head;
	int j=0;
	for(j=0;j<s.length()-1;j++)
	{
		if(s[j]=='L')
		node = node->left;
		else if(s[j]=='R')
		node = node->right;
	//	j+=1;
	}
	if(s[j]=='L')
	node->left = t;
	else if(s[j]=='R')
	node->right = t;
}
int Height(Node* p)
{
	if(p==NULL)
	return 0;
	else
	return 1+max(Height(p->left),Height(p->right));
}
int Diameter(Node* p)
{
	if(p==NULL)
	return 0;
	return 1+Height(p->left)+Height(p->right);
}
int main()
{
	vector <pair <string, int> > v;
	int t,x,b;
	string s;
	cin>>t>>x;
	head = GetNewNode(x);
	for(int i=0;i<(t-1);i++)
	{
	//	getline(cin,s);
		cin>>s;
		cin>>b;
	//	v.push_back(make_pair(s,i));
		Insert(s,b);
//	cout<<"hey ";
	}
	cout<<Diameter(head);
	
	
	
	
}
