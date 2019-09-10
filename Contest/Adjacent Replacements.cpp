#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		//b[a[i]]++;
	}
	long long int b[n];
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==1)
		cout<<a[i]<<" ";
		else
		cout<<a[i]-1<<" ";
		
	}
	
	
}
