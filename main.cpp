#include <iostream>
#include <string>
#include "Hash_map.h"
#include "Pair.h"
using namespace std;

int main() {
	

	Hash_map<string, int> map(-1);
	
	
	string k = "k";
	string k1 = "k";
	string k2 = "k2";
	string k3 = "k3";
	string k4 = "k4";
	string k5 = "k5";
	string k6 = "k6";
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	int num4 = 4;
	int num5 = 5;
	int num6 = 6;
	try{
		map.put(k, num1);
	}
	catch (const string& err) {
		cout << k << " " << err << endl;
	}
	try {
		map.put(k1, num2);
	}
	catch (const string& err) {
		cout <<k1<<" "<< err << endl;
	}
	try {
		map.put(k2, num3);
	}
	catch (const string& err) {
		cout << k2 << " " << err << endl;
	}
	try {
		map.put(k3, num4);
	}
	catch (const string& err) {
		cout << k3 << " " << err << endl;
	}
	try {
		map.put(k4, num5);
	}
	catch (const string& err) {
		cout << k4 << " " << err << endl;
	}
	try {
		map.put(k5, num6);
	}
	catch (const string& err) {
		cout << k5 << " " << err << endl;
	}
		

		
	cout << map;
	try {

	cout<< map[k2];
	}
	catch (const string& err) {
		cout << err << endl;
	}

	Pair <int, int > p(1, 1);
	cout <<"\n" << p << endl;
	cin >> p;
	cout << p << endl;

	return 0;
}