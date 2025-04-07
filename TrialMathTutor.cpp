// TrialMathTutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

//Function Prototypes
void DisplayMenu();
int RandomNumberGenerator(int x, int y);
void DisplayEquation();



int main()
{
    int choice;
    int Xvariable;
    int Yvariable;

    //Constants for menu choice
    const int Addition = 1,
        Subtraction = 2,
        Multiplicaiton = 3,
        Division = 4,
        ExitProgram = 5;


    do {
        DisplayMenu();
        cin >> choice;

        while (choice < Addition || choice > ExitProgram) {
            cout << "Please enter a valid choice: ";
            cin >> choice;
        }

        if (choice != ExitProgram) {
            cout << "Please work out the following problem\n";

            Xvariable = RandomNumberGenerator(0, 100);
            Yvariable = RandomNumberGenerator(0, 100);

        }

         
        switch (choice) {
        case 1: DisplayEquation();
            break;
        case 2: DisplayEquation(Xvariable, Yvariable, Xvariable - Yvariable);
            break;
        case 3: DisplayEquation(Xvariable, Yvariable, Xvariable * Yvariable);
            break;
        case 4: DisplayEquation(Xvariable, Yvariable, Xvariable / Yvariable);
            break;
        }

        while (choice != ExitProgram);
        return 0;
    }

}

void DisplayMenu() {
    cout << "1.\n";
    cout << "2.\n";
    cout << "3.\n";
    cout << "4.\n";
    cout << "5.\n";
}

int RandomNumberGenerator(int x, int y) {
    random_device R;
    uniform_int_distribution<int> randomInt(x, y);

    return randomInt(R);
}

void DisplayEquation(int Rx, int Ry, int Result) {
    cout << setw(9) << right << Rx << endl;
    cout << setw(9) << right << Ry << endl;
    cout << "_________";
    cout << setw(9) << right << Result << endl;
}

