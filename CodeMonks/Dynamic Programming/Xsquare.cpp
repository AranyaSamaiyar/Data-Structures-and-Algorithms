#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
struct triplee{
	int a, b, c;
};
int main()
{
	
	int n, q;
	cin>>n>>q;
	vector < triplee> v(q);
	vector < ll > w(q); 
	//fill(v.begin(),v.end(),0);
	ll A[n], B[n];
	for(int i=0;i<n;i++)
	cin>>A[i];
	for(int i=0;i<n;i++)
	cin>>B[i];
	for(int i=0;i<q;i++)
	{
		cin>>v[i].a;
		cin>>v[i].b;
		cin>>v[i].c;
	}
	for(int i=0;i<q;i++)
	{
		w[i]=0;
		int k=0;
		if(v[i].a==1)
		{
			
			for(int j=(v[i].b)-1;j<v[i].c;j++)
			{
				w[i]+=((k%2)==0)?A[j]:B[j];
				k++;
			}
		}
		else
		{
			for(int j=(v[i].b)-1;j<v[i].c;j++)
			{
				w[i]+=((k%2)==1)?A[j]:B[j];
				k++;
			}
		}
	}
	for(int i=0;i<q;i++)
	cout<<w[i]<<" ";
	
}
