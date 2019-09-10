#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int t=2;t<n;t+=2)
	{
		if((n-t)%2==0){
		cout<<"YES";
		return 0;}
	}
	cout<<"NO";
}
