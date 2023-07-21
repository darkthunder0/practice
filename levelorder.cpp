#include <bits/stdc++.h>


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
	if (!nn) {
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
void levelorder(Node* root){
	// if(root==NULL){
	// 	return;
	// }
	queue<Node*> que;
	que.push(root);
	while(!que.empty()){
Node* ptr=que.front();
cout<<ptr->data<<" ";
que.pop();
	if(ptr->left!=NULL){
que.push(ptr->left);
	}
	if(ptr->right!=NULL){
		que.push(ptr->right);
	}

}
cout<<endl;
}
 int main(){
 	 root=create();
 	 levelorder(root);
Display(root); 
}
// 10 true 20 true 40 false false true 50 false false true 30 false true 60 true 70 false false false