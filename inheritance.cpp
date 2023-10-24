#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class person
{
	int age;
	string name;
public:
	int getage()
	{
		return age;
	}
	void setage(int i)
	{
		age = i;
	}
	string getname()
	{
		return name;
	}
	void setname(string nm)
	{
		name = nm;
	}
	person()
	{
		age = 0;
		name = '\0';
	}
};
class  baseBall_player  : public person
{
	int scores;
	int turn;
public:
	void setscores(int sc)
	{
		scores = sc;
	}
	int getscores()
	{
		return scores;
	}
	void setturn(int tr)
	{
		turn = tr;
	}
	int getturn()
	{
		return turn;
	}
	baseBall_player()
	{
		scores = 0;
		turn = 0;
	}

	void Input()
	{
		string name;
		int age;
		cout << "Enter the name of player:";
		cin >> name;
		setname(name);
		cout << "Enter the age of player:";
		cin >> age;
		setage(age);
		cout << "Enter turn of player:";
		cin >> turn;
		cout << "Enter the scores of player:";
		cin >> scores;
	}
};
int main()
{
	baseBall_player p1, p2;
	string name; int age, turn, scores;
	cout << "Enter the name of player:";
	cin >> name;
	cout << "Enter the age of player:";
	cin >> age;
	cout << "Enter turn of player:";
	cin >> turn;
	cout << "Enter the scores of player:";
	cin >> scores;
	p1.setname(name);
	p1.setscores(scores);
	p1.setturn(turn);
	p1.setage(age);
	cout << "Enter the Detail of Second Player" << endl;
	p2.Input();
	cout << "Name" << setw(20) << "Age" << setw(20) << "Turn" << setw(20) << "Scores" << endl;
	cout <<setw(20) << left <<p1.getname() << setw(20) << p1.getage() << setw(20) << p1.getturn() << setw(20) << p1.getscores()<< endl;
	cout << setw(20) << left << p2.getname() << setw(20) << p2.getage() << setw(20) << p2.getturn() << setw(20) << p2.getscores()<< endl;
	system("pause");
	return 0;
}