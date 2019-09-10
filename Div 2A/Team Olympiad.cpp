#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin>>n;
	stack < pair <int , int > > s1, s2, s3;
//	stack < int > s2;
//	stack < int > s3;
	for( int i=0;i<n;i++)
	{
		cin>>a;
		if(a==1)
		s1.push(make_pair(a,i));
		else if(a==2)
		s2.push(make_pair(a,i));
		else
		s3.push(make_pair(a,i));
	}
	cout<<min(s1.size(),min(s2.size(),s3.size()))<<endl;
	while(s1.empty()!=true&&s2.empty()!=true&&s3.empty()!=true)
	{
		cout<<s1.top().second+1<<" "<<s2.top().second+1<<" "<<s3.top().second+1<<endl;
		s1.pop();
		s2.pop();
		s3.pop();
	}
	
	
}
