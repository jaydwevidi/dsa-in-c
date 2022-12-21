#include <string>
#include <iostream>
using namespace std;

class Student{
    public:
        int userID;
        string name;

        void printObject(){
            cout << "to String"  + to_string(this->userID) + this->name << endl;
        }

        void setDebt(int debt){
            this->debt = debt;
        }

        void printDebt(){
            cout << this->debt << endl;
        }

    private:
        int debt;    

        



};

int main(){
    Student jay;
    jay.userID = 45234;
    jay.name = "Jay";
    jay.setDebt(546);

    jay.printObject();
    jay.printDebt();
    string x = "ds";
    return 0;
}