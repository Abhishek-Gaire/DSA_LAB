#include<iostream>

using namespace std;

class Stack{
	int *stk;
	int top,size;
	public:
		Stack(int size){
			stk=new int(size);
			top=-1;
		}
		bool isEmpty(){
			if (top == -1){
				return true;
			}
			return false;
		}
		bool isFull(){
			if(top>=size-1){
				return true;
			}
			return false;
		}
		bool push(int data){
			if(isFull()){
				cout<<"Stack Overflow"<<endl;
				return false;
			}
			top++;
			stk[top]=data;
			return true;
		}
		int Pop(){
			if(isEmpty()){
				cout<<"Stack Underflow"<<endl;
				return -1; // error code
			}
			int data=stk[top];
			top--;
			return data;
		}
		void display(){
			cout<<"Stack Elements are:"<<endl;
			for (int i=top;i>-1; i--){
				cout<<stk[i]<<endl;
			}
		}

};
int main(){
	Stack ob(5);
	ob.push(9);
	ob.push(8);
	ob.push(7);
	ob.push(6);
	ob.push(2);
	ob.display();
	return 0;
}
 
