// Assignment2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void DisplayArea(double area){
    cout << "The area is " << area << "\n";
}
//calculate area
double CalculateArea(double length, double width) {
    return length * width;
}

//get width
int GetWidthFromUser() {
    int width;
    cout << "Enter Rectangle Width: ";
    cin >> width;
    return width;
}


// get length
int GetLengthFromUser() {
    int length;
    cout << "Enter Rectangle Length: ";
    cin >> length;
    return length;
}


int main()
{
    //one liner, for the win
    DisplayArea(CalculateArea(GetLengthFromUser(), GetWidthFromUser()));
}