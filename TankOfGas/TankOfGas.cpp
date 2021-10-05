//Programming Challenge “Tank of Gas”

#include <iostream>
using namespace std;

int main(){
    //User variables
    int userTank;
    double userTownMiles, userHighwayMiles;

    //Introduduction constant variables
    const int introTank = 20;
    const double introTownMiles = 21.5;
    const double introHighwayMiles = 26.8;

    //Introduction town and highway Calculation
    double introTown = introTank * introTownMiles;
    double introHighway = introTank * introHighwayMiles;

    //Expections (Display)
    cout << "My car has a " << introTank <<  " gallon tank of gas and gets " << introTownMiles << " miles " 
         << "per gallon in town" << endl
         << "and " << introHighwayMiles << " miles per gallon on the highway." << endl
         << "This means that my car can drive a total of: " << endl
         << introTown << " miles " << "in town and " << introHighway << " on the highway." << endl;

    //Ask user if they want to input infomation
    cout << "\nDo you want to input infomation for your car to see your totals?" << endl
         << "You need to know how big your tank is, your mileage in town, and on the highway." << endl
         << "\nEnter info for your car? (y/n)  ";

    //User selection
    char choice;
    cin >> choice;
    if (choice == 'Y' || choice == 'y'){
        //Prompts user for infomation
        cout << "\n\nHow many gallons of gas does your car hold?  ";
        cin >> userTank;
        //Input Validation
        while (cin.fail() || userTank < 0)
        {
            cin.clear();
            cin.ignore();
            cout << "You must enter a number above 0!" << endl;
            cin >> userTank;
        }
        //---
        cout << "\nHow many miles to the gallon do you get in town?  ";
        cin >> userTownMiles;
        //Input Validation
        while (cin.fail() || userTownMiles < 0)
        {
            cin.clear();
            cin.ignore();
            cout << "You must enter a number above 0!" << endl;
            cin >> userTownMiles;
        }
        //---
        cout << "\nHow many miles to the gallon do you get on the highway?  ";
        cin >> userHighwayMiles;
        //Input Validation
        while (cin.fail() || userHighwayMiles < 0 || userHighwayMiles < userTownMiles)
        {
            cin.clear();
            cin.ignore();
            cout << "You must enter a number above 0 and larger then in town!" << endl;
            cin >> userHighwayMiles;
        }
        
        //User town and highway Calculation
        double userTown = userTank * userTownMiles;
        double userHighway = userTank * userHighwayMiles;

         //User (Display)
        cout << "\n\nYour car with a " << userTank << " gallon tank can drive:" << endl
             << userTown << " miles in town." << endl
             << userHighway << " miles on the highway." << endl
             << "\nNow you know.." << endl
             << "Ok, well have a nice day!" << endl << "\n";
    }else{
        //Ends Program
        cout << "Ending Program";
        return 0;
    }
return 0;
}