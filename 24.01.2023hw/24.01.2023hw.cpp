#include <iostream>
using namespace std;

#include "String.h"
#include "BitString.h"
int main() {
	/*String s{"qwert"};
	s.Show();
	String s1{"qwerty"};
	s1.Show();
	String s2 = s;
	s2.Show();
	cout << s1 == s2;;*/
	BitString bs{"1010100101012"};
	BitString bs1{"101010010101"};
	bs.Show();
	bs1.Show();

}