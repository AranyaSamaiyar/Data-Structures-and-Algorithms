#include<bits/stdc++.h>
using namespace std;
int eggDrop(int n, int k)
{
	
	if(k==0||k==1)
	return k;
	
	if(n==1)
	return k;
	
	int mo = 1000000;
	for(int i=1;i<=k;i++)
	{
		int res = max(eggDrop(n-1,i-1),eggDrop(n,k-i));
		
		mo = min(mo,res);
	}
	return mo+1;
}
int main()
{
	int n, k;
	cin>>n>>k;
	cout<<eggDrop(n,k);
}
