#include "RandomNumberGenerator.h"

RandomNumberGenerator::RandomNumberGenerator()
{
	std::cout << "\n///////////////////////////////////////////" << std::endl;
	std::cout << "//////// Random Number Generator //////////" << std::endl;
	std::cout << "///////////////////////////////////////////" << std::endl;

	uint32_t min, max;

	std::cout << "\nEnter the minimum number: " << std::endl;
	std::cin >> min;
	std::cout << "\nEnter the maximum number: " << std::endl;
	std::cin >> max;

	m_UserInput = { min, max };
}

uint32_t RandomNumberGenerator::GenerateRandomInt(const std::pair<uint32_t, uint32_t>& userInput)
{
	uint32_t min = userInput.first;
	uint32_t max = userInput.second;

	std::random_device rd;
	std::uniform_int_distribution<uint32_t> dist{ min, max };

	return dist(rd);
}