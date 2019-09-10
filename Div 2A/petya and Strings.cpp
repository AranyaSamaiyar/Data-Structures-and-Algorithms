#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0;
	char s1[100], s2[100];
	cin>>s1>>s2;
	while(s1[i]!='\0')
	{
		if(s1[i]<'A' || s1[i]>'Z')
		{
			if(s2[i]<'A'|| s2[i]>'Z')
			{
				if(s1[i]>s2[i])
				{
					cout<<"1";
					return 0;
				}
				if(s1[i]<s2[i])
				{
					cout<<"-1";
					return 0;
				}
			}
			else 
			{
				s2[i] = char(s2[i] - 'A' + 'a');
				
				if(s1[i]>s2[i])
				{
					cout<<"1";
					return 0;
				}
				if(s1[i]<s2[i])
				{
					cout<<"-1";
					return 0;
				}
				
			}
		}
		else 
		{
			s1[i] = char(s1[i] -'A' + 'a');
		
			if(s2[i]<'A'|| s2[i]>'Z')
			{
				if(s1[i]>s2[i])
				{
					cout<<"1";
					return 0;
				}
				if(s1[i]<s2[i])
				{
					cout<<"-1";
					return 0;
				}
			}
			else 
			{
				s2[i] = s2[i] - 'A' + 'a';
				
				if(s1[i]>s2[i])
				{
					cout<<"1";
					return 0;
				}
				if(s1[i]<s2[i])
				{
					cout<<"-1";
					return 0;
				}
				
			}
		}
		i++;
	}
	cout<<"0";
	return 0;
	
}
