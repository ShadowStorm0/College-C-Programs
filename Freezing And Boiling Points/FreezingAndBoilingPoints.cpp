//Programming Challenge “Freezing and Boiling Points”

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
    //Initialization
    string alcoholState = "No Change!", mercuryState = "No Change!", oxygenState = "No Change!", waterState = "No Change!";
    int currentTemp;
    char Restart; 

    do{
        //Introductory Statement
        cout << "This program compares the temperature in farenheit that the user enters,\n"
             << "compares it with the following table, and shows all the substances that will\n"
             << "freeze and boil at that temperature.\n\n";

        //User Input (currentTemp)
        cout << "Please enter the current temperature in Farenheit: ";
        cin >> currentTemp; cout << "\n\n";
        while (cin.fail()){ // Input Validation
            cin.clear();
            cin.ignore();
            cout << "You can not enter a number less than 0\n";
            cin >> currentTemp;
        }

        //Displays Table
        cout << "SUBSTANCE                  FREEZING POINT (F)                   BOILING POINT (F)\n"
             << "---------------------------------------------------------------------------------\n"
             << "Ethyl Alcohol           -- 173 Degrees                          172 Degrees      \n"
             << "Murcury                 -- 38  Degrees                          676 Degrees      \n"
             << "Oxygen                  -- 362 Degrees                       -- 306 Degrees      \n"
             << "Water                      32  Degrees                          212 Degrees      \n\n"
             << "When the temperature is " << currentTemp << " Degrees\n\n";

        //Check States (Order of Lowest to Greatest)
        if (currentTemp <= -362){
            oxygenState = "Freezes!";
        }else if (currentTemp >= -306){
            oxygenState = "Boils!";
        }if (currentTemp <= -173){
            alcoholState = "Freezes!";
        }else if (currentTemp >= 172){
            alcoholState = "Boils!";
        }if (currentTemp <= -38){
            mercuryState = "Freezes!";
        }else if (currentTemp >= 676){
            mercuryState = "Boils!";
        }if (currentTemp <= 32){
            waterState = "Freezes!";
        }else if (currentTemp >= 212)
            waterState = "Boils!";

        //Display State Changes
        cout << "Ethyl Alcohol    "<< alcoholState << "\n\n"      
             << "Mercury          "<< mercuryState << "\n\n"       
             << "Oxygen           "<< oxygenState  << "\n\n"      
             << "Water            "<< waterState   << "\n\n";

        //Change for Summary
        if(alcoholState == "No Change!"){
            alcoholState = "nothing";
        }
        if(mercuryState == "No Change!"){
            mercuryState = "nothing";
        }

        //Display Summary
        cout << "At this temperature " << alcoholState << " will happen to the contents of the Ethyl Alcohol!\n"
             << "At this temperature " << mercuryState << " will happen to the contents of the Mercury!\n"
             << "At this temperature Oxygen will " << oxygenState << "\n"
             << "At this temperature Water will "  << waterState << "\n\n";

        //Restart Program (Closes if not y)
        cout << "Do you feel like to test another temperature?\n"
             << "Enter Y for YES or N for NO: ";        
            cin >> Restart;
        if (tolower(Restart) == 'y')
            system("cls | clear"); // Clears Termimal
    } while (tolower(Restart) == 'y');
return 0;
}