#include<bits/stdc++.h>
using namespace std;
bool kprime(int n)
{
	int c=0;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==0)
	return true;
	return false;
}
bool prime(int n)
{
	bool a[n+1];
	fill(a,a+n+1,true);
	int i=0;
	a[0] = false;
	a[1] = false;
	for(int i=2;i*i<=n;i++)
	{
		if(a[i]==true)
		{
			for(int j=i*i;j<=n;j+=i)
			a[j] = false;
		}
	}
/*	for(int i=2;i<n+1;i++)
	if(a[i])
	cout<<"1"<<" ";
	else
	cout<<"0"<<" ";*/
	return (a[n]);
	
}
bool tprime(long long int n)
{
	if(n==1)
	return false;
	long long int c=0;
	double intpart;
	double fract = modf(sqrt(n),&intpart);
	if(fract==0)
	{
		//cout<<sqrt(n)<<" ";
	if(kprime(sqrt(n)))
	return true;}
	return false;
}
int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(tprime(a[i]))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
