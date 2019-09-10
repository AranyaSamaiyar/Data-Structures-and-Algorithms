#include<bits/stdc++.h>
using namespace std;
int a[1000];
int size =0;
int LeftChild(int i)
{
	return (2*i+1);
}
int RightChild(int i)
{
	return (2*i+2);
}
void SiftDown(int i)
{
	int i_m = i;
	int l = LeftChild(i);
	int r = RightChild(i);
	if(l<size && a[i_m]<a[l])
		i_m = l;
	if(r<size && a[i_m]<a[r])
		i_m = r;
	if(i!=i_m)
	{
		swap(a[i],a[i_m]);
		SiftDown(i_m);
	}
}
void BuildHeap(int n)
{
	size = n;
	for(int i=(n/2);i>=0;i--)
	SiftDown(i);
}
void display(int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i];
}
int main()
{
	int n;
	cin>>n;
	//int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	BuildHeap(n);
	for(int i =0;i<n-1;i++)
	{
		swap(a[0],a[size-1]);
		size = size-1;
		SiftDown(0);
		
	}
	display(n);
}

