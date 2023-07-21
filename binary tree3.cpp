#include <iostream>
#include <string>

using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
}; 

Node* buildTree()
{
    int data;
    cin>>data;
    int d = data;
    Node* root = new Node(d);
  string dataa;
    cin>>dataa;
    if(dataa == "true")
    {
        root->left = buildTree();
    } 
string dataa2;
    cin>>dataa2;
    if(dataa2 == "true")
    {
        root->right = buildTree();
    } 

    return root;

}



int main() {
    Node* root = buildTree();
    print(root);

    return 0;
}
