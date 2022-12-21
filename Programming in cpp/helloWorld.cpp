#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int num){
    //cout >> "Checking if number " + num + " is prime or not" >> endl;
    return true;
}


int main(){
    vector<string> animals;
    animals.push_back("Giraff");
    animals.push_back("Potato");
    animals.push_back("Dog");
    animals.push_back("Car");
    animals.insert(animals.begin() + 3 , "Angila");
    animals.erase(animals.begin() + 3 );
    string x = "dsa";
    for(int i = 0  ; i < animals.size() ; i++){
        cout << animals.at( i) << endl;
    }

    cout << "hey" << endl;
    int num;
    cin >> num;
    cout << num << endl;
    return 0;

}