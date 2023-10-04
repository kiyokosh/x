#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<char>>& b)
{
	cout << "- - - -" << endl;
	for (int i = 0; i < 3; i++)
	{

		for (int a = 0; a < 3; a++)
		{
			cout << "|";
			if (b[i][a] == 0) cout << ' ';
			else cout << b[i][a];

		}
		cout << "|";
		cout << endl;

		for (int a = 0; a < 3; a++)
		{

			cout << "- ";

		}
		cout << "- ";
		cout << endl;
	}

}


void input(vector<vector<char>>& b, int& a)
{
	int x, y;
	cin >> x >> y;

	if (x > 0 && x<4 &&
		4>y && y > 0 &&
		b[x - 1][y - 1] == 0)
	{
		if (a == 1)
		{

			b[x - 1][y - 1] = 'X';
			a = 2;

		}
		else
		{

			b[x - 1][y - 1] = 'O';
			a = 1;

		}
	}
	
}

int main()
{

	vector<vector<char>> b(3, vector<char>(3, 0));
	int a;
	cin >> a;
	while (1)
	{
		print(b);
		input(b, a);

		for (int i = 0; i < 3; i++)
		{
			if (b[i][0] != 0 && b[i][0] == b[i][1] && b[i][1] == b[i][2])
			{
				cout << "WIN"<<endl;
			}
			if (b[0][i] !=0 && b[0][i] == b[1][i] && b[1][i] == b[2][i])
			{
				cout << "WIN"<<endl;
			}

		}
	}
}



	/*if ([i][0] == [i][1]) == [i][2]
		[0][i] == [1][i] == [2][i]*/
	/*if (q == 1) q = 2
	else q = 1*/
	//cout << "   |   |  " << endl;
	//cout << "___|___|___" << endl;
	//cout << "   |   |  " << endl;
	//cout << "___|___|___" << endl;
	//cout << "   |   |  " << endl;
	//cout << "   |   |  " << endl;

