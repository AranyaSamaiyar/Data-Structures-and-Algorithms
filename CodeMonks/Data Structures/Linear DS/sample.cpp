#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector < int > v;
	v.push_back(5);
	v.push_back(8);
		vector < int > :: iterator p = v.begin();
				
			v.erase(p,p+1);
	cout<<v.size()<<v[0];
	
}
