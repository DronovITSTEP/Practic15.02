#include "Student.h"
double Student::averMark() {
    double sum = 0;
    for (int i = 0; i < countMark; i++) {
        sum += marks[i];
    }
    return sum / countMark;
}

void Student::printStudent() {
    cout << name << endl;
    for (int i = 0; i < countMark; i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
}