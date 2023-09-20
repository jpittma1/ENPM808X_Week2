// Pittman, Jerry (117077120)
// UMD-CP PMRO Fall 2024
// Problem 1-2: calculate the average of the numbers stored in a STL vector<double>.

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

/**
 * @brief Get the Average object
 * 
 * @param v 
 * @return double 
 */
double getAverage(std::vector<double> const& v) {
  double sumVals = 0;

  for (int i=0; i<=v.size(); i++) {
    sumVals +=v[i];
  }

  return sumVals/v.size();
}

int main() {
  std::vector<double> v1 = {5, 3, 8, 7, 9, 10, 20, 6, 4, 30};

  double averageVals = getAverage(v1);

  cout << "Average is " << averageVals << std::endl;
  return 0;
}
