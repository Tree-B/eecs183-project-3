/*
 * test.cpp
 * Project UID e98fd45ccce9d7195e89e6171a5451f2
 *
 * Alexandria Balde and Teresa Billecke
 * abalde and tbilleck
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
void testCharToInt();
void testVigenereCipher();

void startTests() {
    testShiftAlphaCharacter();

    //TODO write other test functions
    testToUpperCase();
    testRemoveNonAlphas();
    testRemoveDuplicates();
    testCharToInt();
    testVigenereCipher();


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
     return;
}

void testRemoveDuplicates() {
    cout << endl << "Now testing function removeDuplicates()" << endl;
    cout << "Expected: \"ABC\", Actual: \"" 
         << removeDuplicate("AABBBCCCC") << "\"" << endl;
    cout << "Expected: \"AMISBET\", Actual: \"" 
         << removeDuplicate("AMISBESTTIME") << "\"" << endl;
    cout << "Expected: \"ECS183\", Actual: \"" << removeDuplicate("EECS183") 
         << "\"" << endl;
    cout << "Expected: \"1234\", Actual: \"" << removeDuplicate("1223334444")
         << "\"" << endl;
    cout << "Expected: \"1A2\", Actual: \"" << removeDuplicate("1A2A")
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

void testCharToInt() {
    cout << endl << "Now testing function charToInt()" << endl;
    cout << "Expected: '0', Actual: '" << charToInt('0') << "'" << endl;
    cout << "Expected: '2', Actual: '" << charToInt('2') << "'" << endl;
    cout << "Expected: '5', Actual: '" << charToInt('5') << "'" << endl;
    cout << "Expected: '9', Actual: '" << charToInt('9') << "'" << endl;
    return;
}

void testVigenereCipher() {
    cout << endl << "Now testing function vigenereCipher()" << endl;
    cout << "Expected: \"QBY1 GPQ2 HBEXG3\", Actual: \"" 
         << vigenereCipher("ONE1 TWO2 THREE3", "count", true) << "\"" << endl;
    cout << "Expected: \"A.M. is best time\", Actual: \"" 
         << vigenereCipher("M.A. cj omfz fwgv", "mourning", false) << "\"" << endl;
    cout << "Expected: \"92 D/H = Crqtywi wcc vo jovrxi\", Actual: \"" 
         << vigenereCipher("92 M/H = Another way to swerve", "4RaceCars", true) << "\"" << endl;
    cout << "Expected: \"A little bit O'Soul\", Actual: \"" 
         << vigenereCipher("L tvwtdp jvw O'Kzcy", "lindaS3", false) << "\"" << endl;
    return;
}