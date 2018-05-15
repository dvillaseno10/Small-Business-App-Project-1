// Float Charters 
// This program calculates total sale price for a customer shopping at car wash
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//global declaration statements
void totalPrice(double &total);
double add(int);
//array which stores prices for services
double prices[2][4]= {{8.99, 14.99, 18.99, 22.99 }, { 1.50, 5.00, 10.00, 30.00 }};
double choices;
string UsrName[4] = {};
string passWrd[4] = {};
int main()
{
  // main declaration statements
	int choice = 0;
	double total = 0;
	double washes;
	// prints texts about the car wash to user
	cout << "\t\tWelcome to A1A car wash!" << endl << "\t'You've tried the rest, now try the best'" << endl << endl;
	cout << "Enter username: ";
	cin >> UsrName[0];
	cout << "Enter password: ";
	cin >> passWrd[0];
	cout << "\nWelcome " << UsrName[0] << "," << endl;
	cout << "\nOur custom washes are listed below\n";
	cout << "------------------------------------\n";
  // Display options 1-4
	cout << "1.Bronze\t\t$" << prices[0][0] << endl;
	cout << "2.Sliver\t\t$" << prices[0][1] << endl;
	cout << "3.Gold  \t\t$" << prices[0][2] << endl;
	cout << "4.Platinum\t\t$" << prices[0][3] << endl << endl;
		cout << "First off, How many cars will we be servicing today? ";
		cin >> washes;
		cout << "Great! What will your choice of wash be today?\n (Select options 1 - 4): ";
		cin >> choice;
		//Switch statement uses the input to then use other functions to sum the total
		switch (choice)
		{
		case 1:
			cout << "\nBronze selected\nThis package includes:\n*Deluxe Wash\n*Tire Clean\n" << endl;
			total += prices[0][0] * washes;
			total += add(choices);
			cout << "The total price comes out too : $" << total << endl;
			break;
		case 2:
			cout << "\nSilver selected\nThis package includes:\n*Deluxe Wash\n*Tire Clean\n*Interior Vacumm\n" << endl;
			total += prices[0][1] * washes;
			total += add(choices);
			cout << "The total price comes out to : $" << total << endl;
			break;
		case 3:
			cout << "\nGold selected\nThis package includes:\n*Deluxe Wash\n*Tire Clean\n*Interior Vacumm\n*Coat Wax\n" << endl;
			total += prices[0][2] * washes;
			total += add(choices);
			cout << "The total price comes out to : $" << total << endl;
			break;
		case 4:
			cout << "\nPlatinum selected\nThis package includes:\n*Deluxe Wash\n*Interior Vacumm\n*Coat Wax\n*Tire Shine\n*Complete Surface Protectant\n" << endl;
			total += prices[0][3] * washes;
			total += add(choices);
			cout << "The total price comes out too : $" << total << endl;
			break;
		default:
			cout << "Invalid input select options 1-4" << endl;
		}
		//output total to receipt.txt file 
		ofstream out;
		out.open("receipt.txt");
		out << "username: " << UsrName << endl;
		out << "total: $" << total;
		out.close();
}
// This function adds choices for additional prices to total
double add(int choices)
{
    double total = 0;
		while(true)
		{
		  // Display texts and prices for additional features user to select 1-5
		  cout << "Would you like any additional features?\n";
  		cout << "---------------------------------------\n";
  		cout << "1. Air Freshener              $1.50\n";
  		cout << "2. Tire Pump                  $5.00\n";
  		cout << "3. Rotation of Tires          $10.00\n";
  		cout << "4. Oil Change plus Filter     $30.00\n";
  		cout << "5. No additional features\n";
  		cin >> choices;
  		//if else loop which runs when user inputs numbers 1-4 and ends with 5 when user no longer wants to add anymore features
		  if(choices == 1)
		  {
		    cout << "'Air Freshner added'" << endl;
  			cout << "An additional $1.50 will be charged." << endl;
  			total += prices[1][0];
		  }
		  else if (choices == 2)
		  {
		    cout << "'Tire Pump added'" << endl;
  			cout << "An additional $5.00  will be charged\n" << endl;
  			total += prices[1][1];
		  }
		  else if (choices == 3)
		  {
		    cout << "'Rotation of Tires added'" << endl;
  			cout << "An additional $10.00 will be charged\n" << endl;
  			total += prices[1][2];
		  }
		  else if (choices == 4)
		  {
		    cout << "'Oil Change added'" << endl;
  			cout << "An additional $30.00 will be charged\n" << endl;
  			total += prices[1][3];
		  }
		  else if (choices == 5)
		  {
		    break;
		  }
		  else
		  {
		    cout << "Please enter a number 1 - 5\n";
		  }

		}
		return total;
}
void getUsrName(int *);
void doublepassWard(int *);

int main()
{
	int name;
	getUsrName(&name);
	doublepassWard(&name);
	cout << "That passWard doubled is" << name << endl;
	return 0;
}
void getUsrName(int *input)
{
	cout << "Enter user name: ";
	cin >> *input;
}
void doublepassWard(int *val)
{
	*val *= 2;
}

