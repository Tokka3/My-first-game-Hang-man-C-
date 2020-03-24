#include <iostream>
#include <Windows.h>
#include <string>


using namespace std;
int i = 5;
string player1;
string player2;
string word;
string guess;

void entName() {

	cout << "Player 1, enter your name." << endl;
	
	getline(cin, player1);
	cout << "Thank you " << player1 << "." << endl;
	Sleep(1000);
	system("cls");


	cout << "Player 2, enter your name." << endl;
	
	getline(cin, player2);
	cout << "Thank you " << player2 << "." << endl;
	Sleep(1000);
	system("cls");

}


void entWord() {

	cout << player1 << ", enter your word. (Make sure not to use caps!)" << endl;
	getline(cin, word);
	cout << "Clearing in 3" << endl;
	Sleep(1000);
	cout << "2" << endl;
	Sleep(1000);
	cout << "1" << endl;
	Sleep(1000);
	system("cls");


}


void playerguess(){



	cout << player2  << " guess the word. You have " << i << " tries left."  << endl;
	getline(cin, guess);


	if (guess == word)
	{

		cout << player2 << "wins!" << endl;
		Sleep(2000);
		exit(0);


	}

	else
	{

		cout << "Incorrect, try again." << endl;
		Sleep(1000);
	}

	system("cls");


}

int main()
{

	cout << "Welcome to Tokka3's hangman game." << endl;
	Sleep(1000);
	system("cls");

	entName();
	entWord();

	while (i  > 0)
		
	{

		playerguess();

		i--;

	}

	if (i == 0)
	{

		cout << player2 << " you have ran out of tries. Better luck next time!" << endl;
		cout << player1 << " wins!" << endl;
		cout << "Closing in 3" << endl;
		Sleep(1000);
		cout << "2" << endl;
		Sleep(1000);
		cout << "1" << endl;
		Sleep(1000);
		system("cls");


	}


}