#define _CRT_SECURE_NO_WARNINGS
#include "Word.h"
#include <iomanip>
#include <iostream>
#include <cstring>


using namespace std;

Word::Word()
{
	for (int i = 0; i < 20; i++)
	{
		word[i] = '\0';
	}
}
Word::Word(const char* initialWord)
{
	strcpy(word, initialWord);
}
Word::Word(char symbol, int repetitions)
{
	for (int i = 0; i < repetitions; i++)
	{
		word[i] = symbol;
	}
	word[repetitions] = '\0';
}
Word::Word(const char* initialWord, int n, int choice)
{
	if (choice == 1)
	{
		for (int i = 0; i < n; i++)
		{
			word[i] = initialWord[i];
		}
	}
	if (choice == 2)
	{
		int lenght = strlen(initialWord);
		for (int i = 0; i < n; i++)
		{
			if (lenght > 0)
				word[i] = initialWord[lenght--];
		}
	}
}
// Конструктор копирования
Word::Word(const Word& other)
{
	strcpy(word, other.word);
}

// Конструктор перемещения
Word::Word(Word&& other) 
{
	strcpy(word, other.word);
	memset(other.word, 0, sizeof(other.word)); // Обнуляем данные в исходном объекте
}

void Word::fillWord()
{
	cout << "Enter Word:" << endl;
	cin.getline(word, 20);
}

void Word::outputWord()
{
	cout << "Word:" << endl;
	for (int i = 0; i < strlen(word); i++)
	{
		cout << word[i];
	}
	cout << endl;
}

void Word::func()
{
	int length = strlen(word);
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += int(word[i]);
	}
	cout << "Sum ASCII code: " << sum;
	Word word10;
	for (int i = 0; i < length; i++)
	{
		if ('a' <= word[i] && word[i] <= 'z')
		{
			word10.word[i] = word[i] - 32;
		}

		else if ('A' <= word[i] && word[i] <= 'Z')
		{
			word10.word[i] = word[i];
		}

	}
	
	word10.outputWord();
}