#include <iostream>
using namespace std;

class car
{
private:
    string OwnerName;
    int carAge;
    double insurance;

public:
    car(string name, int age)
    {
        OwnerName = name;
        carAge = age;
        insurance = calculator();
    }
    double calculator()
    {
        double base = 1000.0;
        double ageFactor = carAge >= 5 ? 2 : 1.5;
        return ageFactor * base;
    }
    displayInsurance()
    {
        cout << "Name of Owner:" << OwnerName << endl;
        cout << "Age of Car:" << carAge << "years" << endl;
        cout << "Insurance Premium: $" << insurance << endl;
    }
};
int main()
{
    string name;
    int age;
    cout << "Enter the Owner Name:";
    cin >> name;
    cout << "Enter the age of car:";
    cin >> age;
    car car(name, age);
    cout << "----Insurance Premium Information of the car----" << endl
         << endl;
    car.displayInsurance();
}