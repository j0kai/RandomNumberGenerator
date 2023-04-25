#include "RandomNumberGenerator.h"

int main()
{
	while (true)
	{
		RandomNumberGenerator rng;
		std::cout << "\nYour number is: " << rng.GenerateRandomInt(rng.GetUserInput()) << std::endl;
	}
}