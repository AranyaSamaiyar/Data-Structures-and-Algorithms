#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	int j[m],t[n];
	for(int i=0;i<m;i++)
	cin>>j[i];
	bool jk[m];
	for(int i=0;i<m;i++){
	jk[i] = false;}
	for(int i=0;i<n;i++)
	t[i] = 0;
	int k=0,min,m_i;
	while(k<m)
	{
		m_i = 0;
		min = t[0];
		for(int i=0;i<n;i++)
		{
			if(min>t[i]){
			min = t[i];
			m_i = i;
			}
		}
		cout<<m_i<<" "<<min<<endl;
		t[m_i] +=j[k];
		k++;
	}
}
