/*
 * vigenere.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Alexandria Balde and Teresa Billecke
 * abalde and tbilleck
 *
 * EECS 183: Project 3
 * Fall 2023
 *
 * A cipher using a keyword to shift alphabet letters
 */

#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include <iostream>
#include <cctype>

string vigenereCipher(string original, string keyword, bool encrypt) {
    string alphaOnlyKeyword;
    string newStr;
    int shift;
    int increment = 0;
    
    // Creating keyword with only uppercase alphabet characters
    alphaOnlyKeyword = removeNonAlphas(keyword);
    for (int i = 0; i < alphaOnlyKeyword.size(); i++) {
        alphaOnlyKeyword[i] = toupper(alphaOnlyKeyword[i]);
    }

    for (int i = 0; i < original.size(); i++) {
        if (isdigit(original.at(i)) || isspace(original.at(i))) {
            newStr.at(i) = original.at(i);
            break;
        }

        if (increment > alphaOnlyKeyword.size()) {
            increment -= alphaOnlyKeyword.size();
        }

        // TODO fix shift when encrypt is false
        if (encrypt) {
            shift = alphaOnlyKeyword.at(increment) - 'A';
        }
        else {
            shift = 'A' - alphaOnlyKeyword.at(increment);
        }
        
        newStr += shiftAlphaCharacter(original.at(i), shift);

        if (!isupper(original.at(i))) {
            newStr.at(i) = tolower(newStr.at(i));
        }

        increment++;
    }


    return newStr;
};