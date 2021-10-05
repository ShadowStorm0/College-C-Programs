//Programming Challenge “Monthly Sales Tax”

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    //User variables
    string month, year;
    double totalSales, sales, countyTax, stateTax, totalSalesTax;

    //Display Introductions
    cout << "---------------------------------------------------------------------\n"
         << "This company must file a monthly sales tax report listing the sales\n"
         << "from the month and the amount of sales tax collected.\n"
         << "Please input data when asked to find the monthy sales tax. Thanks.\n"
         << "---------------------------------------------------------------------\n";

    //User Input(s)
    cout << "Please enter the month of sales. ";
    cin >> month;

    cout << "Please enter the year of the sales. ";
    cin >> year;

    cout << "Please enter the total register sales collected. $ ";
    cin >> totalSales; cout << endl;

    //Calculation(s)
    sales = totalSales / 1.06;
    countyTax = sales * .02;
    stateTax = sales * .04;
    totalSalesTax = countyTax + stateTax;

    //Display
    cout << "For " + month + ", " + year + "\n"
         << "----------------------------\n"
         << setprecision(2) << fixed 
         << "Total Collected      $   " << totalSales << "\n"
         << "Sales                $   " << sales << "\n"
         << "County Sales Tax     $     " << countyTax << "\n"
         << "State Sales Tax      $     " << stateTax << "\n"
         << "Total Sales Tax      $     " << totalSalesTax << "\n\n";
return 0;
}