#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct User{
	string name;
	int age;

};

int main() {
	User user;
	
	cout << "Enter user name: " << endl;
	getline(cin, user.name);

	cout << "Enter user age: " << endl;
	cin >> user.age;

	cout << "writing to disk" << endl;
	ofstream fout("some-exemple.txt");
	fout << "your name is: " << user.name << '\n' << "yor age is: " << user.age;
	fout.close();

	return 0;

};