#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool Logat() {
	string user, parola, un, pw;
	cout << "Username: "; cin >> user;
	cout << "Password: "; cin >> parola;

	ifstream read("c:\\" + user + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == user && pw == parola)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int choice;

	cout << "1: Register\n2: Login\nAlegerea: "; cin >> choice;

	if (choice == 1)
	{
		string user, parola;

		cout << "Select a username: "; cin >> user;
		cout << "Select a password: "; cin >> parola;

		ofstream file;
		file.open("c:\\" + user + ".txt");
		file << user << endl << parola;
		file.close();
		main();
	}
	else if (choice == 2)
	{
		bool z = Logat();

		if (!z)
		{
			cout << "Password or user incorrect!";
			system("PAUSE");
			main();
		}
		else
		{
			cout << "Correct!";
			system("PAUSE");
			return 0;
		}
	}
	else
	{
		cout << "Incorrect option! Choose again!\n";
		main();
	}
}