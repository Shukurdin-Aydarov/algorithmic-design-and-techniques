#include<vector>
#include <algorithm>

using std::vector;

struct Patient
{
	int number;
	int treatmentTime;

	bool operator < (const Patient& other) const
	{
		return (treatmentTime < other.treatmentTime);
	}

	bool operator > (const Patient& other) const
	{
		return (treatmentTime > other.treatmentTime);
	}
};

int minimizeTotalWaitingTime(vector<Patient> patients)
{
	sort(patients.begin(), patients.end());

	int totalTime = 0;
	int size = patients.size();

	for (int i = 1; i < size; i++)
		totalTime += patients[i].treatmentTime;

	return totalTime;
}

