#pragma once
#include"Library.h"
class String
{
private:
	char* m_stringRep;
	size_t lenght;
public:
	String(const char *str);
	String(size_t len, char s);
	String(size_t len);

	const char* getStrRep();
	char & getAt(size_t pos);//return by resference)

	String& AddCharAt(size_t pos, char c);

	String& DelCharAt(size_t pos); //удаление символа с позиции pos

	void operator()(const char *str);

	~String() { delete[] m_stringRep; }
};