/*
 * test.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Alexandria Balde
 * abalde
 *
 * EECS 183: Project 3
 * Fall 2023
 *
 * <#description#>
 */

#include "utility.h"
#include "caesar.h"
#include "vigenere.h"
#include "polybius.h"
#include <iostream>
#include <string>

using namespace std;

void testShiftAlphaCharacter();
void testToUpperCase();
void testRemoveNonAlphas();
void testRemoveDuplicates();

void startTests() {
    testShiftAlphaCharacter();

    //TODO write other test functions
    testToUpperCase();
    testRemoveNonAlphas();
    testRemoveDuplicates();


    return;
}

void testToUpperCase() {
    cout << endl << "Now testing function toUpperCase()" << endl;
    cout << "Expected: \"ABCDE1\", Actual: \"" << toUpperCase("abcde1") 
         << "\"" << endl;
    cout << "Expected: \"1234@\", Actual: \"" << toUpperCase("1234@") 
         << "\"" << endl;
    cout << "Expected: \"AM = B3ST TIME\", Actual: \"" 
         << toUpperCase("AM = b3st time") << "\"" << endl;
    cout << "Expected: \"1& A2& A\", Actual: \"" << toUpperCase("1& a2& a")
         << "\"" << endl;
    return;
}

void testRemoveNonAlphas() {
    cout << endl << "Now testing function removeNonAlphas()" << endl;
    cout << "Expected: \"FunTimesOnly\", Actual: \"" 
         << removeNonAlphas("123Fun Times 456Only") << "\"" << endl;
    cout << "Expected: \"AMBSTTIME\", Actual: \"" 
         << removeNonAlphas("AM = B3ST TIME") << "\"" << endl;
    cout << "Expected: \"AA\", Actual: \"" << removeNonAlphas("1& A2& A") 
         << "\"" << endl;
    cout << "Expected: \"\", Actual: \"" << removeNonAlphas("1234@") 
         << "\"" << endl;
}

void testRemoveDuplicates() {
    cout << endl << "Now testing function removeDuplicates()" << endl;
    cout << "Expected: \"ECS183\", Actual: \"" << toUpperCase("EECS183") 
         << "\"" << endl;
    cout << "Expected: \"1234\", Actual: \"" << toUpperCase("1223334444")
         << "\"" << endl;
    cout << "Expected: \"AMISBET\", Actual: \"" 
         << toUpperCase("AMISBESTTIME") << "\"" << endl;
    cout << "Expected: \"1A2A\", Actual: \"" << toUpperCase("1A2A")
         << "\"" << endl;
    return;
}

void testShiftAlphaCharacter() {
    cout << endl << "Now testing function ShiftAlphaCharacter()" << endl;
    cout << "Expected: 'a', Actual: '" << shiftAlphaCharacter('a', 0) 
         << "'" << endl;
    cout << "Expected: 'b', Actual: '" << shiftAlphaCharacter('a', 1) 
         << "'" << endl;
    cout << "Expected: 'd', Actual: '" << shiftAlphaCharacter('b', 2) 
         << "'" << endl;
    return;
}
