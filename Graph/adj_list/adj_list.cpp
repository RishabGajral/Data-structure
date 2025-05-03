
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void show(vector<vector<int>>& v){
    for(int i=0; i<v.size(); i++){
        cout<<"Neighbour for "<<i<<"th node are: ";
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

void dfs_helper(vector<vector<int>>& al,vector<int>& res,int src){
    if(src>=al.size())return;
    if(res[src]==1)return;
    cout<<src<<endl;
    res[src]=1;
    for(int i=0; i<al[src].size(); i++){
       dfs_helper(al,res,al[src][i]); 
    }
}
void dfs(vector<vector<int>>& al,int src){
    vector<int>res(al.size(),0);
    dfs_helper(al,res,src);
}
int main()
{
    vector<vector<int>>v(7);
   // if(v[2].size()>0)cout<<"abc"<<endl;
    vector<vector<int>>input={{0,1},{1,2},{2,3},{3,4},{4,5},{5,6}};
    for(int i=0; i<input.size(); i++){
        int temp=input[i][0];
        v[temp].push_back(input[i][1]);
    }
    show(v);
    dfs(v,0);
    //bfs(v);
    
}
