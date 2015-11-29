#include <iostream>
#include <exception>

using namespace std;

void simpleException();
bool isMoreThanZero(int number);
void exceptionClass();

class MyException : public exception {
    const char * msg;
    MyException() : msg("MyException") {};
public:
    MyException(const char *s) throw() : msg(s) {}
    const char * what() const throw() {return msg;}
};

void testExceptions() {
    cout << "### TESTING EXCEPTIONS ###" << endl;

    //simpleException();
    exceptionClass();
}

void simpleException() {
    cout << endl << "# Simple Exception" << endl;
    try {
        int someNumber = 0;
        cout << isMoreThanZero(someNumber) << endl;
    } catch (exception & e) {
        cerr << "Exception thrown..." << endl;
    }
}

bool isMoreThanZero(int number) {
    if (!number) {
        throw exception();
    }

    return true;
}

void exceptionClass() {
    cout << endl << "# Exception Class" << endl;

    try {
        throw MyException("This is my Exception!");
    } catch (exception & e) {
        cerr << "catched exception: " << e.what() << endl;
    }
}
