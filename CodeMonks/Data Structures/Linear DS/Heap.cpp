#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll  maxSize = 1000000;
ll H[1000000];
ll size =0; 
void swap(ll &a, ll &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int LeftChild(ll i)
{
	return (2*i+1);
}
int RightChild(ll i)
{
	return (2*i+2);
}
int Parent (ll i)
{
	return (i-1)/2;
}
void SiftUp(ll i)
{
	while(i>0 && H[Parent(i)]<H[i]) 
		{
			swap(H[i],H[Parent(i)]);
			i = Parent(i);
		}
}
void SiftDown(ll i)
{
	ll max_index;
	max_index = i;
	ll r = RightChild(i);
	ll l = LeftChild(i);
	if(l<size && H[l]>H[max_index])
		max_index = l;
	if(r<size && H[r]>H[max_index])
		max_index = r;
	if(i!=max_index){
		swap(H[i],H[max_index]);
		SiftDown(max_index);}
}
void Insert(int i)
{
	if(size==maxSize)
	{
		cout<<"ERROR";
		return;		}	
	H[size] = i;
	size +=1;
	SiftUp(size-1);
}
int ExtractMax()
{
	int m = H[0];
	H[0] = H[size-1];
	size = size-1;
	SiftDown(0);
	return m;
}
void Remove(int i)
{
	H[i] = INT_MAX;
	SiftUp(i);
	int m = ExtractMax();
	
}
void ChangePriority(int i, int p)
{
	int oldp = H[i];
	H[i] = p;
	if(p>oldp)
	SiftUp(i);
	else
	SiftDown(i);
}

int main()
{
/*	Insert(11);
	Insert(14);
	Insert(7);
	Insert(29);
	Insert(18);
	Insert(12);
	Insert(7);
	Insert(42);
	//for(int i=0;i<size;i++)
	//cout<<H[i]<<" ";
	//cout<<"  ";
	cout<<ExtractMax()<<endl;
	//for(int i=0;i<size;i++)
	//cout<<H[i]<<" ";
	
	cout<<ExtractMax()<<endl;
	cout<<ExtractMax()<<endl;
	cout<<ExtractMax()<<endl;
	return 0;*/
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
