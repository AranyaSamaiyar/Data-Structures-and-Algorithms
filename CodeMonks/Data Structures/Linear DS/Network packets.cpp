#include<bits/stdc++.h>
using namespace std;
vector < pair < int, int> > Buffer;
int BeginTime(vector < pair < int, int> > :: iterator &p)
{
	int m;
	if(Buffer.size()==1)
	m = Buffer.front().first;
	else if(!Buffer.empty())
	m = max(Buffer.front().first,BeginTime(p-1)+*(p-1).second);
//	else
//	m = Buffer[i].first;
	return m;
}
void Relax(int ai)
{
	if(Buffer.empty())
	return ;
	else
	{
		vector < pair <int, int > > :: iterator p = Buffer.begin();
		for(int i=0;i<Buffer.size();i++)
		{
			if((BeginTime(p+i)+Buffer[i].second)<=ai){
				vector < pair <int, int > > :: iterator p = Buffer.begin();
				p=p+i;
			Buffer.erase(p,p+1);
			}
			
		}
	}
}

bool IsBufferFree(int ai, int S)
{
	Relax(ai);
	if(Buffer.size()<S)
		return true;
	else
		return false;
}
void Network()
{
	
	int S, n;
	cin>>S>>n;
	vector < pair < int, int > > v(n);
	for(int i=0;i<n;i++)
	cin>>v[i].first>>v[i].second;
	for(int i=0;i<n;i++)
	{
		if(IsBufferFree(v[i].first,S))
		{
			Buffer.push_back(make_pair(v[i].first,v[i].second));
			vector < pair <int, int> > :: iterator p = Buffer.end();
			cout<<BeginTime(p)<<endl;
		}
		else
			cout<<"-1";
	}
	
	
}
int main()
{
	Network();
	return 0;
}

