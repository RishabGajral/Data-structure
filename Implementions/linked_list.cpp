// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    node* next;
    int data;
    //node* right;
    
    //constructor
    node(int val){
        this->data=val;
        this->next=NULL;
        //this->right=NULL;
    }
    
};

node* insert(node* root,int val){
    node* temp=new node(val);
    
    if(root == NULL){
        root=temp;
        return root;
    }
    node* ptr=root;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=temp;
    return root;
}
int main() {
    
    node* root=NULL;
    for(int i=0; i<7; i++){
       root=insert(root,i); 
    }
    node*root1=root;
    while(root1!=NULL){
        cout<<root1->data<<" ";
        root1=root1->next;
    }
   // std::cout << "Try programiz.pro";

    return 0;
}
