#include<iostream> 
using namespace std;

int main()
{
	int k, i = 1, sum_k = 0, number;
	cout << " Enter the amount of integers to sum = "; cin >> k;
	if (k != 0)
	{
		do {
			cout << "Enter integer nr. " << i << ": ";
			cin >> number;
			sum_k += number; i++;
		} while (i <= k);
		cout << " The total sum of " << k << " integers is: " << sum_k;
	}
	else
	{
		cout << " Error! The total sum of 0 integers is cannot be calculated! ";
	}
	return 0;
}
