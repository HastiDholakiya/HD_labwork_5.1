#include<iostream>
using namespace std;

class cricket
{
	public:
		int n;
		
		getTotalOvers()
		{
			cout << "Enter number of overs : ";
			cin >> n;
		}
};

class t20Match : public cricket
{
	public:
		
		getTotalOvers()
		{
			cout << "Total number of overs in T20 are : " << n << endl;
		}
};

class testMatch : public cricket
{
	public:
		
		getTotalOvers()
		{
			cout << "Total number of overs in Test are : " << n << endl;
		}
};

int main()
{
	t20Match A;
	testMatch B;
	
	A.cricket::getTotalOvers();
	A.getTotalOvers();
	
	B.cricket::getTotalOvers();
	B.getTotalOvers();
	
	return 0;
	
}
