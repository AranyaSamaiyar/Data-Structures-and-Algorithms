#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b)
{
	int t ;
	t =a;
	a =b;
	b= t;
}
int main()
{
	int n,c=0,f=0,l=0,r=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{

		if(a[i]>a[i+1])
		{
			if(f==0)
			{
				l = i;
				f=1;
			}
			r = i+1;
		}
	}
//	cout<<l<<" "<<r<<" ";
	for(int i=l;i<l+(r-l+1)/2;i++)
	{
		//cout<<"hi"<<" ";
		/*cout<<"hi"<<a[i]<<" "<<a[r-i]<<"\n ";
		int t = a[i];
		a[i] = a[r-i];
		a[r-i] = t;
		cout<<"hello"<<a[i]<<" "<<a[r-i]<<"\n";*/
		swap(a[i],a[r-i+l]);
		
	}
//	cout<<a[l]<<" "<<a[r]<<" ";
//	for(int i=0;i)
	for(int i=0;i<n-1;i++)
	{
	//	cout<<a[i]<<" ";
		if(a[i]>a[i+1])
		{
			cout<<"no";
			return 0;
		}
	}
		//if(f==1)
	cout<<"yes"<<"\n"<<l+1<<" "<<r+1;
//	else
//	cout<<"no";
}
