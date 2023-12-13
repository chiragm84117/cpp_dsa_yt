#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL; 
    }
};

node* buildtree(node* root){
    cout<<"enter the data for node"<<endl;
    int data;
    cin>> data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"enter data for inserting in left"<<data<<endl;
    root->left = buildtree(root->left);
    cout<<"enter data for inserting in right"<<data<<endl;
    root->right = buildtree(root->right);
    return root;
}

void levelOrder(node * root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);  // yeh  null  laga raheee taki yeh jese ayeee hum isko temp me lekeee enter krdeeee
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){// purana level complete ho gaya h 
            cout<<endl; // this is use fro level sepration to make the order in tree
            if(!q.empty()){
                q.push(NULL); //jese hi level khatam kraa h  after that will have the particular node value with us in the quee so will add the null again for the rest of the level 
                // ques will look like this ----->>> 1 Null 2 3 Null 
            }
        }

        else{
            
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }


}

void inorder(node * root){
    // LNR
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root == NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"enter data for root"<<endl;
    int data ;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        cout<<"enter the left data "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter the right data "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
            temp->right = new node(rightdata);
            q.push(temp->right);
        }


    }

}



int main(){
    node * root = NULL;

    buildFromLevelOrder(root);

    // root = buildtree(root);
    // cout<<"level of transveral"<<endl;
    // levelOrder(root);

    // cout<<"inorder transversal :" <<endl;
    // inorder(root);

    // cout<<endl;
    // cout<<"preorder transversal :" <<endl;
    // preorder(root);

    // cout<<endl;
    // cout<<"postorder transversal :" <<endl;
    // postorder(root);
}