#include <iostream>
#include <cstdlib>
using namespace std;

static int i=0;

// Board ko global bana rahe hain
char board[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

// Board print karne ka function
void printBoard() {
    if(i>=1)
        system("cls");
    cout << "\n";
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
    cout << "\n";
    i++;
}

// Win check karne ka function
bool checkWin() {

    // rows check
    for(int i=0;i<3;i++) {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return true;
    }

    // columns check
    for(int i=0;i<3;i++) {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return true;
    }

    // diagonals check
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return true;

    if(board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return true;

    return false;
}

int main() {

    int choice;
    char player = 'X';

    for(int turn=0; turn<9; turn++) {

        printBoard();

        cout << "Player " << player << " apni position choose kare (1-9): ";
        cin >> choice;

        int row = (choice-1)/3;
        int col = (choice-1)%3;

        // Agar position already filled hai
        if(board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Ye position already filled hai. Dobara try karo.\n";
            turn--;
            continue;
        }

        board[row][col] = player;

        // Win check
        if(checkWin()) {
            printBoard();
            cout << "Player " << player << " jeet gaya!\n";
            return 0;
        }

        // Player change
        player = (player == 'X') ? 'O' : 'X';
    }

    printBoard();
    cout << "Game draw ho gaya!\n";

    return 0;
}
