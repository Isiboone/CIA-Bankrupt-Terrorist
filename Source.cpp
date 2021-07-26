//Isis Boone Isiboone@uat.edu
//Last tested: July 25th, 8:48 PM
//This is an application learning how to use references and swapping bank balances

#include <iostream>

using namespace std;
//Global vars
int temp; 
int norAccout = 10000;
int hackAccount = 5;
//This is used for switching the accounts
void normalAccount(int& x, int& y);
void Account(int x, int y);

//The introduction to the CIA agent who will switching the accouts.
void Introduction() {
	cout << "Welcome CIA agent to hacking and bankrupting the terrorist!\n";
	cout << "You will be instructed to change the bank accounts of the terrorist group and Joe's Coffee Shop!\n";
	cout << "These are the orginal accounts AGENT!\n";
}
//This shows the unchanged accoutns and how much the terrorist have. 
void Unchanged() {
	cout << "----Original Account Balances:\n";
	cout << "*Terrorist Organization:$"<< norAccout << "\n";
	cout << "*Joes Coffee Shop:$"<< hackAccount << "\n";
}
void reCheck() {
	cout << "Hello Agent, we are double checking the accounts right now!\n";
	Account(norAccout, hackAccount);
	cout << "*Terrorist Organization:$" << norAccout << "\n";
	cout << "*Joes Coffee Shop:$" << hackAccount << "\n";
}
//This showed the changed the accounts with the joes coffee shop having more money instead of terrorist.
void changed() {
	cout << "\n";
	cout << "Agent, you will be swapping the accounts now! Hang Tight!\n";
	normalAccount(norAccout, hackAccount);
	cout << "*Terrorist Organization:$" << norAccout << "\n";
	cout << "*Joes Coffee Shop:$" << hackAccount << "\n";
}

//This is the main function that runs everything with all the functions. 
int main() {
	Introduction();

	Unchanged();

	reCheck();

	changed();
				
	return 0;
}
//This is the function that changes the numbers around so the coffee shop has more money. they just switch the two vars.
void normalAccount(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
void Account(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}