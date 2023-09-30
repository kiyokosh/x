#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>>& b)
{
	cout << "- - - -" << endl;
	for (int i = 0; i < 3; i++)
	{

		for (int a = 0; a < 3; a++)
		{
			cout << "|" << b[i][a];

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

int main()
{

	vector<vector<int>> b(3, vector<int>(3, 0));
	
	while (1)
	{
		
        int a;
		cin >> a;
		if (b[x][y] == 0)
		{
			 
		}
		print(b);
	}



	//cout << "   |   |  " << endl;
	//cout << "___|___|___" << endl;
	//cout << "   |   |  " << endl;
	//cout << "___|___|___" << endl;
	//cout << "   |   |  " << endl;
	//cout << "   |   |  " << endl;

}
