#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100],c='0';
	cin>>s;
	int count=0,i=0;
	while(s[i]!='\0')
	{
		if(s[i]=='h'&& count==0)
		{
			count = 1;
			c = 'h';
		//	cout<<count;
		}
		else if(s[i]=='e' && c=='h'&& count ==1)
		{
			count=2;
			c='e';
		//	cout<<count;
			
		}
	else 	if(s[i]=='l' && c=='e'&& count ==2)
		{
			count=3;
			c='l';
		//	cout<<count;
		}
	else if(s[i]=='l' && c=='l'&& count ==3)
		{
			count=4;
			c='l';
		//	cout<<count;
		}
	else if(s[i]=='o' && c=='l'&& count ==4)
		{
			count=5;
			c='o';
		//	cout<<count;
		}
		i++;
	}
	if(count==5)
	cout<<"YES";
	else
	cout<<"NO";
}
