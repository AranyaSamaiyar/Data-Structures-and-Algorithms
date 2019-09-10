#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,f1=0,f2=0;
	cin>>n;
	vector < pair <int ,int> > v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i].first>>v[i].second;
	}
	sort(v.begin(),v.end());
	int i,j,k,c=0;
	for(i=1;i<n-1;i++)
	{
		if(v[i-1].first==v[i].first && v[i].first==v[i+1].first)
		{
			f1=0;f2=0;
		//	cout<<"YES"<<" ";
			for(j=0;j<i-1;j++)
			{
				if(v[j].second==v[i].second){
			//	cout<<"YES 1";
				f1=1;
				break;}
			}
			if(f1==1)
			for(k=n-1;k>i+1;k--)
			{
				if(v[k].second==v[i].second){//cout<<"YES 2";
				f2=1;
				break;}
			}
			if(f1==1&&f2==1)
			{c++; }//cout<<"YES 3";}
		}
	}
	cout<<c;
}
