#include <iostream>

int main()
{
	int year = 0;
	char done = '+';

	while (done != 'N' || done != 'n')
	{
		std::cout << "Enter a year so that i can see if it's a leap year: ";
		std::cin >> year;

		if (year < 0)
		{
			while (year < 0)
			{
				std::cout << "\nError!\nPleas enter a year higher than 0: ";
				std::cin >> year;
			}
		}

		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				std::cout << "\n" << year << " is a leap year!\n" ;
			}

			else if (year % 400 == 0)
			{
				std::cout << "\n" << year << " is a leap year!\n";
			}
			else std::cout << "\n" << year << " is not a leap year!\n";
		}
		else std::cout << "\n" << year << " is not a leap year!\n";

		std::cout << "\nWanna continue?(Y/N): ";
		std::cin >> done;
		std::cout << "\n";

		if (done == 'y' || done == 'Y')
			continue;

		else if (done == 'n' || done == 'N')
		{
			std::cout << "Thank you for playing!\n\n";
			system("pause");
			return 0;
		}

		else
		{
			std::cout << "Error!\nWrong input\nPleas restart the program and try again!\n\n";
			system("pause");
			return 0;
		}

		std::cout << "\n";
	}

	std::cin.get();
}