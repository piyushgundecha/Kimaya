#include <iostream>
#include <vector>
using namespace std;

int main()
{
    srand(time(0)); //random no every time program is loaded
    int num = rand() % 101; // between 0 to 100
    int guess;
    vector<int> guesses;
    

    do
    {
        cout << "Guess a no.      ";
        cin >> guess;

        if (guess < 0 || guess > 100)
        {
            cout << "Bhai number 0 se 100 ke beech dal " << endl;
            continue;
        }

        guesses.push_back(guess);

        if (guess == num)
        {
            cout << "JEET GAYE !!!!! after " << guesses.size() << " attempts " << endl
                 << endl;
            break;
        }

        if (guesses.size() == 1) // seperate case for 1st guess as no other guess to compare if warmer or colder
        {
            cout << "Nice start, agla no ? " << endl;
            continue;
        }

        if (guesses.size() > 1)
        {
            if ((abs(guess - num) > abs(guesses.at(guesses.size()-2) - num)) && guess > num)
            {
                cout << "Colder, go back " << endl;
            }

            else if ((abs(guess - num) > abs(guesses.at(guesses.size() -2) - num)) && guess < num)
            {
                cout << "Colder, go forward " << endl;
            }

            else if ((abs(guess - num) < abs(guesses.at(guesses.size() -2) - num)) && guess < num)
            {
                cout << "Warmer, go forward " << endl;
            }

            else if ((abs(guess - num) < abs(guesses.at(guesses.size() -2) - num)) && guess > num)
            {
                cout << "Warmer, go back " << endl;
            }

            else
            {
                cout << "You're at same distance from no. as from earlier guess" << endl;
            }
        }

    } while (guess != num);
}
