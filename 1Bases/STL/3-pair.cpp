#include <iostream>
#include <vector>

using namespace std;

/**
 * Output:
 * Testing 123
* Es posible editar pares después de declararlos 123
 */
int main() {
	pair<string, int> pair1 = make_pair("Testing", 123);
	cout << pair1.first << " " << pair1.second << endl;

	pair1.first = "It is possible to edit pairs after declaring them";
	cout << pair1.first << " " << pair1.second << endl;

	pair<string, string> pair2("Testing", "curly braces");
	cout << pair2.first << " " << pair2.second << endl;
}
