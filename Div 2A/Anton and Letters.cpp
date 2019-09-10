#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector < char > v;
	string a;
	std :: getline(cin,a);
	int n= a.length();
	//cout<<n;
	char arr[n+1];
	strcpy(arr,a.c_str());
	for(int i=0;i<n;i++)
	{
		
		if(arr[i]>='a' && arr[i]<='z')
		{
			//cout<<arr[i];
			if(find(v.begin(),v.end(),arr[i])==v.end()){
			v.push_back(arr[i]);}
			//cout<<a[i];}
		}
	}
	cout<<v.size();
	return 0;
}
