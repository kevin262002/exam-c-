#include<iostream>

using namespace std;

class A{
	
	public:
		
		void display1(int a,int b){
			
			cout<<"Subtraction : "<<a-b<<endl;		
		}
		
		void display2(int a,int b,int c){
			
			
			cout<<"Addition : "<<a+b+c<<endl;	
		}
};

int main(){
	
	A obj;
	
	obj.display1(100,20);
	obj.display2(50,10,20);
	
	
	return 0;
}
