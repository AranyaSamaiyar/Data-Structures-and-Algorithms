#include<bits/stdc++.h>
using namespace std;
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
# define ALPHABET_SIZE (26)
#define INDEX(c) ((int)c-(int)'a')
#define FREE(p)\
free(p);\
p = NULL;

//Forward declaration

struct trie_node_t
{
	int value;
	trie_node_t *children[ALPHABET_SIZE];	
};

struct trie_t{
	trie_node_t *root;
	int count;
};

trie_node_t* getNode()
{
	trie_node_t *pnode = new trie_node_t();
	for(int i=0;i<26;i++)
	pnode->children[i] = NULL;
	pnode->value = 0;
	return pnode;
}
void initialize(trie_t *root)
{
	root->root = getNode();
	root->count = 0;
}
void insert(trie_t *pTrie, string s)
{
	pTrie->count++;
	trie_node_t *pCrawl = pTrie->root;
	for(int i=0;i<s.size();i++)
	{
		int index = INDEX(s[i]);
		if(!pCrawl->children[index])
		pCrawl->children[index] = getNode();
		
		pCrawl = pCrawl->children[index];
	}
	pCrawl->value = pTrie->count;
}
int search(trie_t *pTrie, string s)
{
	trie_node_t *p = pTrie->root;
	for(int i=0;i<s.size();i++)
	{
		int index = INDEX(s[i]);
		
		if(!p->children[index])
		return 0;
		
		p = p->children[index];
	}
	return (p!=0 && p->value);
}
int leafNode(trie_node_t *node)
{
	if(node->value!=0)
	return 1;
return 0;
}
int isItFreeNode(trie_node_t *node)//A node that doesn't have any child
{
	for(int i=0;i<26;i++)
	{
		if(!node->children[i])
		return 0;
	}
return 1;
}
bool deleteHelper(trie_node_t *pNode, string s, int len, int level)
{
	if(pNode)//1st case when key is not present 
	{
		if(len==level)
			if(pNode->value!=0)
			{
				pNode->value = 0;//unmarking the leaf
				if(isItFreeNode(pNode))
				{
					return true;//2nd case delete node
				}
				return false;//3rd case key is present as a prefix to a longer key
			}
		}
		else
		{
			int index = INDEX(s[level]);
	
			if(deleteHelper(pNode->children[index],s,len,level+1))
			{
				FREE(pNode->children[index]);
				
				return (!leafNode(pNode) && isItFreeNode(pNode));
				// 4th case when another key is present as a prefix to this key
			}
		}
	}
	return false;
}
void deleteKey(trie_t *pTrie, string s)
{
	int len = s.size();
	if(len>0)
	{
		deleteHelper(pTrie->root,s,len,0);
	}
}
int main()
{
	char keys[][8] = {"she", "sells", "sea", "shore", "the", "by", "sheer"};
    trie_t trie;
 
    initialize(&trie);
 
    for(int i = 0; i < ARRAY_SIZE(keys); i++)
    {
        insert(&trie, keys[i]);
    }
 
    deleteKey(&trie, keys[0]);
 
    printf("%s %s\n", "she", search(&trie, "she") ? "Present in trie" : "Not present in trie");
 
    return 0;
}
