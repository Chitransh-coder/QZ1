#include <iostream>
using namespace std;

int main() {
	int age = 0;
	string gender = "";
	int ans = 0;
	cout << "Hello! Here is my first game of C++, which is KBC! Sorry I can't give you any type of rewards.\n";
	cout << "Enter your age:\n";
	cin >> age;
	cout << "\nWhat is your gender?\n";
	cin >> gender;
	cout << "So, you're a " << age << " years old " << gender << "\n";
	cout << "Ok, Let's start the game!\n";
	cout << "Here is your 1st Question\nWhat is the Rotational Speed of The Earth?";
	cout << "And your Options are:1) 30 m/s\t2) 45 m/s\t3) 10 m/s\t4) 50 m/s\nWrite your answer:\n";
	cin >> ans;
	if (ans != 1)
	{
		exit(0);
	}
	cout << "Correct Answer!\nWell done\nYour next Question is Coming up\nYour next question is:\n";
	cout << " What did Charles Babbage invent after which he was called the Father of the Computer?\n";
	cout << "And your Options are:\n1) Analytic Engine\t2) Difference Engine\t3) Calculator\t4) PC\nWrite your answer:\n";
	cin >> ans;
	if (ans != 1)
	{
		exit(0);
	}
	cout << "Correct Answer!\nWell done\nYour next Question is Coming up\nYour next question is:\n";
	cout << "What is the only Endocrine Gland which you can donate?\nAnd your Options are:\n1) Liver\t2) Adrenal\t3) Pituatory\t4) Testes\nWrite your answer:\n";
	cin >> ans;
	if (ans != 1)
	{
		exit(0);
	}
	cout << "Correct Answer!\nWell done\nYour next Question is Coming up\nYour next question is:\n";
	cout << "For how much time is human brain active after death?\nAnd your Options are:\n1) 16 Hrs.\t2) 14 Hrs.\t3) 10 Hrs.\t4) Remains inactive\nWrite your answer:\n";
	cin >> ans;
	if (ans != 1)
	{
		exit(0);
	}
	cout << "Correct Answer!\nWell done\nYour next Question is Coming up\nYour next question is:\n";
	cout << "What speed you should have to leave the gravitational pull of the Earth?\nAnd your Options are:\n1) 11.1 m/s\t2) 20 m/s\t3) 10 m/s\t4) 1m/s\nWrite your answer:\n";
	cin >> ans;
	if (ans != 1)
	{
		exit(0);
	}
	cout << "Correct Answer!\nWell done\nYou Completed the Game\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout << "Do you like this game?\nYes or no?\n";
	cin >> gender;
	exit(0);

}