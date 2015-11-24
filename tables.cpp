/*
 * tables.cpp
 *
 *  Created on: 8 lis 2015
 *      Author: damian
 */

#include <iostream>

using namespace std;

void changeThirdValue(int some_array[]);

void displayArrayElemnts(int some_array[]) {

    cout << "\nDisplaying new array: " << endl;
    for (int i = 0; i < 4; i++) {
        cout << some_array[i] << endl;
    }
    cout << "End of array" << endl;
}

void initializeArray() {
    int some_array[4] = {2, 3, 4, 5};
    displayArrayElemnts(some_array);

    int other_array[4] = {1, 3};
    displayArrayElemnts(other_array);

    int new_array[] = {1, 3, 3, 4};
    displayArrayElemnts(new_array);

    // displayArrayElements iterates foru elements, so it will display some garbage
    int too_short_array[2] = {1, 3};
    displayArrayElemnts(too_short_array);
}

void playingWithArrays() {
    int some_array[] = {0, 1, 2, 3, 4};

    cout << "Given that \"some_array[] = {0, 1, 2, 3, 4}\"" << endl << endl;
    cout << "some_array + 3 = " << some_array + 3 << endl;
    cout << "&some_array[3] = " << &some_array[3] << endl;
    cout << "some_array[3] = " << some_array[3] << endl;

    char tabl[10] = {"ABCD"};
    tabl[4] = 'd';

    cout << tabl;
}

void changeArrayValueInAnotherFunction() {
    int some_array[] = {1, 2, 3};
    cout << "Third value is: " << some_array[2] << endl;

    changeThirdValue(some_array);

    cout << "Third value is: " << some_array[2] << endl;
}

void changeThirdValue(int some_array[]) {
    cout << "changing arrays third value in inner function" << endl;
    some_array[2] = 10;
}

void saveStringsIntoArrays() {
    char sentence[80] = {"This is a sentence"};

    cout << sentence << endl;

    cout << sentence[18] << endl;
}

void twoDimensinalArray() {
    int some_array[4][2] = {10, 20, 30, 40, 50, 60, 70, 80};

    cout << some_array[0][0] << endl;
    cout << some_array[3][1] << endl;
}
