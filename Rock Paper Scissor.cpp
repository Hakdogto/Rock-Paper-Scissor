#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char playerchoice = 'g';
    //loop for the entire program
    do{
        int max = 3;
        int bestof = 0;
        char choices[max] = {'r','p','s'};
        srand (time(NULL));

        cout << "_____Rock Paper Scissor Game_____\n---------------------------------\n\n";
        //Makes sure that the only input is even numbers
        do{
            cout << "Enter Best of(odd numbers only): ";
            cin >> bestof;
            if (bestof % 2 == 0)
            {
                cout << "Even number. Please enter an odd number." << endl;
            }
        } while (bestof % 2 == 0);

        int playerscore = 0;
        int aiscore = 0;

        cout << "(r) for rock, (p) for paper, (s) for scissors\n";
        cout << "---------------------------------------------";
        //loop for the rock paper scissor
        for(int i = 0; i < bestof; i++)
        {
            char aichoice = choices[rand() % max];
            cout << "\nEnter Choice: ";
            cin >> playerchoice;
            cin.ignore();
            cout << "AI chose: " <<aichoice << endl;

            switch(tolower(playerchoice))
                {
                case 'r':
                        if(aichoice == 'p'){
                            cout << "You lost!\n";
                            aiscore++;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;

                        } else if(aichoice == 's'){
                            cout << "You won!\n";
                            playerscore++;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        } else {
                            cout << "Draw\n";
                            i--;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        }
                break;
                case 'p':
                        if(aichoice == 's'){
                            cout << "You lost!\n";
                            aiscore++;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        } else if(aichoice == 'r'){
                            cout << "You won!\n";
                            playerscore++;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        } else {
                            cout << "Draw\n";
                            i--;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        }
                break;
                case 's':
                        if(aichoice == 'r'){
                            cout << "You lost!\n";
                            aiscore++;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        } else if(aichoice == 'p'){
                            cout << "You won!\n";
                            playerscore++;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        } else {
                            cout << "Draw\n";
                            i--;
                            cout << "Score: " << playerscore << ":" << aiscore << endl;
                        }
                break;
                default:
                i--;
                cout <<
                "Invalid input...\n";
                }

                if(playerscore == bestof/2+1)
                {
                    cout << "Congratulations!\n\n";
                    i = bestof;
                } else if(aiscore == bestof/2+1){
                    cout << "\nBetter Luck Next Time!\n\n";
                    i = bestof;
                }
        }
        cout << "Another game?(y/n) \n";
        cin >> playerchoice;
        playerchoice = tolower(playerchoice);
        //asks if the user wants to play again
        while(true)
        {
            if (playerchoice != 'y' && playerchoice != 'n') {
            cout << "Invalid input. Please enter 'y' or 'y'." << endl;
            cin >> playerchoice;
            playerchoice = tolower(playerchoice);
            } else {
                break;
            }
        }
    cout << "---------------------------------";
    cout << "\n\n\n\n\n";
    system("cls");
    }while(playerchoice != 'n');
    cout << "Program Ended";
    return 0;
}
