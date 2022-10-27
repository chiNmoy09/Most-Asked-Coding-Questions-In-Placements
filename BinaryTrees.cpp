#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

node* add(node* &root,int newData){
    node* newNode=new node(newData);
    if(root==NULL){
        root=newNode;
        newNode->left=NULL;
        newNode->right=NULL;
        return root;
    }
    node* temp=root;
    if(temp->data >= newData){
        temp->left=add(temp->left,newData);
    }else{
        temp->right=add(temp->right,newData);
    }

    return root;
}

void preOrder(node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node* root){
    if(root==NULL) return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void postOrder(node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

vector<vector<int>> bfs(node* root){
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }

    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int> lvl;
        for(int i=0;i<n;i++){
            node* newNode=q.front();
            q.pop();
            if(newNode->left != NULL){
                q.push(newNode->left);
            }
            if(newNode->right != NULL){
                q.push(newNode->right);
            }

            lvl.push_back(newNode->data);
        }
        ans.push_back(lvl);
    }


    return ans;



}



int main(){

    node* root=NULL;
    add(root,1);
    add(root,3);
    add(root,5);
    add(root,2);
    add(root,4);

    cout<<"PreOrder traversal is => \n";
    preOrder(root);cout<<endl;
    cout<<"InOrder traversal is => \n";
    inOrder(root);cout<<endl;
    cout<<"PostOrder traversal is => \n";
    postOrder(root);cout<<endl;



    return 0;
}