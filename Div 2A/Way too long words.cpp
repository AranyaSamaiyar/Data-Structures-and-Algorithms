#include<bits/stdc++.h>
using namespace std;
void print(string sp)
{
	int n = sp.length();
	char s[n+1];
	strcpy(s,sp.c_str());
	if(strlen(s)>10)
	cout<<s[0]<<strlen(s)-2<<s[0+strlen(s)-1]<<"\n";
	else
	cout<<sp<<"\n";
}
int main()
{
	int i=0;
	string s;
	vector < string > p; 
	int n;
//	char s[n][1000];
	cin>>n;
	for(int j=0;j<n;j++)
	{
	//	cin.ignore();
	//	getline(cin,s);
	cin>>s;
	p.push_back(s);
//	cout<<p[j];
    }
  // for(int k=0;k<n;k++){
   //cout<<p[k];}
    for(int j=0;j<n;j++){
   	print(p[j]);}
	////	while(s[i]!='\0')
//	{
		
//	}
}
