// TrialMathTutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

//Function Prototypes
void DisplayWelcome();
void DisplayMenu();
int RandomNumberGenerator(int x, int y);
bool DisplayEquation(int Rx, int Ry, char Operand, double Result);



int main()
{
    int choice;
    int Xvariable;
    int Yvariable;

    char repeat = 'Y';
    char Operand = '+';

    bool AnswerValidation;

    //Constants for menu choice
    const int Addition = 1,
        Subtraction = 2,
        Multiplicaiton = 3,
        Division = 4,
        ExitProgram = 5;

    DisplayWelcome();

        do {
            DisplayMenu();
            cin >> choice;

            while (choice < Addition || choice > ExitProgram) {
                cout << "Please enter a valid choice: ";
                cin >> choice;
            }

            if (choice != ExitProgram) {
                cout << "Please work out the following problem\n";
                cout << "Press ENTER once you have worked the problem out to check your answer\n";

                Xvariable = RandomNumberGenerator(0, 100);
                Yvariable = RandomNumberGenerator(0, 100);

            }

            bool correct = false;


            switch (choice) {
            case 1: {
                char Operand = '+';
                correct = DisplayEquation(Xvariable, Yvariable, Operand, (Xvariable + Yvariable));
            }
                break;
            case 2: {
                char Operand = '-';
                correct = DisplayEquation(Xvariable, Yvariable, Operand, (Xvariable - Yvariable));
                
            }
                break;
            case 3: {
                char Operand = 'x';
                correct = DisplayEquation(Xvariable, Yvariable, Operand, (Xvariable * Yvariable));
                
            }
                break;
            case 4: {
                char Operand = '/';
                correct = DisplayEquation(Xvariable, Yvariable, Operand, (Xvariable / Yvariable));
            
            }
                break;
            case 5: {
                cout << "Thank you for using Math Tutor V3.0";
                return 0;

            }

            }
            
            if (correct) {
                    cout << "Correct!\n";
            
            }
            else {
                
            }
        } 

        while (choice != ExitProgram);
        return 0;

        

      


}

//Displays version of math tutor and provides instructions only when program has been started
void DisplayWelcome() {
    cout << setw(40) << right << " " << "Welcome to Math Tutor V3.0!\n";
    cout << setw(25) << right << " " << "Read the menu and enter which operation you'd like to use.\n";

}


//Displays Menu to user
void DisplayMenu() {
  
    cout << setw(45) << right << " " << "1. Addition\n";
    cout << setw(45) << right << " " << "2. Subtraction\n";
    cout << setw(45) << right << " " << "3. Multiplication\n";
    cout << setw(45) << right << " " << "4. Division\n";
    cout << setw(45) << right << " " << "5. Exit Program\n";
    cout << setw(45) << right << " " << "Enter your option: ";
}

//Function to generate both Xvariable and Yvariable
int RandomNumberGenerator(int x, int y) {
    random_device R;
    uniform_int_distribution<int> randomInt(x, y);

    return randomInt(R);
}

//Displays Equation to user
bool DisplayEquation(int Rx, int Ry, char Operand, double Result) {
    int answer;
    
    cout << setw(45) << right << " " << setw(9) << right << Rx << endl;
    cout << setw(45) << right << " " << setw(9) << right << Ry << endl;
    cout << setw(45) << right << " " << Operand << "_________\n";
    cout << setw(52) << right << " " << setw(9) << right;
    cin >> answer;
    if (answer == Result) {
        return true;
    }
    else

        cout << "Incorrect!\nThe correct answer is " << Result << endl;
        return false;
        
}



