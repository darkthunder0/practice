#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* left;
	Node* right;

};
Node* createnode(Node* root,int data){
	Node* nn=new Node();
	nn->data=data;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
}
Node* create(){
	int a;
	cin>>a;
	Node* root=createnode(root,a);
string lefty;
cin>>lefty;
if(lefty=="true"){
root->left=create();
}
string righty;
cin>>righty;
if(righty=="true"){
root->right=create();
}
return root;
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
// void print(Node* root){
// 	if(root==NULL){
//         return;
//     }
//    cout<<root->data<<" ";   
//     print(root->right);
//    print(root->left); 
// }

int main(){
	Node* root=create();
 // print(root);
	Display(root);
}