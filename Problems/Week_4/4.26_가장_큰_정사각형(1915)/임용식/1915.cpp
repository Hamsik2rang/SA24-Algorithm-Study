#include <iostream>
#include <vector>

inline int Min(const int& a, const int& b, const int& c)
{
	return a < b ? a < c ? a : c : b < c ? b : c;
}

int Solution(std::vector<std::vector<int>>& square, const int& width, const int& height)
{
	int maxLength = 0;

	for (int row = 1; row <= height; row++)
	{
		for (int col = 1; col <= width; col++)
		{
			if (!square[row][col])
			{
				continue;
			}
			square[row][col] = Min(square[row - 1][col - 1], square[row - 1][col], square[row][col - 1]) + 1;

			maxLength < square[row][col] ? maxLength = square[row][col] : false;
		}
	}

	return maxLength * maxLength;
}

int main()
{
	int n, m;
	std::cin >> n >> m;

	std::vector<std::vector<int>> square(n + 1, std::vector<int>(m + 1));

	for (int row = 1; row <= n; row++)
	{
		std::string input = "";
		std::cin >> input;
		for (int col = 1; col <= m; col++)
		{
			square[row][col] = input[col - 1] - '0';
		}
	}

	std::cout << Solution(square, m, n) << std::endl;

	return 0;
}