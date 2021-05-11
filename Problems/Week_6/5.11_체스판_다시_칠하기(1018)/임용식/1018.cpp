#include <iostream>
#include <vector>
#include <string>

int main()
{
	int width, height;
	int answer = 64;	// Maximum possible answer
	std::cin >> height >> width;
	std::vector<std::string> board(height, "");

	for (auto& elem : board)
	{
		std::cin >> elem;
	}

	for (int row = 0; row <= height - 8; row++)
	{
		for (int col = 0; col <= width - 8; col++)
		{
			int whiteStartAnswer = 0, blackStartAnswer = 0;
			// When upper-left of chess board is white.
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (((i + j) % 2 == 0 && board[row + i][col + j] == 'B') || ((i + j) % 2 && board[row + i][col + j] == 'W'))
					{
						whiteStartAnswer++;
					}
				}
			}
			// When upper-left of chess board is black.
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (((i + j) % 2 == 0 && board[row + i][col + j] == 'W') || ((i + j) % 2 && board[row + i][col + j] == 'B'))
					{
						blackStartAnswer++;
					}
				}
			}
			int minAnswer = whiteStartAnswer < blackStartAnswer ? whiteStartAnswer : blackStartAnswer;
			answer = answer < minAnswer ? answer : minAnswer;
		}
	}
	std::cout << answer;

	return 0;
}