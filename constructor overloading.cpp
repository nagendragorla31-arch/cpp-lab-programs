#include<iostream>
using namespace std;
class student{
	public:
		student()
	{
		cout<<"default constructor"
		<<endl;
	}
	student(int age)
	{
		cout<<"age"<<age<<endl;
	}
	student(int age,int marks)
	{
		cout<<"age"<<age<<endl;
		cout<<"marks"<<marks<<
		endl;
	}
};
int main()
{
	student s1;
	student s2(20);
	student s3(20,90);
	return 0;
}
