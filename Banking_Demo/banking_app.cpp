#include<iostream>
#include<map> 
using namespace std;

class BankAcc {
private:
    int balance;

public:

    BankAcc(int starting_balance = 100) {
        balance = starting_balance;
    }


    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Updated Balance: $" << balance << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }


    void withdraw(int amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Updated Balance: $" << balance << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }


    void getBalance() {
        cout << "Current Balance: $" << balance << endl;
    }
};


map<string, BankAcc> users;

int main() {
    int choice;
    string name;
    int amount;

    do {
        cout << "\n******** Banking Demo **********" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter your name: ";
            cin >> name;

            if (users.find(name) == users.end()) {
                users[name] = BankAcc(); 
                cout << "Registration Successful! Initial Balance = $100" << endl;
            } else {
                cout << "User already exists! Try logging in." << endl;
            }

        } else if (choice == 2) {
            cout << "Enter your name: ";
            cin >> name;

            if (users.find(name) != users.end()) {
                cout << "Login Successful!" << endl;

                int userChoice;
                do {
                    cout << "\n******** Banking Menu **********" << endl;
                    cout << "1. Deposit" << endl;
                    cout << "2. Withdraw" << endl;
                    cout << "3. Check Balance" << endl;
                    cout << "4. Logout" << endl;
                    cout << "Enter your choice: ";
                    cin >> userChoice;

                    switch (userChoice) {
                        case 1:
                            cout << "Enter amount to deposit: ";
                            cin >> amount;
                            users[name].deposit(amount);
                            break;

                        case 2:
                            cout << "Enter amount to withdraw: ";
                            cin >> amount;
                            users[name].withdraw(amount);
                            break;

                        case 3:
                            users[name].getBalance();
                            break;

                        case 4:
                            cout << "Logging out..." << endl;
                            break;

                        default:
                            cout << "Invalid choice! Try again." << endl;
                    }

                } while (userChoice != 4);  
            } else {
                cout << "User not found! Please register first." << endl;
            }
        }

    } while (choice != 3);  

    cout << "Thank you for using Banking Demo!" << endl;
    return 0;
}