#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll stck[1000000];
ll size =1000000;
ll top =-1;
void push(ll n)
{
	if(top==size-1)
	return ;
	else
	{
		top+=1;
		stck[top] = n;
	}
	
}
void pop()
{
	if(top==-1){
	cout<<"No Food";
	}
	else 
	{
		top-=1;
		cout<<stck[top+1];
	}
}
int main()
{
	ll n,a[100000],b[100000];
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
		//	pop();
		}
		else
		{
			cin>>b[i];
		//	push(b);
		}
	}
	for(ll i=0;i<n;i++)
	{
			if(a[i]==1)
		{
			pop();
			cout<<"\n";
		}
			else
		{
		//	cin>>b[i];
			push(b[i]);
		}
	}
}
