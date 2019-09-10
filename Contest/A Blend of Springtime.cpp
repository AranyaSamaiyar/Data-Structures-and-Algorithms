#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	if(s.length()<3)
	{
		cout<<"No";
		return 0;
	}
	for(int i=0;i<s.length()-2;i++)
	{
		if((s.substr(i,3).compare("ABC")==0)||(s.substr(i,3).compare("ACB")==0)||(s.substr(i,3).compare("BAC")==0)||(s.substr(i,3).compare("BCA")==0)||(s.substr(i,3).compare("CAB")==0)||(s.substr(i,3).compare("CBA")==0))
		{
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
}
