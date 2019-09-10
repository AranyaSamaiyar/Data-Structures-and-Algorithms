#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n = s.length(), cnt=0;
	int a[27] = {0};
	for(int i=0;i<n;i++) 
	{
		a[s[i]-'a']++;
	}
		for(int i=0;i<26;i++)
		{
			if(a[i]%2!=0)
			{
				cnt++;
			}
		}
		if(cnt%2==1||cnt==0)
		cout<<"First" ;
		else
		cout<<"Second";
		
	

}
