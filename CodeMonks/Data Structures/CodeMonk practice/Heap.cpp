#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll A[100000];
ll maxsize = 100000;
ll size=0;
ll Parent(ll i)
{
	return (i-1)/2;
}
ll LeftChild(ll i)
{
	return (2*i+1);
}
ll RightChild(ll i)
{
	return (2*i+2);
}
void SiftUp(ll i)
{
	while(A[Parent(i)]<A[i]&&i>0){
		swap(A[i],A[Parent(i)]);
	i = Parent(i);}
}
void SiftDown(ll i)
{
	ll l =LeftChild(i);
	ll r = RightChild(i);
	ll i_m = i;
	if(l<size&&A[l]>A[i_m])
		i_m = l;
	if(r<size&&A[r]>A[i_m])
		i_m = r;
	if(i!=i_m)
	{
		swap(A[i],A[i_m]);
		SiftDown(i_m);
	}
}
void Insert(ll key)
{
	if(size==maxsize)
	{
		return;
	}
	else
	{
		A[size] = key;
		size+=1;
		SiftUp(size-1);
	}
}
ll ExtractMax()
{
	ll r = A[0];
	A[0] = A[size-1];
	size-=1;
	SiftDown(0);
	return r;
}
int main()
{
	ll n;
	cin>>n;
	ll a[n],m;
	for(ll i=0;i<n;i++)
	cin>>a[i];
	for(ll i=0;i<n;i++)
	Insert(a[i]);
	cin>>m;
	ll b[m],x;
	for(ll i=0;i<m;i++)
	{
		cin>>b[i];
		if(b[i]==1)
		{
			cin>>x;
			Insert(x);
		}
		else
		{
			cout<<ExtractMax()<<"\n";
		}
	}
	//for(int i=0;i<size;i++)
	//cout<<A[i];
	return 0;
	
}
