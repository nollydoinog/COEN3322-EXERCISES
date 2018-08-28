//nolly doinog
//BSCpE 2-1D
//exercise 3
//calcalute the force
#include <iostream>

using namespace std;

int main()
{

	float k=0.0000000667;
	float M1,M2,D,F,A,T_D,T_M;

	cout<<"MASS 1: ";
	cin>>M1;
	cout<<"MASS 2: ";
	cin>>M2;
	cout<<"Distance: ";
	cin>>D;
	cout<<"FORCE: "<<F;

		T_M=(M1*M2);
		T_D=(D*D);
		A=(T_M/T_D);
		F=(k*A);


    return 0;
}
