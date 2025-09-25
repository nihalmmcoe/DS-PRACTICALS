#include <iostream>
#include <string>
using namespace std;

class Queue {
    string queue[10];
    int front, rear;
public:
    Queue() {
        front = 0;
        rear = -1;
    }
    void enqueue(string customer) {
        if (rear == 9) {  
            cout << "Queue Overflow! Cannot add more customers." << endl;
        } else {
            rear++;
            queue[rear] = customer;
            cout << customer << " joined the queue." << endl;
        }
    }
    void dequeue() {
        if (front > rear) {  
            cout << "Queue Underflow! No customers left." << endl;
        } else {
            cout << queue[front] << " has been served and removed from the queue." << endl;
            front++;
        }
    }
    void display() {
        if (front > rear) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue Status: ";
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    int n;
    string name;

    cout << "Enter number of customers (max 10): ";
    cin >> n;

    if (n > 10) {
        cout << "Error! Maximum capacity is 10 customers." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter customer name: ";
        cin >> name;
        q.enqueue(name);
    }

    q.display();

    cout << "\n--- Serving Customers ---" << endl;
    for (int i = 0; i < n; i++) {
        q.dequeue();
        q.display();
    }

    return 0;
}

