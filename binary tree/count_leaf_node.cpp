#include<iostream>
using namespace std;

void inorder(BinaryTreeNode<int> * ,int cnt){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    if(root->left == NULL && root->right == NULL){
        cnt++;
    }
    inorder(root->right);
}

int noOfNode(BinaryTreeNode<int>* root){
    int cnt=0;
    inorder(root,cnt);
    return cnt
}

int main(){

}