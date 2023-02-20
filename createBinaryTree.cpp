#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    int *left;
    int *right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};


node* builtTree(node * root)
{
    cout<<"Enter Data"<<endl;

    int data;
    cin>>data;

    root = new node(data);
}

int main(){

    node * root = NULL;
    //creating a tree
    root = builtTree(root);


    return 0;
}
