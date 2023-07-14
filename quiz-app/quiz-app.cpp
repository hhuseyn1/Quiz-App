#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#define KEY_LEFT '.'
#define KEY_RIGHT ','
using namespace std;
int questionNum = 1, totalQuestion = 10;
int a = 0;
bool q1 = false, q2 = false, q3 = false, q4 = false, q5 = false, q6 = false, q7 = false, q8 = false, q9 = false, q10 = false;

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
#include "modules.h"
#include "questions.h"
#include "functions.h"


int main()
{
	srand(time(0));
	SetConsoleTextAttribute(h, 10);
	cout << R"(
  ______             __                   ______                                    
 /      \           |  \                 /      \                                   
|  $$$$$$\ __    __  \$$ ________       |  $$$$$$\  ______   ______ ____    ______  
| $$  | $$|  \  |  \|  \|        \      | $$ __\$$ |      \ |      \    \  /      \ 
| $$  | $$| $$  | $$| $$ \$$$$$$$$      | $$|    \  \$$$$$$\| $$$$$$\$$$$\|  $$$$$$\
| $$ _| $$| $$  | $$| $$  /    $$       | $$ \$$$$ /      $$| $$ | $$ | $$| $$    $$
| $$/ \ $$| $$__/ $$| $$ /  $$$$_       | $$__| $$|  $$$$$$$| $$ | $$ | $$| $$$$$$$$
 \$$ $$ $$ \$$    $$| $$|  $$    \       \$$    $$ \$$    $$| $$ | $$ | $$ \$$     \
  \$$$$$$\  \$$$$$$  \$$ \$$$$$$$$        \$$$$$$   \$$$$$$$ \$$  \$$  \$$  \$$$$$$$
      \$$$                                                                          
                                                                                    
                                                                                    
)" << endl;
	SetConsoleTextAttribute(h, 15);
	Sleep(1500);
	system("cls");
	Quiz* quiz = new Quiz;
	Quiz* quizBot = new Quiz;
	quiz->questions = arrayOfQuestions();
	quizBot->questions = arrayOfQuestions();
	quiz->correct = 0;
	quizBot->correct = 0;
	quiz->wrong = 0;
	quizBot->wrong = 0;
	quiz->remaining = totalQuestion;
	quizBot->remaining = totalQuestion;
	quiz->playerName = new char[30] {};
	quizBot->playerName = new char[30] {"Bot"};
	cout << "Enter your name: " << endl;
	cin.getline(quiz->playerName, 30);
	char c;
	SetConsoleTextAttribute(h, 8);
	cout << R"(
   ____    U  ___ u   U  ___ u  ____          _       _   _    ____   _  __    
U /"___|u   \/"_ \/    \/"_ \/ |  _"\        |"|   U |"|u| |U /"___| |"|/ /    
\| |  _ /   | | | |    | | | |/| | | |     U | | u  \| |\| |\| | u   | ' /     
 | |_| |.-,_| |_| |.-,_| |_| |U| |_| |\     \| |/__  | |_| | | |/__U/| . \\u   
  \____| \_)-\___/  \_)-\___/  |____/ u      |_____|<<\___/   \____| |_|\_\    
  _)(|_       \\         \\     |||_         //  \\(__) )(   _// \\,-,>> \\,-. 
 (__)__)     (__)       (__)   (__)_)       (_")("_)   (__) (__)(__)\.)   (_/  
)" << endl;
	SetConsoleTextAttribute(h, 15);
	Sleep(1500);
	system("cls");
	while (true)
	{
		if (quiz->remaining == 0)
			break;
		cout << "Correct: " << quiz->correct << " Wrong: " << quiz->wrong;
		cout << setw(24) << "Remaining: " << quiz->remaining << endl;
		showQuestion(quiz->questions[a][0]);
		cout << "\t\t<                 >" << endl;
		cout << "Enter your answer: " << endl;
		switch (a + 1)
		{
		case 1:
		{
			if (!q1) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q1 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q1 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q1 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else {
				a = 1;
			}

		}
		break;
		case 2:
			if (!q2) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q2 = true;
					break;

				case 'b':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q2 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					showChosen(quiz->questions[a][0], 'c');
					quiz->remaining--;
					a += 1;
					q2 = true;
					break;
				case 'd':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'd');
					a += 1;
					q2 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else {
				a = 2;
			}
			break;
		case 3:
			if (!q3) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q3 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q3 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q3 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else {
				a = 3;
			}
			break;
		case 4:
			if (!q4) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q4 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q4 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q4 = true;
					break;
				case 'd':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'd');
					a += 1;
					q4 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else {
				a = 4;
			}
			break;
		case 5:
			if (!q5) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q5 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q5 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q5 = true;
					break;
				case 'd':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'd');
					a += 1;
					q5 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else a = 5;
			break;
		case 6:
			if (!q6) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q6 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					showChosen(quiz->questions[a][0], 'b');
					quiz->remaining--;
					a += 1;
					q6 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q6 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else a = 6;
			break;
		case 7:
			if (!q7) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q7 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q7 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q7 = true;
					break;
				case 'd':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'd');
					a += 1;
					q7 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else a = 7;
			break;
		case 8:
			if (!q8) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					quiz->remaining--;
					q8 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q8 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q8 = true;
					break;
				case 'd':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'd');
					a += 1;
					q8 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else a = 8;
			break;
		case 9:
			if (!q9) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q9 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					a += 1;
					q9 = true;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					showChosen(quiz->questions[a][0], 'c');
					quiz->remaining--;
					q9 = true;
					a += 1;
					break;
				case 'd':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'd');
					a += 1;
					q9 = true;
					break;
				case KEY_LEFT:
					if (a < 10)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else a = 9;
			break;
		case 10:
			if (!q10) {
				switch (c = _getch())
				{
				case 'a':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'a');
					a += 1;
					q10 = true;
					break;
				case 'b':
					SetConsoleTextAttribute(h, 10);
					cout << "Your answer is correct !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->correct++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'b');
					q10 = true;
					a += 1;
					break;
				case 'c':
					SetConsoleTextAttribute(h, 12);
					cout << "Your answer is wrong !!!" << endl;
					SetConsoleTextAttribute(h, 15);
					quiz->wrong++;
					quiz->remaining--;
					showChosen(quiz->questions[a][0], 'c');
					a += 1;
					q10 = true;
					break;
				case KEY_LEFT:
					if (a < 9)
						a += 1;
					break;
				case KEY_RIGHT:
					if (a > 0)
						a -= 1;
					break;
				default:
					break;
				}
			}
			else a -= 1;
			break;
			break;

		default:
			break;
		}
		Sleep(1000);
		system("cls");
		cout << endl;

	}
	SetConsoleTextAttribute(h, 4);
	cout << quiz->playerName << "'s correct answers: " << quiz->correct << endl;
	cout << quiz->playerName << "'s wrong answers: " << quiz->wrong << endl;
	cout << "Total percentage: " << quiz->correct * 10 << " %" << endl;
	Sleep(1700);
	system("cls");
	SetConsoleTextAttribute(h, 15);
	char bot;
	int min = 97, max = 100;
	for (size_t i = 0; i < totalQuestion; i++)
	{
		bot = min + rand() % (max - min + 1);
		switch (i)
		{
		case 0:
			if (bot == 'b')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 1:
			if (bot == 'c')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 2:
			if (bot == 'a')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 3:
			if (bot == 'b')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 4:
			if (bot == 'b')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 5:
			if (bot == 'c')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 6:
			if (bot == 'd')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 7:
			if (bot == 'a')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
			if (bot == 'b')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 8:
			if (bot == 'b')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;
		case 9:
			if (bot == 'b')
				quizBot->correct++;
			else
				quizBot->wrong++;
			break;

		default:
			break;
		}
	}
	SetConsoleTextAttribute(h, 4);
	cout << "Bot's turn" << endl;
	cout << quizBot->playerName << "'s correct answers: " << quizBot->correct << endl;
	cout << quizBot->playerName << "'s wrong answers: " << quizBot->wrong << endl;
	cout << "Total percentage: " << quizBot->correct * 10 << " %" << endl;
	Sleep(2500);
	system("cls");
	SetConsoleTextAttribute(h, 15);
	if (quiz->correct > quizBot->correct) {
		cout << quiz->playerName << " is winner" << endl;
	}
	else if (quiz->correct < quizBot->correct)
		cout << quizBot->playerName << " is winner" << endl;
	else
		cout << "No one won" << endl;

	SetConsoleTextAttribute(h, 6);
	cout << R"(

 ____                                        ___                          __                 __     
/\  _`\                                    /'___\ __          __         /\ \               /\ \    
\ \ \L\_\     __      ___ ___      __     /\ \__//\_\    ___ /\_\    ____\ \ \___      __   \_\ \   
 \ \ \L_L   /'__`\  /' __` __`\  /'__`\   \ \ ,__\/\ \ /' _ `\/\ \  /',__\\ \  _ `\  /'__`\ /'_` \  
  \ \ \/, \/\ \L\.\_/\ \/\ \/\ \/\  __/    \ \ \_/\ \ \/\ \/\ \ \ \/\__, `\\ \ \ \ \/\  __//\ \L\ \ 
   \ \____/\ \__/.\_\ \_\ \_\ \_\ \____\    \ \_\  \ \_\ \_\ \_\ \_\/\____/ \ \_\ \_\ \____\ \___,_\
    \/___/  \/__/\/_/\/_/\/_/\/_/\/____/     \/_/   \/_/\/_/\/_/\/_/\/___/   \/_/\/_/\/____/\/__,_ /
                                                                                                    
                                                                                                    

                                                                                                
                                                                                                

)" << endl;

	SetConsoleTextAttribute(h, 15);

}

