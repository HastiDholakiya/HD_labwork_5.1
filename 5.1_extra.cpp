#include<iostream>
using namespace std;

int main()
{
	int n;
	int temp;
	int sum_of_all_digit=0;
	int swap=0;
	int a;
	
	cout << "Enter any number : ";
	cin >> n;
	
	temp = n;
	
	while(n > 0)
	{
		sum_of_all_digit = sum_of_all_digit + (n % 10);
		n = n / 10;
		
	}
	
	a = sum_of_all_digit;
	
	while(sum_of_all_digit > 0)
	{
		swap = (swap * 10) + (sum_of_all_digit % 10);
		sum_of_all_digit = sum_of_all_digit / 10;
	}
	
	if((a * swap) == temp)
	{
		cout << "This is magic number...";
	}
	else
	{
		cout << "This is't magic number...";
	}
	
	return 0;
}
