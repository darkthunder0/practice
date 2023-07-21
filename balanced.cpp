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
int maximum(Node* node){
if(node==NULL){
 return INT_MIN;
}
int ls=maximum(node->left);
int rs=maximum(node->right);
return max(ls,max(rs,node->data));
}
int minimum(Node* node){
if(node==NULL){
 return INT_MAX;
}
int ls=minimum(node->left);
int rs=minimum(node->right);
return min(ls,min(rs,node->data));
}
bool searchh(Node* node,int elt){
if(node==NULL){
	return false;
}
if(node->data==elt){
	return true;
} 
// searchh(node->left,elt);
// searchh(node->right,elt);
// or v 
return searchh(node->left,elt) || searchh(node->right,elt);
}

int heeight(Node* node){
	if(node==NULL){
		return -1;
	}
	int l=heeight(node->left);
	int r=heeight(node->right);
	return max(l,r)+1;
}

int diameter(Node* node){
	if(node==NULL){
		return 0;
	}
	int l=diameter(node->left);
	int r=diameter(node->right);
	int sd=heeight(node->left)+heeight(node->right)+2;
	return max(l,max(r,sd));
}

bool isbalanced(Node* node){
	if(node==NULL){
		return 0;
	}
	int l=diameter(node->left);
	int r=diameter(node->right);
	int sd=heeight(node->left)+heeight(node->right)+2;
	if(abs(l-r)<=1)return true;
	return max(l,max(r,sd));
}

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        if(targetsum<=0){
        	return true;
        }
        int lr=hasPathSum(root->left,(targetsum)-root->data);
        int rr=hasPathSum(root->right),targetsum-root->data);
    }
};
 int main(){
 	 root=create();
Display(root); 
 	 int maxx=maximum(root);
 	 int minn=minimum(root);
 	 bool search=searchh(root,100);
 	 int height=heeight(root);
 	 cout<<"max is "<<maxx<<endl;
cout<<"min is "<<minn<<endl;
cout<<"seach is"<<search<<endl;
cout<<"height is"<<height<<endl;
int dia=diameter(root);
cout<<dia<<endl;
bool isblance=isbalanced(root);
cout<<isblance<<endl;
}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void haspath(TreeNode* root,int targetSum, vector<vector<int>> arr2, vector<int> arr){
    if(root==NULL) return;
        if(root->left==NULL && root->right==NULL && targetSum-root->val==0){
            arr.push_back(root->val);
            arr2.push_back(arr);
            arr.pop_back();
            return;
        }
        arr.push_back(root->val);
        haspath(root->left,targetSum-root->val,arr2,arr);
        haspath(root->right,targetSum-root->val,arr2,arr);
    arr.pop_back();
    }
     vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> arr;
        vector<vector<int>> arr2;
        haspath(root,targetSum, arr2, arr);
    return  arr2;
    }
};