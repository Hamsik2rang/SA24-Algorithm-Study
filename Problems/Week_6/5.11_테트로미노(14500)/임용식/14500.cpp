#include <iostream>


int main()
{
    int n, m;
	int board[500][500];
    std::cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cin >> board[i][j];
        }
    }
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (j + 3 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i][j + 3];
                if (answer < temp) answer = temp;
            }
            if (i + 3 < n)
            {
                int temp = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 3][j];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < n && j + 2 < m)
            {
                int temp = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < n && j + 1 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i + 1][j] + board[i + 2][j];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < n && j + 2 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i + 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < n && j - 1 >= 0)
            {
                int temp = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 2][j - 1];
                if (answer < temp) answer = temp;
            }
            if (i - 1 >= 0 && j + 2 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i - 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < n && j + 1 < m)
            {
                int temp = board[i][j] + board[i + 1][j] + board[i + 2][j] + board[i + 2][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < n && j + 2 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i][j + 2] + board[i + 1][j];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < n && j + 1 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 2][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < n && j + 1 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i + 1][j] + board[i + 1][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i - 1 >= 0 && j + 2 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i - 1][j + 1] + board[i - 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < n && j + 1 < m)
            {
                int temp = board[i][j] + board[i + 1][j] + board[i + 1][j + 1] + board[i + 2][j + 1];
                if (answer < temp) answer = temp;
            }
            if (i + 1 < n && j + 2 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i + 1][j + 1] + board[i + 1][j + 2];
                if (answer < temp) answer = temp;
            }
            if (i + 2 < n && j - 1 >= 0)
            {
                int temp = board[i][j] + board[i + 1][j] + board[i + 1][j - 1] + board[i + 2][j - 1];
                if (answer < temp) answer = temp;
            }
            if (j + 2 < m)
            {
                int temp = board[i][j] + board[i][j + 1] + board[i][j + 2];
                if (i - 1 >= 0)
                {
                    int temp2 = temp + board[i - 1][j + 1];
                    if (answer < temp2) answer = temp2;
                }
                if (i + 1 < n)
                {
                    int temp2 = temp + board[i + 1][j + 1];
                    if (answer < temp2) answer = temp2;
                }
            }
            if (i + 2 < n)
            {
                int temp = board[i][j] + board[i + 1][j] + board[i + 2][j];
                if (j + 1 < m)
                {
                    int temp2 = temp + board[i + 1][j + 1];
                    if (answer < temp2) answer = temp2;
                }
                if (j - 1 >= 0)
                {
                    int temp2 = temp + board[i + 1][j - 1];
                    if (answer < temp2) answer = temp2;
                }
            }
        }
    }
    std::cout << answer << '\n';
    return 0;
}