#include<iostream>

using namespace std;

class A{
	
	public:
		
		int stu_id;
		char stu_name[20];
		int stu_age;
		char stu_course[20];
		
	
}; 

class B : public A{
	
	public:
		void setter(){
			
			cout<<"Enter Student Id : ";
			cin>>stu_id;
			cout<<"Enter Student Name : ";
			cin>>stu_name;
			cout<<"Enter Student Age : ";
			cin>>stu_age;
			cout<<"Enter Student Course : ";
			cin>>stu_course;
			
		}
		void getter(){
			
			cout<<stu_id<<endl;
			cout<<stu_name<<endl;
			cout<<stu_age<<endl;
			cout<<stu_course<<endl;
		}
	
};

int main(){
	
	B obj1,obj2;
	
	obj1.setter();
	obj1.getter();
	
	obj2.setter();
	obj2.getter();
	
	return 0;
}
