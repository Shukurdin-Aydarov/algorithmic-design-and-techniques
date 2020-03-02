#include<stdexcept>
#include<iostream>
#include<string>
#include"QueueOfPatientProblem.h"
#include"CelebrationPartyProblem.h"

using std::to_string;

void test_getMinimalTotalWaitingTime();
void test_getPointsCover();

int main() {
	try
	{
		test_getMinimalTotalWaitingTime();
		test_getPointsCover();

		std::cout << "Success";
	}
	catch (std::logic_error e)
	{
		std::cout << "Error: " << e.what();
	}
}

void test_getMinimalTotalWaitingTime()
{
	vector<Patient> patients = 
	{ 
		{ 1, 32 },
		{ 2, 23 },
		{ 3, 20 },
		{ 4, 21 },
		{ 5, 10 }
	};

	auto totalTime = minimizeTotalWaitingTime(patients);

	if (totalTime != 96)
		throw std::logic_error("Expected 96, but totalTime equals to " + to_string(totalTime));
}

void test_getPointsCover()
{
	vector<int> numbers = { 5, 6, 3, 7, 10, 11, 12 };

	auto groups = getPointsCover(numbers);

	if (groups.size() != 3)
		throw std::logic_error("Expected 3, but groups equals to " + to_string(groups.size()));
}