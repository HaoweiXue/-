#include <iostream>
#include "singlelist.h"
using namespace std;

int main()
{
	CSingleList<char> w;
	w.prepend('A');
	w.prepend('B');
	w.prepend('C');
	w.print();
	w.del();
	w.print();

	CSingleList<int> is;
	is.prepend(1);
	is.prepend(2);
	is.prepend(3);
	is.prepend(4);
	is.print();

	return 0;
}
