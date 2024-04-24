#pragma once

class Word
{
	char word[20] = "";
public:
	Word();
	Word(const char* initialWord);
	Word(char symbol, int repetitions);
	Word(const char* initialWord, int n, int choice);
	
	// ����������� �����������
	Word(const Word& other);

	// ����������� �����������
	Word(Word&& other);
	void fillWord();
	void outputWord();
	void func();
};