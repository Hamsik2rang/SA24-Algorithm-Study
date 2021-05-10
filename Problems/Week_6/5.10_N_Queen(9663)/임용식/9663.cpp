#include <iostream>
#include <vector>

using namespace std;

uint16_t Abs(uint16_t left, uint16_t right)
{
	if (left >= right)
		return left - right;
	else
		return right - left;
}

bool Check(const vector<uint16_t>& position, int index)
{
	for (int i = 0; i < index; i++)
	{
		if (position[i] == position[index] || Abs(position[index], position[i]) == (index - i))
			return false;
	}
	return true;
}

void FindPosition(vector<uint16_t>& position, int index, uint64_t& count)
{
	if (index == position.size())
		count++;
	for (int i = 0; i < position.size(); i++)
	{
		position[index] = i;

		if (Check(position, index))
			FindPosition(position, index + 1, count);
	}
}

int main()
{
	int n;
	uint64_t count = 0;

	cin >> n;
	vector<uint16_t> position(n);

	FindPosition(position, 0, count);

	cout << count;

	return 0;
}
