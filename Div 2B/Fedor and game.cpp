#include<bits/stdc++.h>
using namespace std;
int cnt_set_bits(int a)
{
	int c=0;
	while(a)
	{
		c++;
		a=a&(a-1);
	}
	return c;
}
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	int val[m+1];
	for(int i=0;i<m+1;i++)
	cin>>val[i];
	int i=0,c=0;
	while(i<m)
	{
		if(cnt_set_bits(val[i]^val[m])<=k)
		c++;
		i++;
	}
	cout<<c;
}
