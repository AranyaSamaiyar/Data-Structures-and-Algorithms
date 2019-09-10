#include<bits/stdc++.h>
using namespace std;

int game(int n, int m)
{
	if(m*n==0)
	return 1;
	else
	{
		return (1+game(n-1,m-1));
	}
}
int main()
{
	int n,m,c;
	cin>>n>>m;
	c = game(n,m);
	if(c%2==0)
	cout<<"Akshat";
	else{
	cout<<"Malvika";}
	return 0;
}
