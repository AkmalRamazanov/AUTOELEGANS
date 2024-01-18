#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

// Base class for storing and displaying information
class Information {
protected:
    string data;

public:
    void display(const string& message) const {
        cout << message << data << endl;
    }

    virtual void input(const string& prompt) = 0;
};

// Classes for different types of information
class Target : public Information {
public:
    void input(const string& prompt) override {
        cout << prompt;
        cin >> data;
    }
};

class Cargo : public Information {
public:
    void input(const string& prompt) override {
        cout << prompt;
        cin >> data;
    }
};

class Truck : public Information {
public:
    void input(const string& prompt) override {
        cout << prompt;
        cin >> data;
    }
};

// Class for generating a unique truck number
class TruckNum {
private:
    int number;

public:
    TruckNum() {
        number = rand();
    }

    void display() const {
        cout << "Truck Number: " << number << endl;
    }
};

int main() {
    setlocale(LC_ALL, "English");
    srand(time(0));

    Target target;
    target.input("Enter the target of transportation: ");

    Cargo cargo;
    cargo.input("Enter cargo information: ");

    Truck truck;
    truck.input("Enter truck characteristics: ");

    TruckNum truckNum;
    truckNum.display();

    cout << "Your order has been accepted!" << endl;

    return 0;
}