#include <iostream>
#include "number_checker.h"
#include "gretest_number.h"
#include "even_odd.h"
#include "string_length.h"
#include "toggle_string.h"
#include "vowelCount.h"
#include "remove_vowels.h"

using namespace std;

int main()
{
    int choice;

    cout << "Choose the problem you want to solve: " << endl;

    cout << "1. Check the num if it is positive or not" << endl;
    cout << "2. Find the greatest number in given three numbers" << endl;
    cout << "3. Check the input number is Even or Odd "<< endl;
    cout << "4. Find the given string length without using strlen function " << endl;
    cout << "5. Toggle the characters in the given string " << endl;
    cout << "6. Count the number of vowels present in given text " << endl;
    cout << "7. Remove the vowels from the string " << endl;

    cout << "Enter your choice" << endl;
    cin >> choice;

    switch(choice){

    case 1:{
        cout << "Enter a number to check if it is positive or negative number" << endl;
        int num;
        cin >> num;

        if (isPositive(num)){
            cout << num << " is a positive number" << endl;
        }
        else{
            cout << num << " is not a positive number" << endl;
        }
        break;
    }

    case 2:{
        int num1, num2, num3;

        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;

        int greatest = findGreatest(num1, num2, num3);

        cout << "The Greatest number is: " << greatest << endl;

        break;
    }

    case 3:{
        int num;
        cout << "Enter the number: ";
        cin >> num;

        if(isEvenOdd(num)){
            cout << num << " is Even number" << endl;
        }
        else{
            cout << num << " is Odd number" << endl;
        }
        break;
    }

    case 4:{
        string usr_inp;
        cout << "Enter the string: ";
        cin >> usr_inp;

        int string_length = str_len(usr_inp);

        cout << "The length of the given string is " << string_length << endl;

        break;
    }

    case 5:{
        string usr_inp;
        cout << "Enter the string to toggle: ";
        cin >> usr_inp;

        string toggled_str = toggle(usr_inp);

        cout << "The toggled string is " << toggled_str << endl;

        break;
    }
    case 6:{
        string usr_inp;
        cout << "Enter the input string: ";
        cin >> usr_inp;

        int vowels = vowel_count(usr_inp);

        cout << "Number of vowels in given string is " << vowels << endl;

        break;
    }
    case 7:{
        string usr_inp;
        cout << "Enter the input string: ";
        cin >> usr_inp;

        string out_string = remove_vowels(usr_inp);

        cout << "output string without vowels is " << out_string << endl;

        break;
    }

    default:
        cout << "Sorry I don't have a service to solve your problem" << endl;
        break;

    };

    return 0;
}
