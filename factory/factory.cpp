#include <string.h>
#include <iostream>

using namespace std;

class Coffee {

    protected:
	string _type;

    public:
	Coffee () {
	}

	string getType() {
	    return _type;
	}
};

class Espresso : public Coffee {
    public:
	Espresso () : Coffee () {
	    this->_type = "Espresso";
	    cout << endl << "Making espresso" << endl;
	}
};

class Capuccino : public Coffee {
    public:
	Capuccino () : Coffee () {
	    this->_type = "Capuccino";
	    cout << endl << "Making capuccino" << endl;
	}
};

class CoffeeMakerFactory {
    private:
	Coffee* _coffee;

    public:
	Coffee* getCoffee() {
	    int choice;

	    cout << "Select coffee" << endl;
	    cin >> choice;
	    
	    switch (choice) {
		case 1:
		    return new Espresso;
		case 2:
		    return new Capuccino;
		default:
		    cout << "Bitch ass nigga" << endl;
		    return NULL;
	    }
	}
};

int main () {
    CoffeeMakerFactory coffeeMachine;
    Coffee *cup;
    cup = coffeeMachine.getCoffee();
    cout << endl << "You have asked for: " << cup->getType() << endl;
    return 0;
}
