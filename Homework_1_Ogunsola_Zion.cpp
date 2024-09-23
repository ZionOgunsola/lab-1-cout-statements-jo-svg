//Zion Ogunsola
//Homework 1
//9/23/2024

#include <iostream>
#include <string>
using namespace std; 

int main()
{
    double durationMinutes;
    double weightKg;
    double metWalkingSlowly = 2;
    double metWalkingQuickly= 3;
    double metJogging= 8.8;
   

 
    cout << "Enter the duration of exercise in minutes" ;
    cin >> durationMinutes ;

    cout<< "Enter your weight in kilograms";
    cin >> weightKg ;

    double caloriesBurnedSlow = durationMinutes * (metWalkingSlowly * 3.5 * weightKg) / 200;
    double caloriesBurnedQuick = durationMinutes * (metWalkingQuickly * 3.5 * weightKg) / 200;
    double caloriesBurnedJog = durationMinutes * (metJogging * 3.5 * weightKg) / 200;

    cout << "Calories burned while walking slowly: "<< caloriesBurnedSlow <<endl ; 
    cout << "Calories burned while walking quickly: " << caloriesBurnedQuick <<endl ;
    cout << "Calories burned while jogging:" <<caloriesBurnedJog <<endl ;


    return 0;
}