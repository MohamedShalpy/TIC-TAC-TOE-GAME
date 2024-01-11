#include <iostream>

using namespace std;

char arr[3][3] = { '-', '-', '-', '-', '-', '-', '-', '-', '-' };
char player = 'X';

void Draw()
{

	cout << "\n\t\t\t Welcome Tic Tac Toe Game " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void Start()
{
	int F;
	cout << "Please Select a location : ";
	cin >> F;

	if (F == 1)
		arr[0][0] = player;
	else if (F == 2)
		arr[0][1] = player;
	else if (F == 3)
		arr[0][2] = player;
	else if (F == 4)
		arr[1][0] = player;
	else if (F == 5)
		arr[1][1] = player;
	else if (F == 6)
		arr[1][2] = player;
	else if (F == 7)
		arr[2][0] = player;
	else if (F == 8)
		arr[2][1] = player;
	else if (F == 9)
		arr[2][2] = player;
}
void Tog()
{
	if (player == 'X')
		player = 'O';
	else
		player = 'X';
}
char Win()
{
	//first player
	if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X')
		return 'X';
	if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X')
		return 'X';
	if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X')
		return 'X';

	if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X')
		return 'X';
	if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X')
		return 'X';
	if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X')
		return 'X';

	if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X')
		return 'X';
	if (arr[2][0] == 'X' && arr[1][1] == 'X' && arr[0][2] == 'X')
		return 'X ';

	//second player
	if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O')
		return 'O';
	if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O')
		return 'O';
	if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O')
		return 'O';

	if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O')
		return 'O';
	if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O')
		return 'O';
	if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O')
		return 'O';

	if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O')
		return 'O';
	if (arr[2][0] == 'O' && arr[1][1] == 'O' && arr[0][2] == 'O')
		return 'O';

	return '/';
}
int main()
{
	Draw();
	while (1)
	{
		Start();
		Draw();
		if (Win() == 'X')
		{
			cout << "X wins Congratulations!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O wins Congratulations!" << endl;
			break;
		}

		Tog();
	}
	if(Win()!= 'X' && Win() != 'O') {
	    cout << "Draw" << endl;
	}

	return 0;

}
