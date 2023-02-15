#include <iostream>
#include <iomanip>
#include "Student.h"
#include <string.h>

using namespace std;

//const int lengthName = 20;
//const int countMark = 3;
//
//struct Student {
//    char name[lengthName];
//    int marks[countMark];
//};
//
//void initStudent(Student& student, char* nameStud,const int mark[]) {
//    strcpy_s(student.name, nameStud);
//    for (int i = 0; i < countMark; i++) {
//        student.marks[i] = mark[i];
//    }
//}
//
//double averMark(Student student) {
//    double sum = 0;
//    for (int i = 0; i < countMark; i++) {
//        sum += student.marks[i];
//    }
//    return sum / countMark;
//}
//
//void printStudent(Student student) {
//    cout << student.name << endl;
//    for (int i = 0; i < countMark; i++) {
//        cout << student.marks[i] << " ";
//    }
//    cout << endl;
//}



int main()
{
    Student student{ "Petrov A. A." , new int[3]{ 4,2,5 } };  
    //student.printStudent();
    //cout << fixed << setprecision(2) 
    //    << student.averMark();
   /* Student student1;
    student1.setName("Ivanov I. I");
    cout << student.getName() << endl;
    student1.printStudent();
    cout << fixed << setprecision(2)
        << student1.averMark();*/
    for (int i = 0; i < countMark; i++) {
        cout << student.getMarks()[i] << " ";
    }
}
