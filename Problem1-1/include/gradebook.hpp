/**
 * @file gradebook.hpp
 * @author Jerry Pittman, Jr. (jpittma1@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <vector>
#include <numeric>
#include <array>

using namespace std;

/**
 * @brief Class for a gradebook
 * 
 */
class Gradebook {
  double temp=0.0;
  double totalGPA=0.0;
  double grade[10]={3.0,3.2,4.0,2.5,3.5,4.0,3.5,3.0,3.2,3.75};

  public:
    double get_GPA();
    int get_Name(){return student;}
    void setName( int name ) { student = name; }

  private:
    int student;
};

/**
 * @brief Method for taking grades of Gradebook object and calculating GPA
 * 
 * @return double 
 */
double Gradebook :: get_GPA() {
  for (int i =0; i<10; i++){
    temp += grade[i];
    }
    totalGPA = temp/10.0;
    // cout << "CurrentGPA is: " << totalGPA << endl;
    return totalGPA;
}