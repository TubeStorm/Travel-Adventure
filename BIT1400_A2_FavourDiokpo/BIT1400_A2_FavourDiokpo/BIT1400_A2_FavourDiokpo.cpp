/*
 * BIT1400
 * Assignment 2 - Travel Adventure
 * This program provides 3 types of vacation packages for winter break.
 * Favour Diokpo 101021610
 * 2/Feb/2017
 */
#include <iostream>
using namespace std;

void packageCost(int package, int travelers);
double museum(int travelers);
double scuba(int travelers);
double sailing(int travelers);


int main() {
	double package, travelers;
	cout << "-----------Welcome to BIT travel agency----------\n\n";
	cout << "The following are our 3 Vacation Packages \n 1 = Visiting a Museum\n 2 = Scuba Diving\n 3 = Sailing " << endl;
	cout << "\nPlease select a Travel Package" << endl;
	cin >> package;
	cout << "Please how many travellers in total (include your self)?" << endl;
	cin >> travelers;

	if((package < 0)||(package>3)){
	cout<<"\nError: the number you entered is not an acceptable choice. You will not be able to travel this winter break.\n";
	}
    else if(travelers<=0){
        cout<<"Error: the number of travellers is invalid.\n";
    }
	else
	{
	packageCost(package, travelers);
	}
	
    return 0;
}


//package cost code
void packageCost(int package, int travelers) {
    double totalCharge, requiredDep;
    
    switch (package) {
        case 1:totalCharge = museum(travelers);break;
        case 2:totalCharge = scuba(travelers);break;
        case 3:totalCharge = sailing(travelers);break;
        default:break;
    }
        requiredDep = totalCharge / 2;
    
    cout <<"Total Charge is: $"<< totalCharge <<endl;
    cout <<"Required Deposite is: $"<< requiredDep <<endl;
    cout << "Have a great day\n"<<endl;
}

//museum code
double museum(int travelers) {
    int museum;
    double baseCharge, discount, totalCost;
    cout<<"\nThe following are our two museums\n 1 = Museum of Fine Arts\n 2 = Institute for Contemporary Art\n";
    cout<<"\nSelect a museum?\n";
    cin>>museum;
    switch (museum) {
        case 1:baseCharge = travelers * 10.25; break;
        case 2:baseCharge = travelers * 8.50; break;
        default: cout<<"Error: no other museums to pick from\n";break;
    }
    
    if (travelers >= 20) {
        discount = 0.05 * (baseCharge + 0);
    }
    else
        discount = 0;
    
     totalCost= baseCharge - discount;
    cout << "\nThe number of beginners: 0"<<endl;
    cout << "The number of advanced: 0"<<endl;
    cout << "The base charge is: $" << baseCharge<<endl;
    cout << "The instruction cost is: $0"<<endl;
    cout << "Discount: $"<<discount<<endl;
	return totalCost;
}


//scuba code
double scuba(int travelers) {
	double baseCharge, instructorsCost, discount, totalCost;
	int beginners, advanced;
    
	cout << "How many people need an instructor?";
	cin >> beginners;

	advanced = travelers - beginners;
	baseCharge = 400 * travelers;
	instructorsCost = 100 * beginners;
    
	if (travelers >= 5) {
		discount = 0.10 * (baseCharge + instructorsCost);
	    }
    else
        discount = 0;
    
    totalCost= (baseCharge + instructorsCost) - discount;
    
	cout << "\nThe number of beginners: " << beginners<<endl;
	cout << "The number of advanced: " << advanced<<endl;
	cout << "The base charge is: $" << baseCharge<<endl;
	cout << "The instruction cost is: $" << instructorsCost<<endl;
	cout << "Discount: $" << discount <<endl;
	return totalCost;
}


//sailing code
double sailing(int travelers) {
	double totalCost;
	double a = 150 * travelers;
	totalCost = 200 + a;
    cout << "\nThe number of beginners: 0"<<endl;
    cout << "The number of advanced: 0"<<endl;
    cout << "The base charge is: $" << totalCost<<endl;
    cout << "The instruction cost is: $0"<<endl;
    cout << "Discount: $0"<<endl;
    return totalCost;
}



