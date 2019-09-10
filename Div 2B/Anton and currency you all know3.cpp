#include<bits/stdc++.h>
using namespace std;
void swap(char &a, char &b)
{
	char c;
	c = a;
	a = b;
	b = c; 
}
typedef long long int ll;
int main()
{
	ll n, j=-1,i=0;
	string s;
	cin>>s;
	int last_dig = s[s.length()-1]-'0';
	int prev_even =10;
	//cout<<last_dig<<" ";
	while(i<s.length()-1)
	{
			if(((s[i]-'0')%2)==0)
		{
			//cout<<s[i]-'0'<<" "<<last_dig<<" "<<endl;
			j=i;
		}
		//cout<<s[i]-'0'<<" ";
		if(((s[i]-'0')%2==0)&&(last_dig>(s[i]-'0')))
		{
			//cout<<"hi";
			prev_even = s[i]-'0';
			swap(s[i],s[s.length()-1]);
			break;
			//cout<<s[i]<<" ";
			/*samp = swaps(i,s.length()-1,s);
			if(stois(samp)>max)
			max = stois(samp);*/
		}
		//cout<<(s[i]-'0')%2<<" ";
		i++;
	}
	if(prev_even==10)
	{
		swap(s[j],s[s.length()-1]);
	}
	if(j==-1)
	{
		cout<<"-1";
		return 0;
	}
	cout<<s;
	
}
