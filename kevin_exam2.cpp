#include<iostream>

using namespace std;

class X{
	
	public:
		
		int a,b,c;
			
};

class Y : public X{
	
	public:
	
	void setdata(){
			
			cout<<"Enter A : ";
			cin>>a;
			cout<<"Enter B : ";
			cin>>b;
			cout<<"Enter C : ";
			cin>>c;
			
		}
	
	void getdata(){
		
		cout<<"A Cube : "<<a*a*a<<endl;
		cout<<"B Cube : "<<b*b*b<<endl;
		cout<<"C Cube : "<<c*c*c<<endl;
	}	
};

int main(){
	
	Y obj;
	
	obj.setdata();
	obj.getdata();
	
	
	return 0;
}
