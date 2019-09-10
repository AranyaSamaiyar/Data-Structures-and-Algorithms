#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector < pair <ll, string> > HashTable[20];
int HashFunc(ll i)
{
	return((i%100019)%20);
}
void add(ll i,string s)
{
	ll index = HashFunc(i);
	HashTable[index].push_back(make_pair(i,s));
}
void print(ll i)
{
	ll index = HashFunc(i);
	ll j=0;
	string a;
	for(j=0;j<HashTable[index].size();j++)
	{
		if(i==HashTable[index][j].first)
		a = HashTable[index][j].second;
	}
	j=0;
	while(a[j]!='\0'){
	if(a[j]!=' ')
	cout<<a[j];
	j++;}
	cout<<"\n";
	//return false;
}
int main()
{
	ll n,m,b[100000];
	cin>>n;
	string s;
	ll a;
	for(ll i=0;i<n;i++){
	//	cin.ignore();
		cin>>a;
		getline(cin,s);
		add(a,s);
	}
	cin>>m;
	for(ll i=0;i<m;i++)
	{
		cin>>b[i];
	
	}
	for(ll i =0;i<m;i++)
	{
		print(b[i]);
	}
}
