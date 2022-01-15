#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
   
    Node(int x){
        data=x;
        left=right=NULL;
    }
};
Node* levelOrderBuild(){
    int d;
    cin>>d;
    Node *root=new Node(d);
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* current=q.front();
        q.pop();
        int c1,c2;
        cin>>c1>>c2;
        if(c1!=-1){
            current->left=new Node(c1);
            q.push(current->left);
        }
        if(c2!=-1){
            current->right=new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}
void level_Order(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
   
    while(!q.empty()){
    Node* temp=q.front();
       if(temp==NULL){
           cout<<endl;
           q.pop();
           if(!q.empty()){
               q.push(NULL);
           }
       }
       else{
           q.pop();
           cout<<temp->data<<"   ";
           if(temp->left){
                q.push(temp->left);
           }
           if(temp->right){
               q.push(temp->right);
           }
       }
    }
 return;
}
int height(Node *root){
    if(root==NULL){
        return 0;
    }
    int h1=height(root->left);
    int h2=height(root->right);
    return 1+max(h1,h2);
}
int main(){
   Node* root=levelOrderBuild();
   level_Order(root);
   return 0;
}