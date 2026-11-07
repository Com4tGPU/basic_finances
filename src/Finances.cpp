#include <iostream> 
#include <string>
using namespace std;

double menu_first() {
    cout << "\nSet your balance: ";
    double balance{};
    cin >> balance;

    cout << "\nBalance set to: " << balance << "\n";
    return balance;
}
void menu(double& balance) {
    while (true) {
        cout << R"ART('##:::::'##:'########:'##::::::::'######:::'#######::'##::::'##:'########:'####:
 ##:'##: ##: ##.....:: ##:::::::'##... ##:'##.... ##: ###::'###: ##.....:: ####:
 ##: ##: ##: ##::::::: ##::::::: ##:::..:: ##:::: ##: ####'####: ##::::::: ####:
 ##: ##: ##: ######::: ##::::::: ##::::::: ##:::: ##: ## ### ##: ######:::: ##::
 ##: ##: ##: ##...:::: ##::::::: ##::::::: ##:::: ##: ##. #: ##: ##...:::::..:::
 ##: ##: ##: ##::::::: ##::::::: ##::: ##: ##:::: ##: ##:.:: ##: ##:::::::'####:
. ###. ###:: ########: ########:. ######::. #######:: ##:::: ##: ########: ####:
:...::...:::........::........:::......::::.......:::..:::::..::........::....::)ART";
        cout << "\nCurrent Balance: " << balance << "\n";
        cout << "1. Calculator\n";
        cout << "2. Add charge/deposit\n";
        cout << "3. Exit\n";
        cout << "Enter Option ID: ";
        int option{};
        cin >> option;

        if (option == 1) {
            cout << "\nset x: ";
            int x{};
            cin >> x;

            cout << "\nset y: ";
            int y{};
            cin >> y;

            cout << "\noperator: ";
            char math{};
            cin >> math;

            if (math == '+') {
                cout << "Result: " << (x + y) << "\n";
            }
            else if (math == '-') {
                cout << "Result: " << (x - y) << "\n";
            }
            else if (math == '*') {
                cout << "Result: " << (x * y) << "\n";
            }
            else if (math == '/') {
                if (y != 0) {
                    cout << "Result: " << (static_cast<double>(x) / y) << "\n";
                }
                else {
                    cout << "Error: Division by zero.\n";
                }
            }
        }
        else if (option == 2) {

            cout << "\nEnter amount to add/subtract: ";
            double transaction{};
            cin >> transaction;
            balance += transaction;
        }
        else if (option == 3) {
            cout << "\nExiting menu...\n";
            break;
        }
        else {
            cout << "\nInvalid option. Try again.\n";
        }
    }
}

int main() {
	string pass{ "password123" }; //change password here
	string user_name{ "user" }; //change username here

    while (true) {
        string input_user_name{};
        string input_pass{};
        cout << "Enter login credentials: \n";
        cout << "Enter username: ";
        cin >> input_user_name;

        cout << "Enter password: ";
        cin >> input_pass;

        if (input_user_name == user_name && input_pass == pass) {
            cout << "\nLogin successful!\n";
            double balance = menu_first();
            menu(balance);
            break;
        }
        else {
            cout << "\nInvalid username or password. Try again.\n";
        }
    }
}