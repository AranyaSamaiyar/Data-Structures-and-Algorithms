#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a, p =0, q=0, r=0;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		if(i%3==0)
		p+=a;
		else if(i%3==1)
		q+=a;
		else
		r+=a;
	}
	int m = max(p,max(q,r));
	if(m==p)
	{
		cout<<"chest";
	}
	else if(m==q)
	{
		cout<<"biceps";
	}
	else
	cout<<"back";
}
