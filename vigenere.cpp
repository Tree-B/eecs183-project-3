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

string vigenereCipher(string original, string keyword, bool encrypt) {
    string alphaOnlyKeyword;
    string newStr;
    int increment = 0;
    
    // Manipulating keyword
    alphaOnlyKeyword = removeNonAlphas(keyword);
    for (int i = 0; i < alphaOnlyKeyword.size(); i++) {
        alphaOnlyKeyword[i] = toupper(alphaOnlyKeyword[i]);
    }

    int key[alphaOnlyKeyword.size()] = {};

    for (int i = 0; i < alphaOnlyKeyword.size(); i++) {
        for (int j = 0; j < ALNUM.size() - 10; j++) {
            if (alphaOnlyKeyword.at(i) == ALNUM.at(j)) {
                key[i] = j;
                break;
            }
        }
    }

    for (int i = 0; i < original.size(); i++) {
        if (isdigit(original.at(i)) || isspace(original.at(i))) {
            break;
        }

        if (increment > alphaOnlyKeyword.size()) {
            increment -= alphaOnlyKeyword.size();
        }
        
        newStr += shiftAlphaCharacter(original.at(i), key[increment]);

        if (!isupper(original.at(i))) {
            newStr.at(i) = tolower(newStr.at(i));
        }

        increment++;
    }


    return newStr;
};