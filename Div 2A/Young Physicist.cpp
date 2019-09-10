#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sumi=0,sumj=0,sumk=0;
	cin>>n;
	int vi[n],vj[n],vk[n];
	for(int i=0;i<n;i++)
	{
		cin>>vi[i]>>vj[i]>>vk[i];
	}
	for(int i=0;i<n;i++)
	{
		sumi+=vi[i];
		sumj+=vj[i];
		sumk+=vk[i];
	}
	if(sumi==0 && sumj==0 && sumk==0)
	cout<<"YES";
	else
	cout<<"NO";
}
