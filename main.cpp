#include <iostream>
#include <ctime>
#include <string>



using namespace std;

struct card
{
    int digit1;
    int digit11;
    int digit2;
    int digit22;
    string mast;
    int player1;
    int player2;
};

int main()
{
    srand(time(0));

    card card1;



    while (true)
    {
        int over_game;
        int score1 = 0;
        int score2 = 0;
        cin >> over_game;
        if (over_game == 1)
        {
            cout << "Player 1: your digits is ";
            card1.digit1 = rand() % 10;
            card1.digit11 = rand() % 10;
            cout << card1.digit1 << "\t" << card1.digit11 << "\n\n";

            cout << "Player 2: your digits is ";
            card1.digit2 = rand() % 10;
            card1.digit22 = rand() % 10;
            cout << card1.digit2 << "\t" << card1.digit22 << "\n\n";
            
            int arr1[2];
            int arr2[2];
            arr1[0] = card1.digit1;
            arr1[1] = card1.digit11;

            arr2[0] = card1.digit2;
            arr2[1] = card1.digit22;

            int max1;
            int max2;

            

            if (arr1[0] > arr1[1])
            {
                max1 = arr1[0];
            }
            else if (arr1[1] > arr1[0])
            {
                max1 = arr1[1];
            }
            else {
                max1 = arr1[0];
            }


            if (arr2[0] > arr2[1])
            {
                max2 = arr2[0];
            }
            else if (arr2[1] > arr2[0]) 
            {
                max2 = arr2[1];
            }
            else {
                max2 = arr2[0];
            }

            if (max1 > max2)
            {
                cout << "Player 1 is won!!!" << endl;
                score1++;
            }

            if (max2 > max1)
            {
                cout << "Player 2 is won!!!" << endl;
                score2++;
            }

        }
        else if (over_game==0)
        {
            break;
        }
        cout << "Player 1: " << score1 << endl;
        cout << "Player 2: " << score2 << endl;

    }




}

