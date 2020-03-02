#include<stdexcept>
#include<iostream>
#include<string>
#include"QueueOfPatientProblem.h"
#include"CelebrationPartyProblem.h"

using std::to_string;

void Test_getMinimalTotalWaitingTime();
void Test_getPointsCover();

int main() {
	try
	{
		Test_getMinimalTotalWaitingTime();
		Test_getPointsCover();

		std::cout << "Success";
	}
	catch (std::logic_error e)
	{
		std::cout << "Error: " << e.what();
	}
}

void Test_getMinimalTotalWaitingTime()
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

void Test_getPointsCover()
{
	vector<int> numbers = { 5, 6, 3, 7, 10, 11, 12 };

	auto groups = getPointsCover(numbers);

	if (groups.size() != 3)
		throw std::logic_error("Expected 3, but groups equals to " + to_string(groups.size()));
}