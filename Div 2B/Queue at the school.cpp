#include<bits/stdc++.h>
using namespace std;
void swap(char &a, char &b)
{
	char t;
	t = a;
	a = b;
	b = t;
}
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	int i=0,k=0;
	while(k<t){
		i=0;
	while(i<n)
	{
		if(s[i]=='B'&&s[i+1]=='G')
		{
			swap(s[i],s[i+1]);
			i+=2;
		}
		else
		i+=1;
	//	k+=1;
	}k++;}
	cout<<s;
}
