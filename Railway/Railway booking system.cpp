
#include <iostream>
#include <string>
using namespace std;

class Railway {
public:
    int trainNo;
    int  pnr;
    string passengerName;
    string source;
    string destination;
    int age;
    int seats;
    static int availableSeats;
    static int nextPNR;

public:

    
    void bookTicket() {
        if (availableSeats <= 0) {
            cout << "\nSorry! No seats available.\n";
            return;
        }

        cout << "\nEnter Passenger Name: ";
        cin >> ws;
        getline(cin, passengerName);

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Train Number: ";
        cin >> trainNo;

        cout << "Enter Source: ";
        cin >> source;

        cout << "Enter Destination: ";
        cin >> destination;

        cout << "Enter Number of Seats: ";
        cin >> seats;

        if (seats <= 0 || seats > availableSeats) {
            cout << "\nInvalid number of seats!\n";
            return;
        }

        pnr = nextPNR++;
        availableSeats -= seats;

        cout << "\nTicket Booked Successfully!\n";
        cout << "Your PNR Number: " << pnr << endl;
    }

  
    void displayDetails() {
        cout << "\n----- Passenger Details -----\n";
        cout << "PNR Number: " << pnr << endl;
        cout << "Passenger Name: " << passengerName << endl;
        cout << "Age: " << age << endl;
        cout << "Train Number: " << trainNo << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Seats Booked: " << seats << endl;
    }

    
    void cancelTicket() {
        availableSeats += seats;
        cout << "\nTicket Cancelled Successfully!\n";
        pnr = 0;
        seats = 0;
    }

   
    bool isBooked() {
        return pnr != 0;
    }

    
    void displaySeats() {
        cout << "\nAvailable Seats: " << availableSeats << endl;
    }
};

int Railway::availableSeats = 50;
int Railway::nextPNR = 1001;

int main() {
    Railway r[50];
    int choice;
    int count = 0;
    int i, pnr;

    do {
        cout << "\n===== RAILWAY RESERVATION SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. View Passenger Details\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Check Available Seats\n";
        cout << "5. Exit\n";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            if (count < 50) {
                r[count].bookTicket();
                if (r[count].isBooked()) {
                    count++;
                }
            }
            else {
                cout << "\nReservation limit reached!\n";
            }
            break;

        case 2:
            cout << "\nEnter PNR Number: ";
            cin >> pnr;

            for (i = 0; i < count; i++) {
                if (r[i].isBooked() && r[i].pnr == pnr) {
                    r[i].displayDetails();
                    break;
                }
            }

            if (i == count) {
                cout << "\nPNR Number Not Found!\n";
            }
            break;

        case 3:
            cout << "\nEnter PNR Number: ";
            cin >> pnr;

            for (i = 0; i < count; i++) {
                if (r[i].isBooked() && r[i].pnr == pnr) {
                    r[i].cancelTicket();
                    break;
                }
            }

            if (i == count) {
                cout << "\nPNR Number Not Found!\n";
            }
            break;

        case 4:
            r[0].displaySeats();
            break;

        case 5:
            cout << "\nThank You for Using Railway Reservation System!\n";
            break;

        default:
            cout << "\nInvalid Choice! Please Try Again.\n";
        }

    } while (choice != 5);

    return 0;
}

