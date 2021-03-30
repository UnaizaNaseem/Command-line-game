#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<time.h>
#include<cstdlib>
#include<iomanip>

using namespace std;
void hangman(int n)
{
	if (n == 1)
	{
		cout << "|======" << endl;
		cout << "|  |" << endl;
		cout << "|  O" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
	}
	else if (n == 2)
	{
		cout << "|======" << endl;
		cout << "|  |" << endl;
		cout << "|  O" << endl;
		cout << "|  |" << endl;
		cout << "|" << endl;
		cout << "|" << endl;
	}
	else if (n == 3)
	{
		cout << "|======" << endl;
		cout << "|  |" << endl;
		cout << "|  O" << endl;
		cout << "| -|-     " << endl;
		cout << "|" << endl;
		cout << "|" << endl;
	}
	else if (n == 4)
	{
		cout << "|======" << endl;
		cout << "|  |" << endl;
		cout << "|  O" << endl;
		cout << "| -|-     " << endl;
		cout << "|  |" << endl;
		cout << "|" << endl;
	}
	else if (n == 5)
	{
		cout << "|======" << endl;
		cout << "|  |" << endl;
		cout << "|  O" << endl;
		cout << "| -|-" << endl;
		cout << "| / / " << endl;
		cout << "| " << endl;

		cout << "OH MAN! You lost all your lives....";
	}
}
int main()
{
	string f_player, s_player,w,hint,guess;
	char choice;
	int wrong_counter = 0;


	cout << "\t\tWelcome to Hangman.\n";
	cout << "Enter name of first player:";
	cin >> f_player;
	cout << "Enter name of second player:";
	cin >> s_player;

	cout <<endl<< f_player << " enter the word you would like " << s_player << " to guess:";
	cin >> w;
	cout << "Do you want to display a hint?(Y/N)";
	cin >> choice;

	if (choice == 'y' || choice == 'Y')
	{
		cout << "\nWhat is the hint?";
		cin.ignore();
		getline(cin, hint);
	}
	else;

	system("pause");
	system("cls");
	

	cout <<endl<< s_player << " You have five chances to guess the word.\n\n";
	if (choice == 'y' || choice == 'Y')
	{
		cout <<"HINT: " <<hint << endl << endl;;
	}
	else;

	for (int i = 1; i < 6; i++)
	{

		cout << "\nChance number " << i << ":";
		cin >> guess;
		if (guess == w)
		{
			cout << "\nCongatulations!!!! You guessed correctly.\n";
			break;
		}
		else
		{
			cout << "\nWrong!!!. Try again.\n";
			wrong_counter += 1;
			hangman(wrong_counter);
		}
		
	}


	cout << endl;
	return 0;
}
