#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node* left;
	struct Node* right;
};
Node* createnew(int dt){
	Node* nn=new Node();
	nn->data=dt;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
}
Node* insert(Node* root,int data){
	if(root==NULL){
		root=createnew(data);
	}
	// bool left;
	// cin>>left;
	else if(data<root->data){
		// int elt;
		// cin>>elt;
		// root->left=createnew(5);
		root->left=insert(root->left,data);
	}
	// bool right;
	// cin>>right;
	else{
		// int elt;
		// cin>>elt;
		root->right=insert(root->right,data);
	}
	// cout<<root->data<<endl;
	// cout<<root->left<<endl;
return root;
}
// void display(Node* root){
// 	if(root==NULL){
// 		return;
// 	}
// 	string str="";
// 	str+=root->data;
// 	str="<---"+ str+"--->";
// 	if(root->left!=NULL){
// 		str=root->left->data +str;
// 	}else{
// 				str="." + str;
// 	}
// 	if(root->right!=NULL){
// 				str+=root->right->data;

// 	}else{
// 		str=str+".";
// 	}
// 	cout<<str<<endl;
// 	display(root->left);
// 	display(root->right);
// }
void display(Node* root){
	if(root==NULL){
		cout<<root->data<<endl;
		return ;
	}
	cout<<root->left->data<<endl;
	cout<<root->right->data<<endl;
	// if(root->left!=NULL){
	// 	cout<<"left->"<<root->left->data<<endl;
	// }
	// if(root->right!=NULL){
	// 	cout<<"right->"<<root->right->data<<endl;
	// }
	// // cout<<root->data<<endl;
	display(root->left);
	display(root->right);
}
int main(){
Node* root=NULL;
root=insert(root,25);
root=insert(root,15);
root=insert(root,30);
root=insert(root,40);
root=insert(root,10);
root=insert(root,12);
// root=insert(root,20);
// root=insert(root,20);
// root=insert(root,20);
// root=insert(root,20);
// root=insert(root,30);
// cout<<root->left->data<<endl;
// cout<<root->data<<endl;

// cout<<root->right->data<<endl;
// display(root);
cout<<root->right->right->data;
}