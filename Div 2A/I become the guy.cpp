#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, p, q;
	cin>>n;
	cin>>p;
	vector < int > a(p);
	for(int i=0;i<p;i++)
	cin>>a[i];
	cin>>q;
	vector < int > b(q);
	for(int i=0;i<q;i++)
	cin>>b[i];
	for(int i=1;i<=n;i++)
	{
		if(find(a.begin(),a.end(),i)==a.end())
			if(find(b.begin(),b.end(),i)==b.end())
				{
					cout<<"Oh, my keyboard!";
					return 0;
				}
		
	}
	cout<<"I become the guy.";
	
	
	
}
