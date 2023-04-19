#include<iostream>

using namespace std;

class RBI{
	public:
		void ROI1(){
			
			cout<<"RBI : 10%"<<endl;
		}	
};

class SBI{
	public:
		void ROI2(){
			
			cout<<"SBI : 9%"<<endl;
		}	
};

class BOB : public RBI{
	public:
		void ROI3(){
			
			cout<<"BOB : 8%"<<endl;
		}	
};

class ICICI : public SBI, public BOB{
	public:
		void ROI4(){
			
			cout<<"ICICI : 7%"<<endl;
		}	
};

int main(){
	
	ICICI obj;
	
	obj.ROI1();
	obj.ROI2();
	obj.ROI3();
	obj.ROI4();
	
	return 0;
}
