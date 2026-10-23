#include <iostream> 
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
            cout << "\nw e l c o m e !"; 
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
                    } else { 
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
        double pass(3322); 
        double attempt{}; 
         
        // Fixed: Replaced recursive main() with a proper while loop for the PIN check 
        while (true) { 
            cout << "\n(0000 to close)\nPIN: "; 
            cin >> attempt; 
             
            if (attempt == pass) { 
                cout << "\nPIN accepted.\n"; 
                 
                double balance = menu_first(); 
                menu(balance); 
                break; // Breaks PIN loop after menu exits 
            } 
            else if (attempt == 0) { // octal 0000 evaluates to 0 
                cout << "\nclosing window...\n"; 
                cout << "g o o d b y e\n"; 
                break; 
            } 
            else if (attempt < 0) {  
                cout << "\nInvalid pin. Try again.\n"; 
            } 
            else { 
                cout << "\nIncorrect PIN. Try again.\n"; 
            } 
        } 
        return 0; 
}
