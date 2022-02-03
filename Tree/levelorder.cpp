#include <bits/stdc++.h>
using namespace std;
//1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
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
class HDPair{
public:
int height;
int diameter;
};
HDPair optDiameter(Node* root){
    HDPair p;
    if(root==NULL){
        p.height=p.diameter=0;
        return p;
    }
    //otherwise
    HDPair Left=optDiameter(root->left);
    HDPair Right=optDiameter(root->right);

    p.height=max(Left.height,Right.height)+1;

    int D1=Left.height+Right.height;
    int D2=Left.diameter;
    int D3=Right.diameter;

    p.diameter=max(D1,max(D2,D3));

    return p;
}
int main()
{
    Node *root = buildTree();
    level_Order(root);
    cout<<"DIAMETER "<<Diameter(root)<<endl;
    cout<<"optimised Diameter "<<optDiameter(root).diameter;
}