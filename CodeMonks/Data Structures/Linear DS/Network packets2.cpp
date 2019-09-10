#include<bits/stdc++.h>
using namespace std;
queue < pair < int, int> > Buffer;
int BeginTime()
{
	int m;
	if(Buffer.size()==1)
	m = Buffer.front().first;
	else if(!Buffer.empty())
	m = BeginTime(i-1)+Buffer[i-1].second;
	//else
	//m = Buffer[i].first;
	return m;
}
void Relax(int ai)
{
	if(Buffer.empty())
	return ;
	else
	{
		int m = Buffer.size();
		for(int i=0;i<m;i++)
		{
			if((BeginTime(i)+Buffer.front().second)<=ai){
			//	vector < pair <int, int > > :: iterator p = Buffer.begin();
			//	p=p+i;
			//Buffer.erase(p,p+1);
			Buffer.pop_front();
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
			cout<<BeginTime()<<endl;
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

