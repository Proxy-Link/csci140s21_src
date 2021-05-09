#include <iostream>
#include <string>

using namespace std;

int main() {
	char input;
	const int SIZEROW = 7;
	const int SIZECOL = 10;
	char Board[SIZECOL][SIZEROW];
	int row, col;
	int x = 0, y = 0;
	char player = 'G';
	bool Gameover(true);

	for(row = 0;row < 7;row++){
		for(col = 0; col < 10; col++)
			Board[row][col] = '.';
	}

	Board[x][y] = player;

	for(row = 0;row < 7;row++){
		for(col = 0; col < 10; col++)
			cout<<Board[row][col];
		cout<<endl;
	}
	while(Gameover){
		cout<<"Enter U, D, L or R. Enter Q to quit"<<endl;
		cin>>input;
		switch(input){
		case 'U':
			Board[x][y] = '.';
			Board[x - 1][y] = player;
			break;
		case 'D':
			Board[x][y] = '.';
			Board[x + 1][y] = player;
			break;
		case 'L':
			Board[x][y] = '.';
			Board[x][y - 1] = player;
			break;
		case 'R':
			Board[x][y] = '.';
			Board[x][y + 1] = player;
			break;
		case 'Q':
			Gameover = false;
			break;
		default:
			cout<<"Invalid entry"<<endl;
		}
		
			for(row = 0;row < 7;row++){
			for(col = 0; col < 10; col++)
			cout<<Board[row][col];
			cout<<endl;
			}
	}



	return 0;
}