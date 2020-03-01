#include<vector>
#include<algorithm>

using std::vector;

struct Group
{
	int left;
	int rigth;
};

vector<Group> getPointsCover(vector<int> numbers)
{
	sort(numbers.begin(), numbers.end());

	vector<Group> groups;
	int left = 0;
	int size = numbers.size();
	
	while (left < size)
	{
		groups.push_back({ numbers[left], numbers[left] + 2 });
		left++;

		while (left < size && numbers[left] <= groups.back().rigth)
			left++;
	}

	return groups;
}
