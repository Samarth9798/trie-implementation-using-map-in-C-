//trie implementation by SAMARTH TANDON

#include<bits/stdc++.h>
using namespace std;

map<string, bool> trie;


void insert(string s)
{
    string ss = "";
    
    for(int i = 0; i < s.length(); i++)
    {
        ss = ss + s[i];
        trie[ss] = true;
    }
}

void search(string s)
{
    if(trie.count(s) > 0) 
        cout << "Present" << endl; 
    else 
        cout << "Not Present" << endl;
}

void del(string s)
{
    if(trie.count(s) > 0)
    {
        trie.erase(s);
        cout << "String successfully removed!!" << endl;
    }    
    else
        cout << "String not present!!" << endl;
}

//driver function
int main()
{
    int n;
    
    cin >> n; // no of strings
    
    string s;
    
    for(int i = 0; i < n; i++){
        
        cin >> s;
        insert(s); //insert the string into trie
    }
    
    cin >> s; //input string to search in the trie
    
    search(s);
    
    cin >> s; //input string to delete from the trie
    
    del(s);
}
