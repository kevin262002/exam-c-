#include<iostream>

using namespace std;

class Math{
	
	public:
		
		int a;
		
		void set(int n){
			
			a = n;
		}
		void get(){
			
			cout<<"A : "<<a<<endl;
		}
		
		Math operator ++(){
			
			Math temp;
			
			temp.a = ++a;
			return temp;
		}
		Math operator --(){
			
			Math temp;
			
			temp.a = --a;
			return temp;
		}
	
	
	
};

int main(){
	
	Math obj;
	
	obj.set(10);
	obj.get();
	obj.operator ++();
	obj.operator --();
	
	return 0;
}
