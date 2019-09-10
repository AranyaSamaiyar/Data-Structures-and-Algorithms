#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int k,n;
	cin>>k;
	int max = 0;
	map < char , int > m;
	for(int i=0;i<26;i++)
	{
		cin>>n;
		m['a'+i] = n;
		if(n>max)
		max = n;
	}
	int i=0,count=0;
	for(i=0;i<s.length();i++)
	{
		count += (i+1)*m[s[i]];
	}
	while(i<s.length()+k)
	{
		count+=max*(i+1);
		i++;
	}
	cout<<count;
	
}
