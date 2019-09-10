#include<bits/stdc++.h>
using namespace std;
stack < pair < char, int> > stck;
bool IsBalanced(string a,int n)
{
	char c;
//	cout<<sizeof(a)/sizeof(char)<<" \n";
	for(int i=0;i<n;i++)
	{
		if(a[i]=='(' || a[i]=='{' || a[i]=='['){
		stck.push(make_pair(a[i],i));}
	//	cout<<stck.top();}
		else if(a[i]=='}' || a[i]== ')'|| a[i] ==']' ) 
		{
			//cout<<a[i];
			if(stck.empty()){
			cout<<i+1;
			return false;}
			else
			{
				c = stck.top().first;
				stck.pop();
				if((a[i]==')' && c !='(') || (a[i]=='}' && c!='{') || (a[i]==']'&& c!='['))
			{
				cout<<i+1;	return false;}	
			}
		}
	}
	if(!stck.empty()){ cout<<stck.top().second+1;
	return false;}
	
	return true;
}
int main()
{
	string a; int n;
	cin>>a>>n;
//	cout<<(sizeof(a)/sizeof(char))<<endl;
	if(IsBalanced(a,n))
	cout<<"Suceess";
	//else
//	cout<<"failure";
	return 0;
}
