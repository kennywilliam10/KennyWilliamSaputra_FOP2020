#include <iostream>
#include <fstream>
#include <cstdlib>
#include <bits/stdc++.h> 
using namespace std;

int main(){
  ifstream input;
  input.open("LAB12/LAB12_grade.txt");

  const int SizeArray = 40;

  string student_name[SizeArray];
  double student_grade[SizeArray];

  int i = 0;
  double average_grade = 0;
  string line;



  while(getline(input, line)){
    int nameEndPos = line.find('-') - 1;
    student_name[i] = line.substr(0, nameEndPos);
    int gradeStartPos = line.find('-') + 1;
    int gradeEndPos = line.find('\n');
    student_grade[i] = stod(line.substr(gradeStartPos, gradeEndPos));
    ++i;
  }

  for(int i = 0; i < SizeArray; i++){
    cout << student_name[i] << " = " << student_grade[i] << "\n";
  }


// Lowest
  string lowest_name = student_name[0];
  double lowest = student_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_grade[i] < lowest){
      lowest = student_grade[i];
      lowest_name = student_name[i];
    }
  }

  // Highest
  string highest_name = student_name[0];
  double highest = student_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_grade[i] > highest){
      highest = student_grade[i];
      highest_name = student_name[i];
    }
  }
  
  //average
  int sum = 0;
  for (int i = 0; i < SizeArray; i++){
    sum += student_grade[i];
  }
  int average = sum / SizeArray;
  cout << "Average = " << average << '\n';
  
  // Under average
  string ua_name = student_name[0];
  double undave = student_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_grade[i] < average){
      undave = student_grade[i];
      ua_name = student_name[i];
      cout << "Under Average = " << ua_name << " - " << undave << '\n';
    }
  }
    cout << endl;
    
  // Above average 
  string aa_name = student_name[0];
  double abave = student_grade[0];
  for(int i = 0; i < SizeArray; i++){
    if (student_grade[i] > average){
      abave = student_grade[i];
      aa_name = student_name[i];
      cout << "Above Average = " << aa_name << " - " << abave << '\n';
    }
  }

  double lowest2 = student_grade[0];
  for (int i = 0; i < SizeArray; i++){
    if(student_grade[i] < lowest2){
    lowest2 = student_grade[i];
    cout <<"test " << lowest2 << endl;
    lowest2 +=1;
  }
  }


  input.close();

  cout << "Lowest grade = " << lowest_name << " - " << lowest << '\n';
  cout << "Highest grade = " << highest_name << " - " << highest << '\n';

  return 0;
}

