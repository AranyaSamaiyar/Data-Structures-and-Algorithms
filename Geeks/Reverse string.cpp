#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	string s;
	cin>>s;
	stack < string > wop;
	int i=0;
	while(s[i]!='\0')
	{
		//cout<<s[i]<<endl;
	    string temp;
	    while(s[i]!='.'&&s[i]!='\0')
	    {
	    //	cout<<s[i]<<endl;
	        temp = temp + s[i];
	        i++;
	    }
	   	wop.push(temp);
	   	if(s[i]=='\0') break;
	    i++;
	    //temp = temp + '\0';
	    
	    
	}
	//cout<<wop.size()<<" ";
	while(!wop.empty())
	{
	    string p = wop.top();
	     wop.pop();
	     if(!wop.empty())
	    cout<<p<<".";
	    else
	    cout<<p;
	   
	}
	
	return 0;
}
