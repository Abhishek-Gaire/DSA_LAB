#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node* Next;
};
class Linked_List{
	struct Node* start,Null;
	public:
		Linked_List(){
			start=Null;
		}
		void insert_at_beginning(int value){
			struct Node* new_node=new Node();
			new_node->data=value;
			if(start==Null){
				new_node->Next=Null;
			}
			else{
				new_node->Next=start;
				start=new_node;
			}
		}
};
int main(){
	Linked_List ob;
	ob.insert_at_beginning(10);
	return 0;
}

