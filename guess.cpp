#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int nb_toguess = 0;
    int nb_try, tries = 1;
    int n;
    int retry_bol = 0;
    srand(time(0));

    cout << "\n-------------------- Number Guessing Game --------------------\n";
    cout << "\n1. Start the Game";
    cout << "\n2.Exit game";
    cout << "\nChoice : ";
    cin >> retry_bol;


    do {

        cout << "\n-------------------------------------------------- \n";

        cout << "Guess the Number between 1 & n \n";
        cout << "Enter n : ";
        cin >> n;

	    nb_toguess = rand() % n + 1; // Random number between 1 and namespace
        cout << "\n Game Started \n";

        do {
            cout << "\ntry : " << tries << "\n";
            cout << "Enter The Number : " << std::flush;

            cin >> nb_try;

            if (nb_try < nb_toguess) 
            {cout << "Too low, the number is > \n";}
            else if (nb_try > nb_toguess) 
            {cout << "too high, the number is < \n";}
            
            tries = tries + 1;

        } while (nb_try != nb_toguess);

        cout << "\n------------------------------------------------";
        cout << "\nCongratulations ! you find the right number ( " << nb_toguess << " ) In "<< tries - 1 << " tries." << endl;


        cout << "\n \n";
        cout << "\n1. Restart the Game";
        cout << "\n2.Exit game";
        cout << "\nChoice : ";
        cin >> retry_bol;

        if (retry_bol == 1) tries = 0; 

    }while(retry_bol == 1);

    
    return 0;
}
