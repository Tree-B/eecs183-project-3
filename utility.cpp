/*
 * utility.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Alexandria Balde and Teresa Billecke
 * abalde and tbilleck
 *
 * EECS 183: Project 3
 * Fall 2023
 *
 * Contains the helper functions used in the cyphers
 * and utilizes cctype library
 */

#include "utility.h"
#include <iostream>
#include <cctype>

string toUpperCase(string original) {
    string newStr = "";
    for (int i = 0; i < original.size(); i++) {
        newStr += toupper(original.at(i));
    }
    
    return newStr;
}

string removeNonAlphas(string original) {
    string newStr = "";
    for (int i = 0; i < original.size(); i++) {
        if (isalpha(original.at(i))) {
            newStr += original.at(i);
        }
    }
    
    return newStr;
}

string removeDuplicate(string original) {
    int ALNUMarray[ALNUM.size()] = {};
    string newStr = "";

    for (int i = 0; i < original.size(); i++) {
        for (int j = 0; j < ALNUM.size(); j++) {
            if (original.at(i) == ALNUM.at(j)) {
                ALNUMarray[i]++;
            }
        }

        if (ALNUMarray[i] <= 1) {
            newStr += original.at(i);
        }
    }

    return newStr;

    return "";
}

int charToInt(char original) {
    // TODO: implement
    
    // returning 0 to avoid compile error
    return 0;
}

////////////////////////////////////////////////////////////////////////////////
// Do not touch code below. ////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

void printGrid(const char grid[SIZE][SIZE]) {
    for (int col = 0; col < SIZE; col++) {
        cout << " ---";
    }
    cout << endl;
    for (int row = 0; row < SIZE; row++) {
        cout << "| ";
        for (int col = 0; col < SIZE; col++) {
            cout << string(1, grid[row][col]) + " | ";
        }
        cout << endl;
        for (int col = 0; col < SIZE; col++) {
            cout << " ---";
        }
        cout << endl;
    }
}
