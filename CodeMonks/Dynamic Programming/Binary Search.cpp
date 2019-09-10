#include<bits/stdc++.h>
using namespace std;
int binarySearch(int low, int high, long long int key,long long int a[])
{
	
	while(low<=key)
	{
		int mid = (low+high)/2;
		if(a[mid]>key)
		{
			high = mid-1;
		}
		else if(a[mid]<key)
		{
			low = mid+1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int ternarySearch(int l, int r, long long int key, long long int a[])
{
	int mid1 = l + (r-l)/2;
	int mid2 = r - (r-l)/2;
	if(key==a[mid1])
	return mid1;
	if(key==a[mid2])
	return mid2;
	else if(key<a[mid1])
	return ternarySearch(l,mid1-1,key,a);
	else if(key>a[mid2])
	return ternarySearch(mid2+1,r,key,a);
	else
	return ternarySearch(mid1+1,mid2-1,key,a);
}
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int q;
	cin>>q;
	long long int x[q];
	for(int i=0;i<q;i++)
	cin>>x[i];
	sort(a,a+n);
	int pos[q];
	for(int i=0;i<q;i++)
	{
		pos[i] = ternarySearch(0,n-1,x[i],a);
	}
	for(int i=0;i<q;i++)
	{cout<<pos[i]+1<<"\n";}
}
