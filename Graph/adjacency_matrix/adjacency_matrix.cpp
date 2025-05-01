// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void print_(vector<vector<int>>& adj){
  for(int i=0; i<adj.size(); i++){
      cout<<"node from source "<<i<<" are ";
      for(int j=0; j<adj[i].size(); j++){
          if(adj[i][j]==1){
              cout<<j<<" ";
          }
      }
      cout<<endl;
  }  
}
void dfs_helper(vector<vector<int>>& adj,int n,int src,vector<int>&visited){
    if(visited[src]==1){}
    else
    {   cout<<src<<endl;
        visited[src]=1;
        for(int i=0; i<n; i++){
            if(adj[src][i]==1 && !visited[i])
            dfs_helper(adj,n,i,visited);
        }
    }
}
void dfs(vector<vector<int>>& adj,int n,int src){
    vector<int>v(n,0);
    dfs_helper(adj,n,src,v);
}

void bfs_helper(vector<vector<int>>& adj,int n,int src,vector<int>&visited){
    queue<int>q;
    if(!visited[src]){
        visited[src]=1;
        q.push(src);
        cout<<src<<endl;
    }
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        for(int i=0; i<n; i++){
            if(adj[temp][i]==1 && visited[i]!=1){
                visited[i]=1;
                q.push(i);
                cout<<i<<endl;
            }
        }
    }
    
}
void bfs(vector<vector<int>>& adj,int n,int src){
    vector<int>v(n,0);
    bfs_helper(adj,n,src,v);
}



int main() {
   vector<vector<int>>v={{0,1},{1,2},{2,3},{3,4},{4,5},{5,6},{6,7}};
   int n=8; //number of nodes
   //adjacency matrix create
   vector<vector<int>>adj(n,vector<int>(n,0));
   for(int i=0; i<v.size(); i++){
       int src=v[i][0];
       int dest=v[i][1];
       adj[src][dest]=1;
       adj[dest][src]=1;
   }
   print_(adj);
   dfs(adj,n,0);
  // bfs(adj,n,0);
   
   
    

    return 0;
}
