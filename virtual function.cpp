#include<iostream>
using namespace std;
class A{
	public:
		virtual void show()
		{
			cout<<"this is class A"<<
			endl;
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"this is class B"<<
			endl;
		}
};
int main()
{
	A*p;
	B obj;
	p=&obj;
	p->show();
	return 0;
}
