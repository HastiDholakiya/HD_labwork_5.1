#include<iostream>
using namespace std;

class number
{
	public:
		int a,b,c,d,e;
		int T;
		
};

class total : public number
{
	public:
		calculate(int a,int b)
		{
			cout << "Emter 1st number : ";
			cin >> a;
			cout << "Emter 2nd number : ";
			cin >> b;
			
			T = a / b;
			
			cout << "Division : " << T << endl;
			
		}
		
		calculate(int a,int b,int c)
		{
			cout << "Emter 1st number : ";
			cin >> a;
			cout << "Emter 2nd number : ";
			cin >> b;
			cout << "Emter 3rd number : ";
			cin >> c;
			
			T = a - b - c;
			
			cout << "Substraction : " << T << endl;
			
		}
		
		calculate(int a,int b,int c,int d)
		{
			cout << "Emter 1st number : ";
			cin >> a;
			cout << "Emter 2nd number : ";
			cin >> b;
			cout << "Emter 3rd number : ";
			cin >> c;
			cout << "Emter 4th number : ";
			cin >> d;
			
			T = a * b * c * d;
			
			cout << "Multiplication : " << T << endl;
			
		}
		
		calculate(int a,int b,int c,int d,int e)
		{
			cout << "Emter 1st number : ";
			cin >> a;
			cout << "Emter 2nd number : ";
			cin >> b;
			cout << "Emter 3rd number : ";
			cin >> c;
			cout << "Emter 4th number : ";
			cin >> d;
			cout << "Emter 5th number : ";
			cin >> e;
			
			T = a + b + c + d + e;
			
			cout << "Addition : " << T << endl;
			
		}
};

int main()
{
	total p;
	
	p.calculate(50,2);
	p.calculate(20,5,2);
	p.calculate(2,4,10,1);
	p.calculate(2,5,10,6,7);
	
	return 0;
	
}
