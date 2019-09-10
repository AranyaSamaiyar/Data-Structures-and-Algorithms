#include<bits/stdc++.h>
using namespace std;
vector < int > endtime;
int main()
{
	int n,m;
	cin>>n>>m;
	vector < int > v(m);
	for(int i=0;i<m;i++)
	cin>>v[i];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(IsFree(j))
			{
				cout<<j<<endtime[j];
				endtime[j] + = v[i];
			}
		}
	}
}
