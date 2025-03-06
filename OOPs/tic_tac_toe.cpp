#include<iostream>
using namespace std;

class tic_tac_toe {
public:
    char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char user1, user2;

    void print_board() {
        cout<<endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                cout << board[i][j] << " | ";
            }
            cout << endl;
            if (i < 2) cout << "-------------" << endl;
        }
        cout<<endl;
    }

    void select_symbols() {
        cout << "User1: Select your symbol (X or O): ";
        cin >> user1;
        cout << "User2: Select your symbol (X or O): ";
        cin >> user2;
        cout << "Let's start the game!" << endl;
    }

    bool check_win(char player) {
        
        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) || 
                (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
                return true;
            }
        }

        
        if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
            (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
            return true;
        }

        return false;
    }

    bool place_marker(int pos, char player) {
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if (board[row][col] == ' ') {
            board[row][col] = player;
            return true;
        } else {
            cout << "Position already occupied!" << endl;
            return false;
        }

    }
};

int main() {
    tic_tac_toe game;
    game.select_symbols();
    int move;
    bool turn = true;
    int moves_count = 0;

    while (moves_count<9) {
        game.print_board();
        if (turn) {
            cout << "User1's turn: Enter position (1-9): ";
            cin >> move;
            game.place_marker(move, game.user1);
            if (game.check_win(game.user1)) {
                game.print_board();
                cout << "User1 wins!" << endl;
                break;
            }
        } else {
            cout << "User2's turn: Enter position (1-9): ";
            cin >> move;
            game.place_marker(move, game.user2);
            if (game.check_win(game.user2)) {
                game.print_board();
                cout << "User2 wins!" << endl;
                break;
            }
        }

        turn = !turn;  
        moves_count++;
        if (moves_count == 9) {
            game.print_board();
            cout << "It's a draw!" << endl;
            break;
        }
    }
    
   

    return 0;
}
