// Pittman, Jerry (117077120)
// UMD-CP PMRO Fall 2024
// Problem 1-4: Track Grades from file

#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <fstream>
#include <sstream>

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
      // std::cout << "Sum is " << sumVals << std::endl;
  }

 

  return sumVals/v.size();
}

int main() {
  std::vector<std::string> studentNames;
  std::vector<double> studentGrades;

 
  vector<vector<string>> content;
  vector<string> row;
  string line, word;
  
  //---Get File Name from User----
  string fname;
  cout<<"Enter the file name: ";
  cin >>fname;
  // test.csv is one I generated for testing.

   //--Read the file; save the data
  fstream file(fname, ios::in);
  if (file.is_open()) {
    while(getline(file, line)){
      row.clear();

      stringstream str(line);

      while (getline(str,word,','))
        row.push_back(word);
      
      content.push_back(row);
    }

  }
  else
    cout << "Could not open the file\n" << endl;

  // Sort Data into Vectors
  for (int i=0; i<content.size(); i++) {
    std::vector<double> v1;

    for (int j=0; j<content[i].size(); j++) {
      double num;
      // Get student name strings
      if (j==0) {
        string currentName = content[i][j];
        studentNames.push_back(currentName);
      }
      
      // get grade values from each column in file
      // cout << "content[i][j] is " << content[i][j]<<endl;
      num = std::atof(content[i][j].c_str());
      // cout << "num is " << num;
      v1.push_back(num);
    }

    double averageVals = getAverage(v1);
    studentGrades.push_back(averageVals);

    if (i!=0){
      cout << "Student: " << studentNames[i] << " Has average of " << studentGrades[i] << endl;
    }
  }

  return 0;
}
