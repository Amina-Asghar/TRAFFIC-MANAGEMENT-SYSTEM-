#include <iostream>
using namespace std;
int main() 
{
    char choice; // Declare a character variable to store the user's choice.
    do {
        cout << "\nTraffic Management System\n"; // Display the program title.
        cout << "1. Red Light\n"; // Display menu option 1.
        cout << "2. Yellow Light\n"; // Display menu option 2.
        cout << "3. Green Light\n"; // Display menu option 3.
        cout << "4. Traffic Rules & Regulations\n"; // Display menu option 4.
        cout << "5. Emergency Vehicle\n"; // Display menu option 5.
        cout << "6. Exit \n"; // Display menu option 6.
        cout << "Enter your choice: ";
        cin  >> choice; // Read the user's choice into the 'choice' variable.
        cout << "\n";

        switch (choice) 
		{
            case '1':
                cout << "Red Light - Stop!\n"; // Display a message for option 1.
                break;
            case '2':
               cout << "Yellow Light - Prepare to Go!\n"; // Display a message for option 2.
                break;
            case '3':
                cout << "Green Light - Go!\n"; // Display a message for option 3.
                break;
            case '4':
                cout << "Traffic Rules and Regulations:\n"; // Display a message for option 4.
                cout << "1. Always obey traffic signals.\n"; // Display a sub-menu item.
                cout << "2. Use seat belts for safety.\n"; // Display another sub-menu item.
                cout << "3. Don't use a mobile phone while driving.\n"; // Display another sub-menu item.
                break;
            case '5':
                cout << "Emergency Vehicle - Pull over to make way for the emergency vehicle.\n"; // Display a message for option 5.
                // Note: There's no 'break' statement here, so the program will fall through to the next case.
            case '6':
                cout << "Exiting the Traffic Management System.\n"; // Display an exit message for option 6.
                break;
            default:
                cout << "Invalid choice. Please try again.\n"; // Display an error message for any other input.
        }
    } while (choice != '6'); // Repeat the menu until the user selects option 6 to exit.
}
