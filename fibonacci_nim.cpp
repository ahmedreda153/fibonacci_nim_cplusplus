// Fibonacci Nim game
// each player pick number of coins which is from 1 to at most twice the previous move
// the number of coins that picked by the players must be removed from all coins and the player who pick the last coin be the winner
// Author: Ahmed Reda Elsayed
// Date : 29 - 02 - 2022

#include<iostream>
using namespace std;

int coins, player1;
float player2;

void coins_input() // input the number of coins to start play
{
	cout << "what is the number of coins: ";
	cin >> coins;

	player2 = (coins - 1) / 2.0; // good operation to connect between the main range during play and range of the first pick

}

void player1_input() // player1 pick from coins
{
	cout << "range from 1 to " << player2 * 2 << "\nplayer1: ";
	cin >> player1;
	cout << "**********" << endl;

	while (player1 < 0 || player1 > player2 * 2 || player1 > coins) // defense as if player choose wrong

	{

		cout << "wrong input" << "\ncoins is " << coins << "\nrange from 1 to " << player2 * 2 << "\nplayer1: ";
		cin >> player1;
		cout << "**********" << endl;

	}
	coins -= player1; // decrese all coins by number of coins that picked by player1
}

void player2_input() // player2 pick from coins
{
	cout << "range from 1 to " << player1 * 2 << "\nplayer2: ";
	cin >> player2;
	cout << "**********" << endl;

	while (player2 < 0 || player2 > player1 * 2 || player2 > coins) // defense as if player choose wrong

	{

		cout << "wrong input" << "\ncoins is " << coins << "\nrange from 1 to " << player1 * 2 << "\nplayer2: ";
		cin >> player2;
		cout << "**********" << endl;

	}
	coins = coins - player2; // decrese all coins by number of coins that picked by player2
}



int main() // main game function
{
	coins_input();

	while (coins > 0)

	{
		player1_input();
		

		if (coins == 0) // check if player1 win

		{

			cout << "player1 win" << endl;
			break;

		}
		cout << "coins is " << coins << endl;


		player2_input();
		

		if (coins == 0) // check if player2 win

		{

			cout << "player2 win" << endl;
			break;

		}
		cout << "coins is " << coins << endl;

	}

}