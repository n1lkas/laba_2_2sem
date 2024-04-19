#include <iostream>
using namespace std;
int main() {

	int* var = new int(2);
	*var *= 2;
	cout << *var;
	return 0;

}