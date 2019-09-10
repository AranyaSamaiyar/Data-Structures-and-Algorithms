#include<bits/stdc++.h>
using namespace std;
int mins(int a,int b, int c)
{
	if(a<b)
	{
		if(a<c)
		return a;
		else
		return c;
	}
	else
	{
		if(b<c)
		return b;
		else
		return c;
	}
}
int main()
{
	int n, m, a, b;
	cin>>n>>m>>a>>b;
//	cout<<n*a<<endl;
//	cout<<(n/m)*b+(n%m)*a<<endl;
//	cout<<ceil((double)n/m)*b<<endl;
	cout<<mins(n*a,(n/m)*b+(n%m)*a,ceil((double)n/m)*b);
}
