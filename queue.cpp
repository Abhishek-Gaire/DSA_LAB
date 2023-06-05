#include<iostream>
#include<stdlib.h>

using namespace std;
class Queue{
	int size;
	int front;
	int rear;
	int *q;
	public:	
		Queue(int size){
			this->size=size;
			q=new int(size);
			front=-1;
			rear=-1;
		}
		bool enQueue(){
			if(isFull()){
				return false;
			}
			int data;
			cout<<"Enter the data to be added in queue"<<endl;
			cin>>data;
			if (front==-1 && rear==-1){
				front++;
				rear++;
			}
			q[rear]=data;
			rear++;
			cout<<"Data Added Successfully"<<endl;
			return true;
		}
		bool deQueue(){
			if(isEmpty()){
				return false;
				cout<<"Stack is Emoty"<<endl;
			}
			int data;
			data=q[front];
			front++;
			cout<<"Data Successfully Deleted:"<<data<<endl;
			return true;
		}
		bool isFull(){
			if(rear>size-1){
				cout<<"Queue is Full"<<endl;
				return true;
			}
			return false;
		}
		bool isEmpty(){
			if((front==-1 && rear==-1) || (front>rear)){
				cout<<"Queue is Empty"<<endl;
				return true;
				}
			return false;
		}
		void display(){
			cout<<"Queue Elements are:"<<endl;
			for(int i=front;i<rear;i++){
				cout<<q[i]<<endl;
		}	}
};
int main(){
	int size;
	cout<<"Enter the size of the Queue"<<endl;
	cin>>size;
	Queue ob(size);
	ob.enQueue();
	ob.enQueue();
	ob.deQueue();
	ob.display();
}

