#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector < int > v(n);
	vector < int > w(m);
	for(int i=0;i<n;i++)
	cin>>v[i];
	for(int i=0;i<m;i++)
	cin>>w[i];
	int a = *max_element(v.begin(), v.end());
	int b = *min_element(w.begin(), w.end());
	//cout<<a<<" "<<b<<" ";
	int i=0;
	while(a<b)
	{
		for(int i=0;i<v.size();i++)
		{
			if((2*v[i])<=a)
			{
				cout<<a;
				return 0;
			}
		}
		a++;
		
	}
/*	if(a!=b)
	cout<<a;
	else*/
	cout<<-1;
	
}
