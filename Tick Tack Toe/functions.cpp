#include <iostream>
#include "ttt.h"

std::string board[9] = { " ", " ", " ",
                         " ", " ", " ", 
                         " ", " ", " " };
bool winner = false;
int x = 1;
int o = 1;
bool endgame = false;
char input;
int player1;
int player2;
int games = 1;
void intro() {
    std::cout << "Welcome to Tik Tak Toe\n";
    std::cout << "The board will look like this\n";
};

void boarddraw(){
    std::cout << "Game " << games << "\n";
    std::cout << "Score| Player 1: " << player1 << " || Player 2: " << player2 << "\n";
    std::cout << "===========================\n";
    std::cout << "     |     |      \n";
    std::cout << "  7  |  8  |  9   \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  4  |  5  |  6   \n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  1  |  2  |  3   \n";
    std::cout << "     |     |      \n";
    std::cout << "===========================\n";
}

void draw() {
    std::cout << "===========================\n";
    std::cout << "     |     |      \n";
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";
    std::cout << "===========================\n";
};

void win() {
    //x win conditions
    if (board[0] == "X" && board[1] == "X" && board[2] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }
    }else if (board[3] == "X" && board[4] == "X" && board[5] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }

    }else if (board[6] == "X" && board[7] == "X" && board[8] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }

    }else if (board[0] == "X" && board[3] == "X" && board[6] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }

    }else if (board[1] == "X" && board[4] == "X" && board[7] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }

    }else if (board[2] == "X" && board[5] == "X" && board[8] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }

    }else if (board[6] == "X" && board[4] == "X" && board[2] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }

    }else if (board[0] == "X" && board[4] == "X" && board[8] == "X") {

        std::cout << "X Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player1 = player1 + 1;
        }
        else {
            player2 = player2 + 1;
        }

    }
    // O Wins
    if (board[0] == "O" && board[1] == "O" && board[2] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }else if (board[3] == "O" && board[4] == "O" && board[5] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }else if (board[6] == "O" && board[7] == "O" && board[8] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }else if (board[0] == "O" && board[3] == "O" && board[6] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }else if (board[1] == "O" && board[4] == "O" && board[7] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }else if (board[2] == "O" && board[5] == "O" && board[8] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }else if (board[6] == "O" && board[4] == "O" && board[2] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }else if (board[0] == "O" && board[4] == "O" && board[8] == "O") {

        std::cout << "O Wins!\n";
        winner = true;
        if (games == 1 || games == 3) {
            player2 = player2 + 1;
        }
        else {
            player1 = player1 + 1;
        }

    }
}

void end() {
    if (player1 == 2) {

        std::cout << "Player 1 Wins!\n";
        playagain();

    }
    else if (player2 == 2) {

        std::cout << "Player 2 Wins!\n";
        playagain();

    }
    else {
        clearboard();
        intro();
        boarddraw();
        play();
    }
}

bool full() {
    bool filled = true;
    for (int i = 0; i < 9; i++) {
        if (board[i] == " ") {

            filled = false;

        }else if (winner) {
        
            filled = false;

        }

    }
    return filled;
}

void board_full() {
    if (full()) {

        std::cout << "The board is full! Its a Tie!\n";
        endgame = true;

    }
}

void x_move() {
    std::cout << "X make your move: ";
    std::cin >> x;
    if (x > 9 || x == 0) {
        std::cout << "\nInvalid Input, Choose Again!\n";
        x_move();
    }
    else if (x <= 3 && board[x + 5] != " ") {
        std::cout << "\nInvalid Input, Choose Again!\n";
        x_move();
    }
    else if (x <= 3 && board[x + 5] == " ") {
            board[x + 5] = "X";
            draw();
            win();
            full();
            board_full();
    }
    else if ((x >= 7 && x <= 9) && board[x - 7] != " ") {
        std::cout << "\nInvalid Input, Choose Again!\n";
        x_move();
    }
    else if ((x >= 7 && x <= 9) && board[x - 7] == " ") {
        board[x - 7] = "X";
        draw();
        win();
        full();
        board_full();
    }
    else if (board[x - 1] != " ") {
        std::cout << "\nInvalid Input, Choose Again!\n";
        x_move();
    }
    else if (board[x - 1] == " ") {
        board[x-1] = "X";
        draw();
        win();
        full();
        board_full();
    }
}

void o_move() {
    std::cout << "O make your move: ";
    std::cin >> o;
    if (o > 9 || o == 0) {
        std::cout << "\nInvalid Input, Choose Again!\n";
        o_move();
    }
    else if (o <= 3 && board[o + 5] != " ") {
        std::cout << "\nInvalid Input, Choose Again!\n";
        o_move();
    }
    else if (o <= 3 && board[o + 5] == " ") {
        board[o + 5] = "O";
        draw();
        win();
        full();
        board_full();
    }
    else if ((o >= 7 && o <= 9) && board[o - 7] != " ") {
        std::cout << "\nInvalid Input, Choose Again!\n";
        o_move();
    }
    else if ((o >= 7 && o <= 9) && board[o - 7] == " ") {
        board[o - 7] = "O";
        draw();
        win();
        full();
        board_full();
    }
    else if (board[o - 1] != " ") {
        std::cout << "\nInvalid Input, Choose Again!\n";
        o_move();
    }
    else if(board[o - 1] == " ") {
        board[o - 1] = "O";
        draw();
        win();
        full();
        board_full();
    }
}

void play() {
    while (winner == false) {

        //x move
        x_move();
        if (winner) {
            winner = 0;
            games = games + 1;
            end();
            break;
        }
        //ends game if board is full
        if (endgame) {
            endgame = 0;
            break;
        }
        //o move
        o_move();
        if (winner) {
            winner = 0;
            games = games + 1;
            end();
            break;
        }
        //ends game if board is full
        if (endgame) {
            endgame = 0;
            break;
        }
    }
}

void playagain() {
    int input;
    std::cout << "Would you like to play again? Type 1 for yes and 0 for no.\n";
    std::cin >> input;
    if (input == 1) {
        clearboard();
        intro();
        boarddraw();
        play();
    }
    else if (input == 0) {
 
    }
}

void clearboard() {
    for (int i = 0; i < 9; i++) {
        board[i] = " ";
    }
}