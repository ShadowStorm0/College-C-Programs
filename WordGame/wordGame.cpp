//Programming Challenge "Word Game"

#include <iostream>
#include <string>
using namespace std;

int main(){
    //User variables
    string name, age, city, college, profession, animal, petName, enter;

    //Display instructions
    cout << "This is a fantastic Word Game!!!\n"
         << "Please enter the infomation asked for and watch the fun unfold!\n\n";

    //User Input(s)
    cout << "What is your name: ";
    getline(cin, name); cout << "\n";

    cout << "How old you are or at least how old you claim to be: ";
    getline(cin, age); cin.ignore(); cout << "\n";
    
    cout << "Name your favorite city: ";
    getline(cin, city); cout << "\n";

    cout << "Name a college: ";
    getline(cin, college); cout << "\n";

    cout << "What profession do you want to be in when you grow up: ";
    getline(cin, profession); cout << "\n";

    cout << "What is your favorite animal: ";
    getline(cin, animal); cout << "\n";

    cout << "What is your pet's name (current, future, or past): ";
    getline(cin, petName); cout << "\n\n";

    cout << "Ready for the fun? Press [Enter]?";
    getline(cin, enter); cout << "\n\n";

    //Display story
    cout << "There once was a person named " << name << " who lived in " << city <<".\n" 
         << "At the age of " << age << ", " << name << " went to college at " << college << ". \n" 
         << name << " graduated and went to work as a " << profession << ".\n" 
         << "Then, " << name << " adopted a(an) " << animal << " named " << petName << ".\n"
         << "They both lived happily ever after!\n";

return 0;
}