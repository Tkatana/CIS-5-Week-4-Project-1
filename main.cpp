

// Project 1 — Tyler Quintana
// CIS 5 Week 04 · Student card

#include <iostream>
#include <string>

int main() {
  const int CURRENT_YEAR = 2026;
  const int CREDITS_REQ = 60;
  std::string first = "";
  std::string last = "";
  int age = 0;
  int credits = 0;
  double gpa = 0.0;
  

  std::cout << "Please enter your info. \n";
  std::cout << "First name: ";    std::cin >> first;
  std::cout << "Last name: ";     std::cin >> last;
  std::cout << "Age: ";            std::cin >> age;
  std::cout << "Credits for your current term: ";        std::cin >> credits;
  std::cout << "GPA: ";                                   std::cin >> gpa;
  int credits_left = CREDITS_REQ - credits;


  std::cout << "-Student Information- \n";
   std::cout << "Name: " << first << " "<< last << "\n";
   std::cout << "Age: " << age << "\n";
   std::cout << "Term Credits: " << credits << "\n";
   std::cout << "GPA: " << gpa << "\n";
   std::cout << "Credits until graduation: " << credits_left << "\n";
 


  return 0;
}
