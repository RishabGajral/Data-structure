// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//node structure:
struct node{
    node* left;
    node* right;
    int val;
    node(int data){
       left=NULL;
       right=NULL;
       val=data;
    }
    
};

//bst implementation class
class bst{
    
    public:
    node* root;
    bst(){
       root=NULL; 
    }
    //Function to insert and search and insert
    void insert(int data){
        root=search_and_insert(data, root);
    }
    
    node* search_and_insert(int val, node* next){
        if(next==NULL)
        {
            node* temp=new node(val);
            return temp;
        }
        //search and insert
        if(val<=next->val){
            next->left=search_and_insert(val, next->left);
        }
        else
        next->right=search_and_insert(val, next->right);
        
        return next;
    }
    
    //function to print inorder
    void inorder(){
        node* helper_ptr=root;
        cout<<endl<<"inorder_of_the_bst is: "<<endl;
        print_inorder(helper_ptr);
    }
    void print_inorder(node* ptr){
        if(ptr==NULL)return;
        print_inorder(ptr->left);
        cout<<ptr->val<<" ";
        print_inorder(ptr->right);
    }
    
};

int main() {
    bst obj;
    obj.insert(2);
    obj.insert(1);
    obj.insert(4);
    obj.insert(0);
    obj.inorder();
    return 0;
}
