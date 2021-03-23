#include <iostream>
#include <vector>
#include <stack>
#include <utility>


int main()
{
	int t = 0;
	int64_t result = 0;
	std::cin >> t;
	std::vector<int> v(t);
	std::stack<std::pair<int, int>> st;
	for (int i = 0; i < t; i++)
	{
		std::cin >> v[i];
	}

	st.push(std::make_pair(v[0], 1));

	for (int i = 1; i < t; i++)
	{
		int index = i + 1;
		while (!st.empty() && st.top().first <= v[i])
		{
			result += static_cast<int64_t>(index) - st.top().second - 1;
			st.pop();
		}
		st.push(std::make_pair(v[i], index));
	}

	while (!st.empty())
	{
		result += static_cast<int64_t>(t) - st.top().second;
		st.pop();
	}

	std::cout << result << std::endl;

	return 0;
}