#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void swap(char &a, char &b)
{
	char c;
	c = a;
	a = b;
	b = c; 
}
string swaps(ll i, ll  j, string s)
{
	string p;
	p = s;
	swap(p[i],p[j]);
	return p;
}
ll stois(string s)
{
	ll n=0,i=0;
	while(s[i]!='\0')
	{
		n = n*10 + (s[i]-'0');
		i++;
	}
	return n;
}
int main()
{
	string s, samp;
	cin>>s;
	ll i=0, max =-1;
	while(i<s.length()-1)
	{
		if((s[i]-'0')%2==0)
		{
			//cout<<s[i]<<" ";
			samp = swaps(i,s.length()-1,s);
			if(stois(samp)>max)
			max = stois(samp);
		}
		i++;
	}
	cout<<max;
	
}
