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
Node* findMin(Node* root,int key){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node* remove(Node* root,int key){
    if(root==NULL)return NULL;
    else if(key<root->key){
        root->left=remove(root->left,key);
    }
    else if(key>root->key){
        root->right=remove(root->right,key);
    }
    else{
        //when current node matches with the key

        //0 children
        if(root->left==NULL&&root->right==NULL){
            delete root;
            root=NULL;
        }

        //1 children
        else if(root->left==NULL){
            Node* temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL){
            Node* temp=root;
            root=root->left;
            delete temp;
        }

        //2 children
        else{
            Node* temp=findMin(root->right,key);
            root->key=temp->key;
            root->right=remove(root->right,temp->key);
        }

    }
    return root;
}

//O(H) height of tree
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
cout<<endl;
// if(searchBST(root,13))cout<<"present "<<endl;
// else cout<<"not present"<<endl;
int key;
cin>>key;
root=remove(root,key);
printBst(root);
return 0;
}