#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void board(char arr_val[3][3])
{
	cout << "-------------\n"; 
    for (int i = 0; i < 3; i++) { 
        cout << "| "; 
        for (int j = 0; j < 3; j++) { 
            cout << arr_val[i][j] << " | "; 
        } 
        cout << "\n-------------\n"; 
    } 
	return;
}

void checkwin(char arr[3][3], int *winb)
{
	if ((arr[0][0] == 'x' && arr[0][1] == 'x' && arr[0][2] == 'x') || (arr[1][0] == 'x' && arr[1][1] == 'x' && arr[1][2] == 'x') || (arr[2][0] == 'x' && arr[2][1] == 'x' && arr[2][2] == 'x') || (arr[0][0] == 'x' && arr[1][0] == 'x' && arr[2][0] == 'x')
	   || (arr[0][1] == 'x' && arr[1][1] == 'x' && arr[2][1] == 'x') || (arr[0][2] == 'x' && arr[1][2] == 'x' && arr[2][2] == 'x') || (arr[0][0] == 'x' && arr[1][1] == 'x' && arr[2][2] == 'x') || (arr[0][2] == 'x' && arr[1][1] == 'x' && arr[2][0] == 'x'))
	{
		cout << "\nFirst player won\n";
		*winb = 1;
	}
	else if ((arr[0][0] == '0' && arr[0][1] == '0' && arr[0][2] == '0') || (arr[1][0] == '0' && arr[1][1] == '0' && arr[1][2] == '0') || (arr[2][0] == '0' && arr[2][1] == '0' && arr[2][2] == '0') || (arr[0][0] == '0' && arr[1][0] == '0' && arr[2][0] == '0')
	   || (arr[0][1] == '0' && arr[1][1] == '0' && arr[2][1] == '0') || (arr[0][2] == '0' && arr[1][2] == '0' && arr[2][2] == '0') || (arr[0][0] == '0' && arr[1][1] == '0' && arr[2][2] == '0') || (arr[0][2] == '0' && arr[1][1] == '0' && arr[2][0] == '0'))
	{
		cout << "\nSecond player won\n";
		*winb = 1;
	}
	else if (arr[0][0] != ' ' && arr[0][1] != ' ' && arr[0][2] != ' ' && arr[1][0] != ' ' && arr[1][1] != ' ' && arr[1][2] != ' ' && arr[2][0] != ' ' && arr[2][1] != ' ' && arr[2][2] != ' ')
	{
		cout << "\nit's a tie\n";
		*winb = 1;
	}
}

int main() {
	int win_bol = 0;
	int player1 = 0;
	int player2 = 0;
	int player_tr = 1;
	int st = 0;
	char map[3][3] = { { '1', '2', '3' }, 
                         { '4', '5', '6' }, 
                         { '7', '8', '9' } };
	cout << "---------------Tic Tac Toe------------\n";
	cout << "Number MAP\n";
	board(map);
	cout << "\n1. START GAME\n";
	//cout << "2. Start second\n";
	cout << "\nChoice : ";
	cin >> st;
	char arrb[3][3] = { { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' }, 
                         { ' ', ' ', ' ' } };
	
	board(arrb);

	while(!win_bol)
	{
		if(player_tr == 1)
		{
			cout << "\nPlayer 1 Enter Square Number : ";
			cin >> player1;
			switch (player1)
			{
			case 1:
				if(arrb[0][0] == ' ')
				{
					player_tr = 2;
					arrb[0][0] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;
			case 2:
				if(arrb[0][1] == ' ')
				{
					player_tr = 2;
					arrb[0][1] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 3:
				if(arrb[0][2] == ' ')
				{
					player_tr = 2;
					arrb[0][2] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 4:
				if(arrb[1][0] == ' ')
				{
					player_tr = 2;

					arrb[1][0] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 5:
				if(arrb[1][1] == ' ')
				{
					player_tr = 2;
					arrb[1][1] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 6:
				if(arrb[1][2] == ' ')
				{
					player_tr = 2;
					arrb[1][2] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 7:
				if(arrb[2][0] == ' ')
				{
					player_tr = 2;
					arrb[2][0] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 8:
				if(arrb[2][1] == ' ')
				{
					player_tr = 2;
					arrb[2][1] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 9:
				if(arrb[2][2] == ' ')
				{
					player_tr = 2;
					arrb[2][2] = 'x';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;
			
			default:
				break;
			}
		}
		
		else {

			cout << "\nPlayer 2 Enter Square Number : ";
			cin >> player2;
			switch (player2)
			{
			case 1:
				if(arrb[0][0] == ' ')
				{
					player_tr = 1;
					arrb[0][0] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;
			case 2:
				if(arrb[0][1] == ' ')
				{
					player_tr = 1;
					arrb[0][1] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 3:
				if(arrb[0][2] == ' ')
				{
					player_tr = 1;
					arrb[0][2] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 4:
				if(arrb[1][0] == ' ')
				{
					player_tr = 1;
					arrb[1][0] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 5:
				if(arrb[1][1] == ' ')
				{
					player_tr = 1;
					arrb[1][1] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 6:
				if(arrb[1][2] == ' ')
				{
					player_tr = 1;
					arrb[1][2] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 7:
				if(arrb[2][0] == ' ')
				{
					player_tr = 1;
					arrb[2][0] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 8:
				if(arrb[2][1] == ' ')
				{
					player_tr = 1;
					arrb[2][1] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;

			case 9:
				if(arrb[2][2] == ' ')
				{
					player_tr = 1;
					arrb[2][2] = '0';
					board(arrb);
					checkwin(arrb, &win_bol);
					
				}
				else{
					cout << "Already use !";
				}
				break;
			
			default:
				break;
			}

		}

		
	}

	return 0;
}