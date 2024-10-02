#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name_instructor, your_name, a_food, a_number, an_adjective, a_color, an_animal;
	int number;
	cout << "Name of Instructor: ";
	cin>>name_instructor;

	cout << "your name: ";
	cin >> your_name;

	cout << "A food: ";
	cin >> a_food;

	cout << "A Number between 100 and 120: ";
	cin >> a_number;

	cout << "An adjective: ";
	cin >> an_adjective;

	cout << "A color: ";
	cin >> a_color;

	cout << "An animal: ";
	cin >> an_animal;

	cout << "\n\nDear " << name_instructor << ",\n\n";
	cout << "I am sorry that I am unable to turn in my homework at this time. First, I\n";
	cout << "ate a rotten " << a_food << ", which made me turn " << a_color << " and extremely ill. I came\n";
	cout << "down with a fever of " << a_number << ". Next, my " << an_adjective << " pet " << an_animal << " must have smelled the\n";
	cout << "remains of the " << a_food << " on my homework, because he ate it. I am currently\n"; 
	cout << "rewriting my homework and hope you will accept it here.\n\n";
	cout << "Sincerely,\n";
	cout << your_name << endl;

	return 0;

}