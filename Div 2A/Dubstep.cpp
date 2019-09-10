#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[200];
	cin>>a;
	for(int i=0;a[i]!='\0';)
	{
		if(a[i]!='W'|| a[i+1]!='U'|| a[i+2]!='B')
		 {
		 	cout<<a[i];
		 	i++;
		 	if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
		 	cout<<" ";
		 }
		 else
		 {
		 	i+=3;
		 }
	}
	return 0;
}
