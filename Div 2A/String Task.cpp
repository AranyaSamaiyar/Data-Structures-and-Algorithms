#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	cin>>s;
	for(int i =0;s[i]!='\0';i++)
	{
		if(s[i]!='a' && s[i]!='e' && s[i]!='o' && s[i]!='i'&& s[i]!='u'&& s[i]!= 'y' && s[i]!='Y' && s[i]!='A' && s[i] != 'E' && s[i] != 'I' && s[i]!= 'O' && s[i]!= 'U')
		{
			if(s[i]>='A'&& s[i] <='Z')
			cout<<"."<<char(s[i]-'A'+'a');
			else
			cout<<"."<<s[i];
		}
	}
}
