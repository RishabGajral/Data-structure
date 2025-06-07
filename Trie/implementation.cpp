#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class trie{
    
    public:
    trie* child[26];
    bool is_end;
    
    trie(){
        is_end=false;
        for(int i=0; i<26; i++)child[i]=NULL;
    }
};

void insert(trie* root, const char* key){
    trie* curr=root;
    
    while(*key){
        int index=int(*key -'a');
        if(curr->child[index]==NULL){
            curr->child[index]=new trie();
        }
        curr=curr->child[index];
        key++;
    }
    curr->is_end=true;
    return;
    
}

void traverse(trie* root, char* string){
    
}

bool search(trie* root, const char* key){
    trie* curr=root;
    
    while(*key){
        int index=int(*key -'a');
        if(curr->child[index]==NULL){
            return false;
        }
        key++;
        curr=curr->child[index];
    }
    if(curr->is_end==true){
        cout<<"true"<<endl;
        return true;
    }
    else{
      cout<<"false"<<endl;
        return false;  
    }
    
    
}

int main()
{
    trie* obj=new trie();
    insert(obj,"abc");
    bool res=search(obj,"abc");
    cout<<res;
    return 0;
}
