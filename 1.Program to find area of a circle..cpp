#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int r;
	double pi;
	float area;
	cout<<"Enter radius : ";
	cin>>r;
	pi=M_PI;
	area=pi*(r*r);
	cout<<"The area of a Circle is : "<<endl<<area;
	return 0;
}