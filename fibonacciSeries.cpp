#include<iostream>
using namespace std;

class Recursion{
	public:
		int fibo(int num){
			if(num==0){
				return 0;
			}
			if (num==1 || num==2){
				return 1;
			}
			return fibo(num-2)+fibo(num-1);
		}
};
int main(){
	int num;
	cout<<"Enter a number upto which you want a fibonacci series:"<<endl;
	cin>>num;
	int i=1;
	cout<<"The terms in fibonacci series are:"<<endl;
	Recursion ob;
	while(i<=num){
		cout<<ob.fibo(i)<<endl;
		i++;
	}
	return 0;
}
