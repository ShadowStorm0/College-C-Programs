//Programming Challenge “Stock Commission”

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //User variables
    int numberShare = 0;
    double priceShare = 0.0, userCommission = 0.0;

    //Introduduction variables
    const int introShares = 200, introCommission = 2;
    const double introPrice = 21.77;

    //Introduction calculations
    double introStockAmount = introShares * introPrice;
    double introCommissionAmount = introStockAmount * introCommission / 100;
    double introGrossAmount =  introStockAmount + introCommissionAmount;

    //Expections (Display)
    cout << "Kathryn bought " << introShares << " shares of stock at a price of $" << introPrice << " per share.\n"
         << "She must pay her stock broker a " << introCommission << " percent commission for the transaction.\n" 
         << "This is how much she should expect to pay...\n\n"
         << "-----------------------------------------\n"
         << introShares << " shares @ $" << introPrice << "\n"
         << "-----------------------------------------\n"
         << "Total Stock Price: $ " << fixed << setprecision(2) << introStockAmount << "\n"
         << "Broker Commission: $ " << introCommissionAmount << "\n"
         << "Gross Total:       $ " << introGrossAmount << "\n\n";

    //User Input(s)
    cout << "How many shares will you be buying? ";
    cin >> numberShare;
    cout << "\n";

    cout << "What is the price per share? $";
    cin >> priceShare;
    cout << "\n";

    cout << "What percentage will your broker be paid? (3 or 4 ...) ";
    cin >> userCommission;
    cout << "\n";

    //User calculations
    double userStockAmount = numberShare * priceShare;
    double userCommissionAmount = userStockAmount * userCommission / 100;
    double userGrossAmount = userStockAmount + userCommissionAmount;

    //Display  
    cout <<"-----------------------------------------\n"
         << numberShare << " shares @ $" << priceShare << "\n"
         <<"-----------------------------------------\n"
         << "Stock Cost: $ " << fixed << setprecision(2) << userStockAmount << "\n"
         << "Broker Fee: $ " << userCommissionAmount << "\n"
         << "Total Cost: $ " << userGrossAmount << "\n\n"
         << "Have a nice day!\n\n";
return 0;
}