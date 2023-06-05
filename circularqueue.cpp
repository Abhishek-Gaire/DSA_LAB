#include<iostream>
using namespace std;
class CircularQueue{
	int front ,rear,count;
	int * queue;
	int size;
	public:
		CircularQueue(int size){
			this->size=size;
			queue= new int(size);
			front=0;
			count=0;
			rear=-1;
		}
		bool isFull(){
			if(count==size){
				cout<<"Circular Queue is Full"<<endl;
				return true;
			}
			return false;
		}
		bool isEmpty(){
			if(count == 0){
				cout<<"Circular Queue is Empty"<<endl;
				return true;
			}
			return false;
		}
		bool insertQueue(){
			if(isFull()){
				return false;
			}
			int data;
			cout<<"Enter the data to be added in Circular Queue"<<endl;
			cin>>data;
			rear=(rear+1)%size;
			queue[rear]=data;
			count++;
			cout<<"Data Successfully Added:"<<data<<endl;
			return true;
		}
		bool deleteQueue(){
			if(isEmpty()){
				return false;
			}
			int data;
			data=queue[front];
			front=(front+1)%size;
			count--;
			cout<<"Data Successfully Deleted:"<<data<<endl;
			return true;
		}
		int display(){
			if(isEmpty()){
				return false;
			}
			cout<<"Circular Queue Elements are:"<<endl;
			int i=front;
			while(i!=rear){
				cout<<queue[i]<<endl;
				i=(i+1)%size;
			}
			cout<<queue[rear]<<endl;
			return true;
		}
};
int main(){
	int size;
	cout<<"Enter the size of the queue"<<endl;
	cin>>size;
	CircularQueue ob(size);
	ob.insertQueue();
	ob.insertQueue();
	ob.insertQueue();
	ob.deleteQueue();
	ob.display();
	return 0;
}
