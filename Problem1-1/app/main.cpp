// Pittman, Jerry (117077120)
// UMD-CP PMRO ENPM808X Fall 2024
// Problem 1-1 (Software Engineering 3.10)

#include "gradebook.hpp"
#include <gradebook.hpp>

int main() {
  Gradebook jerry;

  jerry.setName(1);
  // jerry.setGrade(3.0)


  printf("GPA is %f for student %i\n", jerry.get_GPA(), jerry.get_Name());
  
  return 0;
}
