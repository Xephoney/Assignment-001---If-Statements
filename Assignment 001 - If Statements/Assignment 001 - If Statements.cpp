#include <iostream>
#include <string>

int main()
{
	int age; 

	std::cout << "What is your age? \n";
	std::cin >> age;

	if (age >= 20)
	{
		std::cout << "Your are considered by my computational intelligence to be an Adult ";
	}
	if(age < 20)
	{
		 std::cout << "So you are " << age << " years old. Really?? Is that your age? Well, You are a Teenager";
	}
}