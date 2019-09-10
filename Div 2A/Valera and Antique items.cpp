#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,v,b[50],a,f=1;
	cin>>n>>v;
	vector < int > p;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		for(int j=0;j<a;j++)
		{
			//k=0;
			cin>>b[j];
			if(b[j]<v)
			{
				//cout<<i;
				if(f==1){
				p.push_back(i+1);
				f=0;}
			}
			//k++;
		}
		f=1;
		a=0;
	}
	cout<<p.size()<<endl;
	sort(p.begin(),p.end());
	int i=0;
	while(i!=p.size())
	{
	//	if(p[i]!=p[i-1]&&i==0)
		cout<<p[i]<<" ";
		i++;
	}
	
}
