
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

    return 0;
}

