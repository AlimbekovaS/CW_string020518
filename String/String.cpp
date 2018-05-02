#include "String.h"
#include"Library.h"
String::String(const char*str)
{
	lenght = strlen(str);
	this->m_stringRep = new char[lenght+1];
	
	for (int i = 0;i <lenght+1;i++)
		this->m_stringRep[i] = str[i];
}

String::String(size_t len, char s)
{
	lenght = len;
	this->m_stringRep = new char[lenght+1];
	for (int i = 0;i < len;i++)
		m_stringRep[i] = s;
	m_stringRep[len] = '\0';
}

String::String(size_t len)
{
	lenght = len;
	m_stringRep = new char[lenght+1];
	m_stringRep[len] = '\0';

}
const char*String::getStrRep()
{
	return m_stringRep;
}
char & String :: getAt(size_t pos)
{
	return m_stringRep[pos];
}

String & String::AddCharAt(size_t pos, char c)
{
	char*tmp;
	this->lenght += 2;
	tmp = new char[lenght];
	for (int i = 0;i < pos;i++)
	{
		tmp[i] = this->m_stringRep[i];
	}
	tmp[pos] = c;

	for (int i = pos + 1;i < lenght;i++)
	{
		tmp[i] = this->m_stringRep[i - 1];
	}
	this->m_stringRep = tmp;
	return *this;
}

String& String::DelCharAt(size_t pos)
{
	
	for (int i = pos; i < lenght;i++)
	{
		this->m_stringRep[i] = this->m_stringRep[i + 1];
	}
	lenght--;
	//this->m_stringRep
	return *this;

}

void String :: operator()(const char *str)
{
	for (int i = 0;i < strlen(str);i++)
		this->m_stringRep[i] = str[i];
}