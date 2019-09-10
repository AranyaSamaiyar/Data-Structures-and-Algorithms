#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll q[1000000];
ll front =-1;
ll rear = -1;
ll size = 1000000;
void enqueue(ll i)
{
	if(rear==size-1)
	{
		cout<<"Overflow";
		return;
	}
	else
	{
		rear+=1;
		q[rear] = i;
		if(front ==-1)
		front++;
	}
}
void dequeue()
{
	if(front==-1)
	{
	cout<<"-1";
		return;
	}
	else if(front==rear)
	{
		cout<<q[front];
		front = -1;
		rear = -1;
	}
	else
	{
		cout<<q[front];
		front++;
	}
}
void top()
{
	cout<<q[front];
}
ll SIZE()
{
	if(front==-1)
	return 0;
//	cout<<(rear-front+1)<<endl;
	return (rear-front+1);
}
int main()
{
	ll n;
	cin>>n;
	char a[n];
	ll b[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]=='E')
		cin>>b[i];
	}
	for(ll i=0;i<n;i++)
	{
		if(a[i]=='E')
		{
			enqueue(b[i]);
			cout<<SIZE()<<endl;
		}
		else
		{
			
			//cout<<top();
			dequeue();
			cout<<" "<<SIZE()<<endl;
			
		}
	}
}

