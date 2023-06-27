#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* leftTree;
	struct Node* rightTree;
};
class BinaryTree{
	struct Node *root;
	public:
		BinaryTree(){
			root=NULL;
		}
		Node *createNode(){
			struct Node *temp=new Node();
			if(!temp){
				cout<<"ERROR!"<<endl;
				return  NULL;
			}
			return temp;
		}
		void preOrder(Node *parent){
			if(!parent){
				return;
			}
			cout<<parent->data<<endl;
			preOrder(parent->leftTree);
			preorder(parent->rightTree);
		}
		void inOrder(Node *parent){
			if(!parent){
				return;
			}
			inOrder(parent->leftTree);
			cout<<parent->data<<endl;
			inorder(parent->rightTree);
		}
		void postOrder(Node *parent){
			if(!parent){
				return;
		}
			postOrder(parent->leftTree);
			postOrder(parent->rightTree);
			cout<<parent->data<<endl;
		}
		void insertNode(){
			Node *new_node=createNode();



		void deleteNode();
		void searchNode(){
			int data;
			cout<<"Enter the key to search:<<endl;
			cin>>data;
			Node *current=root;
			for(
				if(curr==NULL){
					cout<<"No data in the binary search tree"<<endl;
				}
				else if(curr->data==data){
					cout<<curr->data<<endl;
				}
				else if(data<current->data){
					current=current->leftTree;
				}
				else{
					current=current->rightTree;
				}
			}
