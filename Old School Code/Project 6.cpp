//Mitchell Readinger
//CMPSC 121.3
//2/19/2015
//
//Project 6 
//
//This program will calculate a discount based on 
//the number of items the user inputs.

//Pre-Processes
#include<iostream>

using namespace std;

//Start of Program
int main(){
	
	// Print Splash Screen
	cout << "Mitchell Readinger" << endl;
	cout << "CMPSC 121.3" << endl;
	cout << "2/19/15" << endl;
	cout << endl;
	cout << "Project 6" << endl;
	cout << endl;
	cout << "This program will calculate a discount based on the number of items the user inputs." << endl;
	cout << endl;
	
	//Variable Declarations
	int ItemNumber;
	double Total;
	bool a;
	bool b;
	bool c;
	bool d;
	
	//Ask for Inputs
	cout << "This program will discount the price of your items based on how many you are purchasing." << endl;
	cout << "These are the discounts:" << endl;
	cout << endl;
	cout << "For 0 - 10, $10.00 per unit" << endl;
	cout << "For 10 - 100, $7.00 per unit + $30" << endl;
	cout << "For 100 - 500, $5.00 per unit + $230" << endl;
	cout << "For anything greater than 500, $4.00 per unit + $730" << endl;
	cout << endl;
	cout << "How many items would you like to purchase?" << endl;
	
	//Accept User Input
	cin >> ItemNumber;
	
	//Calculate discounts with each boolean
	a = (ItemNumber < 10);
	b = (10 <= ItemNumber && ItemNumber < 100);
	c = (100 <= ItemNumber && ItemNumber < 500);
	d = (500<= ItemNumber);
	
	//Print boolean results as test
	//cout << a << endl;
	//cout << b << endl;
	//cout << c << endl;
	//cout << d << endl;
	
	
	
	//Total equation for displaying correct amount 
	Total = (ItemNumber * 10.00 * a) + (((ItemNumber * 7.00) +30.00) * (b)) + (((ItemNumber * 5.00) + 230.00) * (c)) + (((ItemNumber * 4.00) + 730.00) * (d));
	
	//Print total of items
	cout<<" With " << ItemNumber << " items, your total will be: $" << Total << endl;
	
	
	return 0;
}