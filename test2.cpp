#include <iostream>
#include "student.h"

#include <vector>
#include <iostream>

int main(int argc, char* argv[])
{
  std::vector<Student> students;
  int nb_HandsUp = 0 ; 
  students.push_back( Student("Maarouf", true) );
  nb_HandsUp++;
  students.push_back( Student("Chahrazed", false) );
  students.push_back( Student("Jonathan", true) );
  nb_HandsUp++;
  students.push_back( Student("Seyfeddine", false) );
  students.push_back( Student("Adrian", true) );
  nb_HandsUp++;
  students.push_back( Student("Gauthier", false) );
  students.push_back( Student("Jean-Baptiste", true) );
  nb_HandsUp++;
  students.push_back( Student("Dimia", false) );
  students.push_back( Student("Hawa", true) );
  nb_HandsUp++;
  students.push_back( Student("Mehdi", false) );
  students.push_back( Student("Caroline", true) );
  nb_HandsUp++;
  students.push_back( Student("Nicolas", false) );
  students.push_back( Student("Khouloud", true) );
  nb_HandsUp++;
  students.push_back( Student("Laure", false) );
  students.push_back( Student("Siddharth", true) );
  nb_HandsUp++;

  int nb_present = Student::nb_presents( students );

  if( nb_present == nb_HandsUp ){
      return 0;
  }else{
      return -1;
  }
}
