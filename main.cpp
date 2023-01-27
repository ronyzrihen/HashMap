#include <iostream>
#include <string>
#include "Hash_map.h"
#include "Pair.h"
using namespace std;

int main() {

	Hash_map<int, int> map (5);
	Pair<int,int> p(5, 5);
	int num1 = 5;
	int num2 = 5;
	map.put(num1, num2);
	map.print(cout);




	return 0;
}