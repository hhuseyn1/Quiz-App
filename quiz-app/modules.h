#pragma once
struct Questions {
	int questionNumber;
	char* question;
	char* answer1 = nullptr;
	char* answer2 = nullptr;
	char* answer3 = nullptr;
	char* answer4 = nullptr;


};

struct Quiz {
	char* playerName;
	Questions** questions;
	int correct;
	int wrong;
	int remaining;

};