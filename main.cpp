#include <iostream>
using namespace std;

int MainMenu(){
	int val1, val2, choice;
    char continueChoice = 'y';
			cout
                << "~~~ Please Select for Math Solution to use ~~~\n"
                << "1. Add\n"
                << "2. Subtract\n"
                << "3. Multipliction\n"
                << "4. Division\n"
                << "\n"
                << "Enter Choice: ";
            cin >> choice;
			return choice;
            system("cls");	
}

int add (int x, int y){
	int sum = x + y;
	return sum;
}
int subtract (int x, int y){
	int difference = x - y;
	return difference;
}
int multiplication (int x, int y){
	int product = x * y;
	return product;
}
int division (int x, int y){
	int quotient = x / y;
	return quotient;
}

int main()
{
    int val1, val2, choice;
    char continueChoice = 'y';
    cout << "Please input value 1:";
    cin >> val1;
    cout << "Please input value 2:";
    cin >> val2;

    do
    {
        do
        {

            switch (MainMenu())
            {
            case 1:
                cout << "The sum is: " <<add(val1, val2);
                break;
            case 2:
                cout << "The difference is: " <<subtract(val1, val2);
                break;
            case 3:
                cout << "The product is: " <<multiplication(val1, val2);
                break;
            case 4:
                cout << "The quotient is: " <<division(val1, val2);
                break;
            default:
                cout << "User Input Incorrect\n\n";
                break;
            }
        } while (choice < 0 || choice > 5);

        cout << "\nDo you want to Contninue [y/n]:";
        cin >> continueChoice;

        system("cls");

    } while (continueChoice == 'y');
}
