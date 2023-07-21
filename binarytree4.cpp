#include <iostream>
#include <string>

using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;
 Node(int elt){
 	data=elt;
 	left=right=NULL;
 }
 };
 Node* root=NULL;
 Node* create(){
int d;
cin>>d;
Node* nn=new Node(d);
string lt;
cin>>lt;
if(lt=="true"){
	nn->left=create( );
}
string rt;
cin>>rt;
if(rt=="true"){
	nn->right=create();
}
return nn;
 }
 void Display (Node* nn){
	if (nn == NULL) {
			return;
		}
		string str = "";
		str = str + to_string(nn->data);
		str = "<--" + str + "-->";
		if (nn->left != NULL) {
			str = to_string(nn->left->data) +str;
		} else {
			str = "." + str;
		}
		if (nn->right != NULL) {
			str = str + to_string(nn->right->data);
		} else {
			str = str + ".";
		}
		cout<<str<<endl;
		Display(nn->left);// left subtree visit
		Display(nn->right);// right subtree visit
}
 void print(Node *root){
    if(root==NULL){
        return;
    }
    print(root->left); 
    cout<<root->data<<" ";   
    print(root->right);
}

 int main(){
 	 root=create();
Display(root); 
}