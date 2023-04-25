#pragma once

#include <iostream>
#include <random>

class RandomNumberGenerator
{
public:
	RandomNumberGenerator();

	uint32_t GenerateRandomInt(const std::pair<uint32_t, uint32_t>& userInput);

	std::pair<uint32_t, uint32_t> GetUserInput() const { return m_UserInput; }
private:
	std::pair<uint32_t, uint32_t> m_UserInput;

};