//Programming Challenge “Fat Gram Calculator”

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //Initialization
    double totalCalories, fatGrams, caloriesPercent, caloriesFromFat;
    char restart;

    do{
        //Expectation
        cout << "       CALORIES VS CALORIES FROM FAT\n"
             << "***********************************************\n"
             << "  Calories provide a mesure of how much\n"
             << " energy you get from a serving of this food.\n"
             << " Many Americans consume more calories than\n"
             << " they need without meeting recommended intakes\n"
             << " for a number of nutrients. One gram of fat has\n"
             << " 9 calories. Foods with less than 30\% calories\n"
             << " are considered low in fat.\n\n"
             << " This program will calculate the percentage of fat\n"
             << " in a food based on your input of total calories\n"
             << " and fat in grams.\n"
             << "***********************************************\n\n";

        //User Input(s)
        cout << "Please enter the total calories present in your food: ";
        cin >> totalCalories; cout << "\n\n";
        while (cin.fail() || totalCalories < 0){ // Input Validation
            cin.clear();
            cin.ignore();
            cout << "You can not enter a number less than 0\n";
            cin >> totalCalories;
        }

        cout << "Please enter the grams of fat present in your food: ";
        cin >> fatGrams; cout << "\n\n";
        while (cin.fail() || fatGrams < 0){ // Input Validation
            cin.clear();
            cin.ignore();
            cout << "You can not enter a number less than 0\n";
            cin >> fatGrams;
        }
        
        //Calculation(s)
        caloriesFromFat = fatGrams * 9;
        while (cin.fail() || (caloriesFromFat > totalCalories)){ // Input Validation
            cin.clear();
            cin.ignore();
            cout << "Error! Number of calories from fat cannot be greater than the total number of calories\n"
                 << "Either total calories or fat grams were entered incorrectly\n";
            exit(0); // Closes program
        }
        caloriesPercent = (caloriesFromFat / totalCalories) * 100;

        //Display
        cout << "With " << fixed << setprecision(1) << fatGrams << " grams of fat with " << totalCalories << " total calories,\n"
             << caloriesPercent << "\% of the calories come from fat.\n\n";
        
        if(caloriesPercent < 30){
            cout << "This food is low in fat.\n\n"
                 << "Hurray! Less than 30\% calories from fat.\n"
                 << "Now we can have cheese cake.\n\n";
        }else{
            cout << "This food is high in fat.\n\n";
        }

        //Restart Dialog
        cout << "Do you want to restart the program?\n"
             << "Enter Y for YES or N for NO: ";
        cin >> restart;
        if (tolower(restart) == 'y'){
            system("cls");
        }
    }while(tolower(restart == 'y'));
return 0;
}