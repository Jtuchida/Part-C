// Joseph Uchida

#include <iostream>
using namespace std;

int main()
{
	cout << "Here is array A\n";
	int test[3][4] = { {1,1,1,1}, {1,1,1,1},{1,1,1,1} };
	for (int i = 0; i < 3; i++) {

		for (int j = 0; j < 4; j++) {
			cout << "   " << test[i][j] ;
		}
		cout << endl;
	}

	cout << "Here is array B\n";
	int test2[3][4] = { {2,2,2,2}, {2,2,2,2}, {2,2,2,2} };
	for (int a = 0; a < 3; a++) {

		for (int b = 0; b < 4; b++) {
			cout << "   " << test2[a][b];
		}
		cout << endl;
	}

	cout << "Here is array C\n";
	int test3[3][4] = { {3,3,3,3}, {3,3,3,3}, {3,3,3,3} };
	for (int c = 0; c < 3; c++) {

		for (int d = 0; d < 4; d++) {
			cout << "   " << test3
				[c][d];
		}
		cout << endl;

	}
	getchar();
	system("CLS");

}