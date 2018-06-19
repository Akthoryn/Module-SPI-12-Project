/**
* @file student.cpp
* @author WAGNER Nicolas & FILLIERES-RIVEAU Gautier
*/


#include "student.h"

/**
* Constructeur
*/



Student::Student(std::string name, bool present): m_name(name), m_present(present)
{

}

/**
* Get Name of student
* @return string name
*/


std::string Student::name() const
{
    return m_name;
}

/**
* Set Name of student
* @return void
*/


void Student::setName(const std::string &name)
{
    m_name = name;
}


/**
* Test if student is present
* @return bool (True if present)
*/


bool Student::present() const
{
    return m_present;
}

/**
* Set present
* @return void
*/


void Student::setPresent(bool present)
{
    m_present = present;
}

/**
* ToString
* @return string student
*/


std::string Student::print() const
{
    std::string out = name() + " " + (present()?"true":"false");
    return out;
}


/**
* Get number of present students
* @return int
*/



int Student::nb_presents(const std::vector<Student> &students)
{
    int n = 0;
    for(int i=1;i<students.size();i++)
        if(students.at(i).present())
            n++;
    return n;
}
