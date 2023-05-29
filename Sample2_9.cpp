#include<iostream>
#include<string>
#include"Sample2_9.h"

using namespace std;

void sample2_9() {
	string inputLine;
	getline(cin, inputLine, '\n');
	cout << "you input:" << inputLine << endl;

	cout << "Enter the date in American format " << "(e.g., December 25 , 2002) :";
	string Date;
	getline(cin, Date, '\n');
	int i = Date.find(" ");
	string Month = Date.substr(0, i);
	int k = Date.find(",");
	string Day = Date.substr(i + 1, k - i - 1);
	string Year = Date.substr(k + 2, 4);
	string NewDate = Day + " " + Month + " " + Year;
	cout << "Original date: " << Date << endl;
	cout << "Converted date: " << NewDate << endl;
}