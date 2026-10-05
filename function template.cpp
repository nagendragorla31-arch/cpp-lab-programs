#include<iostream>
using namespace std;
template<class T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	cout<<"integer addition"<<
	add(10,20)<<endl;
	cout<<"float addition"<<
	add(10.5,20.5)<<endl;
	return 0;
}
