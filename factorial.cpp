#include<iostream>
using namespace std;

class Recursion{
	public:
		int factorial(int n){
			if(n==1){
				return 1;
			}
			int fact;
			fact=n*factorial(n-1);
			return fact;
		}
};
int main(){
	int num;
	cout<<"Enter the number to find its factorial:"<<endl;
	cin>>num;
	Recursion ob;
	cout<<"The factorial of "<<num <<" is "<<ob.factorial(num)<<endl;
}
