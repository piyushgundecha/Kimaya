#include<iostream>
using namespace std;


    class Game{
        public:

            int num ;
            int guess;

            Game(){
                srand(time(0));
                num = rand() %101;

            }

            int take_input(){
                cout << "Guess a number: ";
                cin >> guess;
                if (guess < 0 || guess > 100)
                {
                    cout << "Bhai number 0 se 100 ke beech dal " << endl;
                    return take_input();
                }
                return guess;
            }

            bool check_guess(){
                if(guess < num){
                    cout<<"Too low!"<<endl;
                    return false;
                    }
                else if(guess > num){
                    cout<<"Too high!"<<endl;
                    return false;
                    }
                else{
                    cout<<"You won!"<<endl;
                    return true;
                    
                    }
           
                            
            }
    };
    int main(){
        Game g1;
        while(true){
            g1.take_input();
            if(g1.check_guess()){
                break;
                }
        }

        return 0;

}