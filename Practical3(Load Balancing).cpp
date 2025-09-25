#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        int totalServers, requestID;
        cout << "Enter total servers available: ";
        cin >> totalServers;

        cout << "Provide the request ID: ";
        cin >> requestID;

        int result = requestID % totalServers;
        cout << "Server handling this request: " << result << endl;

        cout << "\nPress 'n' or 'N' to stop, or any other key to continue: ";
        cin >> choice;

    } while (choice != 'n' && choice != 'N');

    return 0;
}



