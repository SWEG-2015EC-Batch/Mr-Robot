
//Automated Room Reservation System for a Hotel.
#include <iostream>
#include <string>
using namespace std;
int main() {
    const int TOTAL_ROOMS = 150;
    const int OCEAN_VIEW_SUITE_MIN = 1;
    const int OCEAN_VIEW_SUITE_MAX = 60;
    const int POOLSIDE_VILLA_MIN = 61;
    const int POOLSIDE_VILLA_MAX = 110;
    const int GARDEN_VIEW_ROOM_MIN = 111;
    const int GARDEN_VIEW_ROOM_MAX = 150;

    string name, gender, reservationCode;
    int age, roomNumber, roomType;

    cout << "Welcome to the Hotel Reservation System!" << endl;

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Please enter your gender: ";
    getline(cin, gender);

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your reservation code: ";
    cin >> reservationCode;

    cout << "Please select the room type:" << endl;
    cout << "1. Ocean View Suite" << endl;
    cout << "2. Poolside Villa" << endl;
    cout << "3. Garden View Room" << endl;
    cin >> roomType;

    if (roomType == 1) {
        cout << "Assigning a room in the Ocean View Suite category..." << endl;
        roomNumber = OCEAN_VIEW_SUITE_MIN;
    } else if (roomType == 2) {
        cout << "Assigning a room in the Poolside Villa category..." << endl;
        roomNumber = POOLSIDE_VILLA_MIN;
    } else if (roomType == 3) {
        cout << "Assigning a room in the Garden View Room category..." << endl;
        roomNumber = GARDEN_VIEW_ROOM_MIN;
    } else {
        cout << "Invalid room type selected. Please try again." << endl;
        return 0;
    }

    bool roomAssigned = false;

    while (!roomAssigned) {
        if (roomType == 1 && roomNumber <= OCEAN_VIEW_SUITE_MAX) {
            roomAssigned = true;
        } else if (roomType == 2 && roomNumber <= POOLSIDE_VILLA_MAX) {
            roomAssigned = true;
        } else if (roomType == 3 && roomNumber <= GARDEN_VIEW_ROOM_MAX) {
            roomAssigned = true;
        } else {
            std::cout << "No more available rooms in the selected category." << std::endl;
            std::cout << "Would you like to be assigned a room in another category? (yes/no): ";
            std::string response;
            std::cin >> response;

            if (response == "yes") {
                cout << "Please select another room type:" << endl;
                cout << "1. Ocean View Suite" << endl;
                cout << "2. Poolside Villa" << endl;
                cout << "3. Garden View Room" << endl;
                cin >> roomType;
                roomNumber = 1; // Reset room number counter
            } else {
                cout << "Thank you for considering our hotel. Have a great day!" << std::endl;
                return 0;
            }
        }

        if (roomAssigned) {
            cout << "Room assigned successfully!" << endl;
            cout << "Reservation Confirmation:" << endl;
            cout << "Name: " << name << endl;
            cout << "Gender: " << gender << endl;
            cout << "Age: " << age << endl;
            cout << "Reservation Code: " << reservationCode << endl;
            cout << "Room Number: " << roomNumber << endl;

            // Additional features can be implemented here

            break;
        }

        roomNumber++;
    }

    return 0;
}
