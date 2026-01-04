#include <iostream>
#include <random>
using namespace std;

int main() {
    // 1. Get a seed
    random_device rd; 

    // 2. Initialize the engine with that seed
    mt19937 gen(rd()); 

    // 3. Set your range [min, max]
    uniform_int_distribution<> distr(1, 100); 

    int randNum = distr(gen);
    int count = 0;
    int guess;
    while (true){
        cout << "Enter number : " << endl;
        cin>>guess;
        if (guess>randNum){
            cout<<"Too high! Try again."<<endl;
            count++;
        }
        else if (guess<randNum){
            cout<<"Too low! Try again."<<endl;
            count++;
        }
        else {
            cout<<"Congratulations! You guessed the number "<<randNum<<" in "<<count+1<<" attempts."<<endl;
            break;
        }
    }
    return 0;
}
