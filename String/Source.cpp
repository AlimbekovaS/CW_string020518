#include"Library.h"
#include"String.h"
int main()
{
	String s("Hello");
	cout << s.getStrRep() << endl;
	String s1(5, 'o');

	s1.getAt(0) = 'z';
	cout << s1.getStrRep() << endl;

	s1.AddCharAt(2, 'X');
	cout << s1.getStrRep() << endl;

	s.DelCharAt(0);
	cout << s.getStrRep() << endl;
	s1("This");

	cout << s1.getStrRep() << endl;
	system("pause");
	return 0;
}