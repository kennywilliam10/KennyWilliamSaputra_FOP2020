#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
  ifstream input;
  input.open("LAB12/LAB12_employee.txt");

  const int SizeArray = 8;

  string employee_name[SizeArray];
  double employee_salary[SizeArray];

  int i = 0;
  double average_salary = 0;
  string line;

  while(getline(input, line)){
    int nameEndPos = line.find('$') - 1;
    employee_name[i] = line.substr(0, nameEndPos);
    int salaryStartPos = line.find('$') + 1;
    int salaryEndPos = line.find('\n');
    employee_salary[i] = stod(line.substr(salaryStartPos, salaryEndPos));
    ++i;
  }

  for(int i = 0; i < SizeArray; i++){
    cout << employee_name[i] << " = " << employee_salary[i] << "\n";
  }

  // Lowest
  string lowest_name = employee_name[0];
  double lowest = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] < lowest){
      lowest = employee_salary[i];
      lowest_name = employee_name[i];
    }
  }

  // Highest
  string highest_name = employee_name[0];
  double highest = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] > highest){
      highest = employee_salary[i];
      highest_name = employee_name[i];
    }
  }
  
  //average
  int sum = 0;
  for (int i = 0; i < SizeArray; i++){
    sum += employee_salary[i];
  }
  int average = sum / SizeArray;
  cout << "Average = " << average << '\n';
  
  // Under average 
  string ua_name = employee_name[0];
  double undave = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] < average){
      undave = employee_salary[i];
      ua_name = employee_name[i];
      cout << "Under Average = " << ua_name << " - " << undave << '\n';
    }
  }

  // Above average
  string aa_name = employee_name[0];
  double abave = employee_salary[0];
  for(int i = 0; i < SizeArray; i++){
    if (employee_salary[i] > average){
      abave = employee_salary[i];
      aa_name = employee_name[i];
      cout << "Above Average = " << aa_name << " - " << abave << '\n';
    }
  }

  input.close();

  cout << "Lowest paid = " << lowest_name << " - " << lowest << '\n';
  cout << "Highest paid = " << highest_name << " - " << highest << '\n';

  return 0;
}