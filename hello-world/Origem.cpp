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
	fout << user.name << " " << user.age;
	fout.close();

	cout << "reading from disk" << endl;
	User user_from_written_file;
	ifstream fin("some-exemple.txt");
	fin >> user_from_written_file.name >> user_from_written_file.age;
	fin.close();

	cout << "showing on bash what was read" << endl;
	cout << user_from_written_file.name << '\n' << user_from_written_file.age << endl;
	return 0;

};