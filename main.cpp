#include <iostream>
#include <cctype>
#include <string>

int main()
{
	int year = 0;
	char done;

	while(done != 'N' || done != 'n')
    {
        std::cout << "Enter a year so that i can see if it's a leap year: ";
        std::cin >> year;

        if (year % 4 == 0)
        {
            if (year % 100 != 0)
            {
                std::cout << year << " is a leap year!" << std::endl;
            }
            else if(year % 400 == 0)
            {
                std::cout << year << " is a leap year!" << std::endl;
            }
            else std::cout << year << " is not a leap year!" << std::endl;
        }
        else std::cout << year << " is not a leap year!" << std::endl;

        std::cout << "Wanna continue?(Y/N): ";
        std::cin >> done;

        //while(done != 'y' || done != 'Y' || done != 'n' || done != 'N')
       // {
            switch(done)
            {
            case 'n':
                std::cout << std::endl << "Thank you for your time! <3" << std::endl;
                return 0;
                break;
            case 'N':
                std::cout << std::endl << "Thank you for your time! <3" << std::endl;
                return 0;
                break;
            case 'y':
                continue;
                break;
            case 'Y':
                continue;
                break;
            default:
                std::cout << std::endl << "Error! Wrong character!\nPlease restart the program and try again. " << std::endl;
                return 0;
                break;
           // }
        }

        std::cout << std::endl;
    }
}
