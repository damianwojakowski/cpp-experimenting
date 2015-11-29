#include <iostream>

using namespace std;

void testFunctionTemplates();
template <typename Type> Type maxof (Type a, Type b);
void testClassTemplates();

template <typename T>
class SampleClass {
    T someValue;
public:
    void setValue(T value);
    T getValue();
};

template <typename T>
void SampleClass<T>::setValue(T value) {
    this->someValue = value;
}

template <typename T>
T SampleClass<T>::getValue() {
    return this->someValue;
}


void testTemplates() {
    cout << "### TESTING TEMPLATES ###" << endl << endl;

    //testFunctionTemplates();
    testClassTemplates();
}

void testFunctionTemplates() {
    cout << "# Testing Function Templates" << endl << endl;

    cout << maxof(7, 8) << endl;
    cout << maxof(17.01, 14.00) << endl;
    cout << maxof("dupa", "srupa") << endl;
    cout << maxof<string> ("dupa", "srupa") << endl;
}

template <typename Type> Type maxof (Type a, Type b) {
    cout << "The max of " << a << " and " << b << " is: ";
    return (a > b ? a : b);
}

void testClassTemplates() {
    cout << "# Testing Class Templates" << endl << endl;

    SampleClass<int> someValue;
    someValue.setValue(50);
    cout << "The value is: " << someValue.getValue() << endl;

    SampleClass<string> someValue2;
    someValue2.setValue("THIS STRING");
    cout << "The value is: " << someValue2.getValue() << endl;

}
