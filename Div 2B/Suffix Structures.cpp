#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s, t;
	cin>>s>>t;
	//automaton
	int i=0, j=0,count=0;
	for(i=0;i<s.length();i++)
	{
		if(t[j]==s[i])
		{
			j++;
		}
	}
	if(j==t.length()) cout<<"automaton";
	else
	{
		//array
		int scount[27] = {0}, tcount[27] = {0};
		for(i=0;i<s.length();i++)
		scount[s[i]-97]++;
		for(j=0;j<t.length();j++)
		tcount[t[j]-97]++;
		for(i=0;i<26;i++)
		{
			if(scount[i]==tcount[i])
			count++;
		}
		if(count==26)
		cout<<"array";
		else
		{
			//both
			count=0;
			for(i=0;i<26;i++)
			{
				if(scount[i]>=tcount[i])
				count++;
			}
			if(count==26)cout<<"both";
			else
			{
				cout<<"need tree";
			}
			
		}
	}
}
