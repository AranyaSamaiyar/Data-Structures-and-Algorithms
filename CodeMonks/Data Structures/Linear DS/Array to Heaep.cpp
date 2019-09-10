#include<bits/stdc++.h>
using namespace std;
int a[100000];
int size =0;
//int count =0;
vector < pair <int, int> > v;
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
	if(l<size && a[l]<a[i_m])
		i_m = l;
	if(r<size && a[r]<a[i_m])
		i_m = r;
	if(i!=i_m)
	{
		//count++;
		swap(a[i],a[i_m]);
		v.push_back(make_pair(i,i_m));
		SiftDown(i_m);
	}
}
void BuildHeap(int n)
{
	size = n;
	for(int i=(n/2);i>=0;i--)
	{
		SiftDown(i);
	}
}
void display(int n)
{
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	BuildHeap(n);
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	cout<<v[i].first<<" "<<v[i].second<<"\n";
//	display(n);	
}
