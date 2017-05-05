#include <iostream>
//Chance Daily 5/4/2017 Assignment 
int main()
{
	int num[6] = { 23, 6, 47, 35, 2, 14 };

	for (int n = 0; n < 6; n++)//goes through each number in the array
	{
		if (num[n] % 2 == 1) //This if statement prints out numbers that have a modulus of 1 (odd numbers)
			std::cout << "Odd number in the array: " << num[n] << std::endl;
	}
}