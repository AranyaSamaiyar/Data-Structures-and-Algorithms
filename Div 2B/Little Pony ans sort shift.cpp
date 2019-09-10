#include<bits/stdc++.h>
using namespace std;
bool is_or(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		return false;
	}
	return true;
}
int next(int p, int n)
{
	if(p<n-1)
	return p+1;
	else
	return 0;
}
int prev(int k, int n)
{
	if(k>0)
	return k-1;
	else
	return n-1;
}
int main()
{
	int n,j,p;
	cin>>n;
	int a[n], max =-1;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(max<=a[i]){
		max = a[i];
		j=i;}
	}
	p=j;
//	cout<<j<<" ";
	while(true)
	{
		if(a[p]==a[next(p,n)]){
		p = next(p,n);
		//cout<<p<<" ";
		}
		else 
		break;
		if(p==j)
		break;
	}
	//cout<<p<<" ";
/*	int k=-1;
	for(int i=j;i<n;i++)
	{
		if(is_or(a,n))
		{
			k=i;
			break;
		}
		else
		{
			swap(a[i],a[n-1]);
		}
	}
	cout<<k;*/
	int k=j, cnt =0;
	while(true){
		//cout<<"hello "<<endl;
		if(a[k]<a[prev(k,n)])
		{
			cout<<"-1 ";
			return 0;
		}
		cnt++;
		k = prev(k,n);
		if(prev(k,n)==p)
		break;
	}
	
	cout<<n-p-1;
}
