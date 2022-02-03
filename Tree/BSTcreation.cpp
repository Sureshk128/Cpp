#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node* left;
    Node* right;
    Node(int key){
        this->key=key;
        left=right=NULL;
    }
};
Node* insert(Node* root, int key){
Node* temp=new Node(key);
if(root==NULL){
    return temp;
}
//rec case 
if(key<root->key){
    root->left=insert(root->left,key);
}
else{
    root->right=insert(root->right,key);
}
return root;
}

bool searchBST(Node* root,int key){
    if(root==NULL)return false;
    if(root->key==key)return true;
    if(root->key>key){
        return searchBST(root->left,key);
    }
    else{
        return searchBST(root->right,key);
    }
}
//inorder print
void printBst(Node* root){
if(root==NULL)return ;
printBst(root->left);
cout<<root->key<<"  ";
printBst(root->right);
}

int main(){
Node* root =NULL;
int arr[]={8,3,10,1,6,14,4,7,13};
for(int x:arr){
    root=insert(root,x);
}
printBst(root);
if(searchBST(root,13))cout<<"present "<<endl;
else cout<<"not present"<<endl;
return 0;
}