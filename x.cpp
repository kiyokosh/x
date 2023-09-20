// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	
	vector<vector<int>> b(3, vector<int> (3, 0));
	cout << "- - - -"<<endl;
	for (int i = 0; i < 3; i++)
	{
	
		for (int a = 0; a < 3; a++)
		{
			cout << "|"<< b[i][a];
			
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


	    //cout << "   |   |  " << endl;
		//cout << "___|___|___" << endl;
		//cout << "   |   |  " << endl;
		//cout << "___|___|___" << endl;
		//cout << "   |   |  " << endl;
        //cout << "   |   |  " << endl;
	
}


