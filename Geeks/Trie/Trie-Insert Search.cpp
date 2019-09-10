#include<bits/stdc++.h>
const int Alpha_size = 26;
using namespace std;
struct TrieNode{
	TrieNode *children[Alpha_size];
	bool isEndofWord ;
};

TrieNode* getNode()
{
	TrieNode *pnode = new TrieNode();
	for(int i=0;i<Alpha_size;i++)
	pnode->children[i] = NULL;
	
	pnode->isEndofWord = false;
	return pnode;
}
void insert(string s, TrieNode *root) 
{	
	TrieNode *pCrawl = root;
	for(int i=0;i<s.length();i++)
	{
		int index = s[i]-'a';
		if(pCrawl->children[index]==NULL)
		pCrawl->children[index] = getNode();
		
		pCrawl = pCrawl->children[index];
	}
	pCrawl->isEndofWord = true;
}
bool search(TrieNode* root, string s)
{
	TrieNode* pCrawl = root;
	for(int i=0;i<s.length();i++)
	{
		int index = s[i]-'a';
		if(pCrawl->children[index]==NULL)
		return false;
		
		pCrawl = pCrawl->children[index];
	}
	return (pCrawl!=NULL && pCrawl->isEndofWord==true);
}
int main()
{
	  string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);
    TrieNode *root = getNode();
	for(int i=0;i<n;i++)
	insert(keys[i],root);	
	
	  search(root, "the")? cout << "Yes\n" :
                         cout << "No\n";
    search(root, "any")? cout << "Yes\n" :
                           cout << "No\n";
    return 0;
}
