// calculation of speed,frequency and time using function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double speed(double distance, double time) {
    return distance / time;
}
double frequency(double time) {
    return 1 / time;
}



int main(){
    double distance, time;
   
    cout << "Enter your distance in meters" << endl;
    cin>>distance;
    cout << "Enter your time in seconds" << endl;
    cin >> time;
    
    cout << "The speed is equal  to : " << speed (distance,time) << endl;
    cout << "The frequency is equal  to : " << frequency (time) << endl;
    

    return 0;


    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
