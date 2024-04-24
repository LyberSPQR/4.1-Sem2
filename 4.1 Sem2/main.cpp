#define _CRT_SECURE_NO_WARNINGS
#include "Word.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	Word word1;
	word1.fillWord();
	cout << "Ввод с консоли" << endl;
	word1.outputWord();
	

	Word word2("Apple");
	cout << "инициализации слова заданным словом-инициализатором" << endl;
	word2.outputWord();

	Word word3('a', 15);
	cout << "инициализации слова заданным количеством повторов заданного символа" << endl;
	word3.outputWord();

	Word word4("Hamster", 4, 1);
	cout << "инициализации слова частью заданного слова-инициализатора (первые n символов, последние n символов)" << endl;
	word4.outputWord();

	Word word8;
	word8.fillWord();
	word8.func();
	

	Word word9 = word2;
	cout << "Копирование из инициализации слова заданным словом-инициализатором" << endl;
	word9.outputWord();

	Word word11 = move(word4);
	cout << "Копирование из инициализации слова  частью заданного слова-инициализатора" << endl;
	word11.outputWord();

	return 0;
}