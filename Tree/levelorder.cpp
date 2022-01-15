#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

/*class Tree{
    Node* root;
    methods
}
 //we will use functional approach
 */
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
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
int Diameter(Node* root){
    if(root==NULL){
        return 0;
    }
    int D1=height(root->left)+height(root->right);
    int D2=Diameter(root->left);
    int D3=Diameter(root->right);
    return max(D1,max(D2,D3));

}
int main()
{
    Node *root = buildTree();
    level_Order(root);
    cout<<"DIAMETER "<<Diameter(root);
}