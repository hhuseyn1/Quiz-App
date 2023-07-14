#pragma once
void showQuestion(Questions q) {
	cout << "Question N: " << q.questionNumber << endl;
	cout << endl;
	cout << q.questionNumber << ") " << q.question << endl;
	cout << endl;
	cout << q.answer1 << endl;
	cout << q.answer2 << endl;
	cout << q.answer3 << endl;
	if (q.answer4 != nullptr)
		cout << q.answer4 << endl;

	cout << endl;
}

void changeQuestion(int& questionnum) {
	int c = 0;
	switch (c = _getch())
	{
	case KEY_LEFT:
		if (questionnum < 10)
			questionnum += 1;
		break;
	case KEY_RIGHT:
		if (questionnum > 0)
			questionnum -= 1;
		break;
	}
}

void showChosen(Questions q, char chosen) {
	cout << q.questionNumber << ") " << q.question << endl;
	cout << endl;
	switch (chosen)
	{
	case 'a':
		SetConsoleTextAttribute(h, 6);
		cout << q.answer1 << endl;
		SetConsoleTextAttribute(h, 15);
		cout << q.answer2 << endl;
		cout << q.answer3 << endl;
		if (q.answer4 != nullptr)
			cout << q.answer4 << endl;
		break;
	case 'b':
		cout << q.answer1 << endl;
		SetConsoleTextAttribute(h, 6);
		cout << q.answer2 << endl;
		SetConsoleTextAttribute(h, 15);
		cout << q.answer3 << endl;
		if (q.answer4 != nullptr)
			cout << q.answer4 << endl;
		break;
	case 'c':
		cout << q.answer1 << endl;
		cout << q.answer2 << endl;
		SetConsoleTextAttribute(h, 6);
		cout << q.answer3 << endl;
		SetConsoleTextAttribute(h, 15);
		if (q.answer4 != nullptr)
			cout << q.answer4 << endl;

		break;
	case 'd':
		cout << q.answer1 << endl;
		cout << q.answer2 << endl;
		cout << q.answer3 << endl;
		SetConsoleTextAttribute(h, 6);
		if (q.answer4 != nullptr)
			cout << q.answer4 << endl;
		SetConsoleTextAttribute(h, 15);

		break;

	default:
		break;
	}
	cout << endl;
}