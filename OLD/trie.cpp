#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

class Trie;

class Node{
	char data;
	bool isTerminal;
	unordered_map<char,Node*> m;
public:
	Node(char d)
	{
		data=d;
		isTerminal=false;
	}
	friend class Trie;
};

class Trie{
	Node*root;
public:
	Trie()
	{
		root = new Node('\0');
	}
	// trie insertion
	void insert(string word)
	{
		Node*temp = root;
		for(char ch:word)
		{
			if(temp->m.count(ch)==0)
			{
				Node* n = new Node(ch);
				temp->m[ch] = n;
			}
			temp = temp->m[ch];
		}
		temp->isTerminal = true;
	}
	// searching in a trie
	bool search(string word)
	{
		Node*temp=root;
		for(char ch:word)
		{
			if(temp->m.count(ch)!=0)
			{
				temp=temp->m[ch];
			}
			else
			{
				return false;
			}
		}
		return temp->isTerminal;
	}
};

int main()
{
	Trie t;
	t.insert("Hello");
	t.insert("Apple");
	t.insert("News");
	t.insert("He");
	cout<<(t.search("He")?"Present":"Not Present");
	return 0;
}