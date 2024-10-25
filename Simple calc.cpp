#include <iostream>
#include<cmath>
#include<string>


using namespace std;



int main()
{

    int num1, num2, option;
    int sum, mul, div, sub;
    int count = 0;
    char choice;

    do {
        cout << "Enter the first number: " << endl;
        cin >> num1;
        cout << "Enter the second number: " << endl;
        cin >> num2;


        if (num1 > 0 && num2 > 0) {




            cout << "You have entered  positive intergers:" << num1 << " & " << num2 << endl;
            cout << endl;
            cout << "Choose an option: " << endl;
            cout << "1.Addition" << endl;
            cout << "2.Subtraction" << endl;
            cout << "3.Multiplication" << endl;
            cout << "4.Division" << endl;
            cin >> option;

            if (option == 1) {

                sum = num1 + num2;
                cout << "The sum : " << sum << endl;


            }
            else if (option == 2) {
                sub = num1 - num2;
                cout << " Num1 -Num2 = : " << sub << endl;
            }
            else if (option == 3) {

                mul = num1 * num2;
                cout << " Num1 * Num2 = : " << mul << endl;
            }
            else if (option == 4) {

                div = num1 / num2;
                cout << " Num1 / Num2 = : " << div << endl;
            }

        }
        else {

            cout << "ONLY POSITIVE INTERGERS!!" << endl;
        }

        cout << "Would you like to Continue? (Y/N)" << endl;
        cin >> choice;




    } while (choice == 'Y' || choice == 'y');

    cout << "The End" << endl;





    return 0;
    system("pause");

}



