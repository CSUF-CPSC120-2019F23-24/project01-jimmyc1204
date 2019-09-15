// Name: Jimmy Cruz
// This program calculates and displays business expenses.
#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  double days, hotel, meal, total;

  std::cout << "Welcome to the Business Trip Tracker!" << '\n';
  std::cout << "" << '\n';

  std::string location;
  std::cout << "What is the business trip location?" << '\n';
  std::cin >> location;

  std::cout << "How many days will the trip take?" << '\n';
  std::cin >> days;

  std::cout << "What is the hotel expense?" << '\n';
  std::cin >> hotel;

  std::cout << "What is the total meal expense?" << '\n';
  std::cin >> meal;

  //calculate
  total = hotel + meal;

  //display
  //column 1
  std::cout << std::setw(0) << "Location"
  <<std::setw(5) << "Days"
  <<std::setw(7) << "Hotel"
  <<std::setw(9) << "Meal"
  <<std::setw(10) << "Total" << '\n';

  //column 2
  std::cout << std::setw(0) << location
  <<std::setw(5) << days
  <<std::setw(10) << hotel
  <<std::setw(9) << meal
  <<std::setw(10) << total << '\n';

  return 0;
}
