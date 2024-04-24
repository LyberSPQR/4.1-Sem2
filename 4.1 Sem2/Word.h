#pragma once

class Word
{
	char word[20] = "";
public:
	Word();
	Word(const char* initialWord);
	Word(char symbol, int repetitions);
	Word(const char* initialWord, int n, int choice);
	
	// Конструктор копирования
	Word(const Word& other);

	// Конструктор перемещения
	Word(Word&& other);
	void fillWord();
	void outputWord();
	void func();
};