#include <iostream>
#include <string>

using namespace std;


void show(string[10], string[10]);
void lookup(string[10], string[10], string);
void change(string[10], string[10], string, string);

int main()
{

	string names[10] = {"Cliff","Jimmy","Larson","Tim","David"};
	string number[10] = {"774-228-8476", "857-417-1289","413-588-1779","222-603-1287","987-232-2389"};

	cout << "Name" << "\t\t" << "Number" << endl;
	cout << string(30, '-') << endl;
	show (names, number);

	cout << endl << endl;


	int choice = 0;
	string name = "";

	cout << "Choose between the following options: " << endl
		<< "1) Search by name" << endl
		<< "2) List directory" << endl
		<< "3) Exit" << endl;

	cin >> choice;

	switch (choice)
	{
	case 1: cout << "Enter the contact name: "; cin >> name;
		lookup(names, number, name);
		break;
	case 2: cout << endl; show(names, number);
		break;
	case 3: exit(0);
		break;
	}

	
	cout <<"\n"<< string(50, '-') <<endl<< endl;

	//Extra Credit

	char answer = '0';
	string name2 = "";
	string newNumber = "";

	cout << " Would you like to change the number in your directory? (y or n)" << endl; 
	cin >> answer;

	if (answer == 'y')
	{
		cout << "Enter the person name and the new number you want to assign to them: " << endl;
		cin >> name2;
		cin >> newNumber;
		change(names, number, name2, newNumber);

	}
	else
		cout << "Goodbye!" << endl;

	while (1);
	return 0;
}


void show (string names[10],string number[10])
{
	for (int i = 0; i < 5; i++)
	{
		cout << names[i] << "\t\t" << number[i] << endl;
	}
	return;
}

void lookup(string names[10], string number[10], string name)
{
	for (int i = 0; i < 5; i++)
	{
		if (names[i] == name)
			cout << names[i] << "'s phone number is: " << number[i] << endl;
	}
	return;
}


void change(string names[10], string number[10], string name2, string newNumber)
{
	for (int i = 0; i < 5; i++) 
	{
		if (names[i] == name2)
		{
			number[i] = newNumber;
			cout << "Your new directory with the number you just changed is: " << endl << endl;
			show(names, number);
		}
	}
	return;
}
