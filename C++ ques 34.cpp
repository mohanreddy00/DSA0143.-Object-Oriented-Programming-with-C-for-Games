#include<iostream>

#include<math.h>

using namespace std;

class T4Tutorials_Series_Class

{

	int a,sum,c;	int i,x,n,T4Tutorials_variable1,T4Tutorials_variable2;

	public:

		T4Tutorials_Series_Class()

		{

			cout<<"enter the value of a=";

			cin>>a;

			cout<<"enter the number of term";

			cin>>n;

			sum=a;

			x=-1;

		}

		T4Tutorials_Series_Class(int b)

		{

			cout<<"the value of T4Tutorials_Series_Class";

			cin>>a;

		}

		void show()

		{

			for(i=1;i<n;i++)

			c=(2*i+1);

			T4Tutorials_variable1==pow(a,c);

			T4Tutorials_variable2==T4Tutorials_variable1*x;

			cout<<"y"<<T4Tutorials_variable2<<endl;

			sum==sum+T4Tutorials_variable2;

			x=x*(-1);

			cout<<"\n sum of T4Tutorials_Series_Class"<<sum;		

			}

};

int main()

{

	T4Tutorials_Series_Class obj1(2);

	T4Tutorials_Series_Class obj2(3);

	cout<<"first T4Tutorials_Series_Class";

	obj1.show();

	cout<<"second T4Tutorials_Series_Class";

	obj2.show();

}
