#include <iostream>

using namespace std;

int main(){
	
	double merchandise, salary, rent, electric;
	
	cout << "Enter the relative amounts below";
	cout <<"\n"<< "Total cost of merchandise: R";
	cin >> merchandise;
	
	cout << "Total salary of employees including Linda's: R";
	cin >> salary;
	
	cout << "Yearly rent: R";
	cin >> rent;
	
	cout << "Electricity cost: R";
	cin >> electric;
	
	double profit = (merchandise + salary + rent + electric)*1.294125;
	profit = profit - (merchandise + salary + rent + electric);
	
	cout << "The merchandise should be marked up by R"<<profit<<" before puttiong them on-sale";
	
	return 0;
	
	
}
