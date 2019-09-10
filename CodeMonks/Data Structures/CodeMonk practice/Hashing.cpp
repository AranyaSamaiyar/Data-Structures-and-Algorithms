#include<bits/stdc++.h>
using namespace std;
vector < string > HashTable[20];
int HashFunc(string s)
{
	int x = 2,hash=0;
	int i=0;
	while(s[i]!='\0')
	{
		hash = hash*x+int(s[i]);
		i++;
	}
	hash = hash%100019;
	hash = hash%20;
	return hash;
}
void add(string s)
{
	int index= HashFunc(s);
	HashTable[index].push_back(s);
}
bool search(string s)
{
	int index = HashFunc(s);
	for(int i=0;i<HashTable[index].size();i++)
	{
		if(s==HashTable[index][i])
		return true;
	}
	return false;
}
int main()
{
	add("Hello");
	add("World");
	add("Hola");
	if(search("hola"))
	cout<<"Found";
	else 
	cout<<"Found";
	return 0;
}
