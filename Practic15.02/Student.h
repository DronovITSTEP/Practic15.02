#pragma once
#include <iostream>

using namespace std;

const int lengthName = 20;
const int countMark = 3;

/*
Реализуйте класс “Студент”. Необходимо хранить в 
переменных-членах класса: ФИО, дату рождения, контактный телефон,
город, страну, название учебного заведения, город и страну (где
находится учебное заведение), номер группы. Реализуйте 
функции-члены класса для ввода данных, вывода данных, реализуйте
аксессоры для доступа к отдельным переменным-членам.
*/

class Student
{
private:
    char name[lengthName]{ NULL };
    int marks[countMark]{NULL};

public:
    Student() {
        strcpy_s(name, "");
        for (int i = 0; i < countMark; i++) {
            marks[i] = 0;
        }

    }
    Student(const char* name, const int* mark) {
        strcpy_s(this->name, name);
        for (int i = 0; i < countMark; i++) {
            marks[i] = mark[i];
        }
    }   

    char* getName() { return (name != NULL)? name:NULL; }
    void setName(const char* n){ strcpy_s(name, n); }
    int getMarks(int index) { return marks[index]; }
    int* getMarks() { return marks; }
    auto getMarks1() -> int* { return marks; }
    double(*(*op(int, int))(float, float)) {
        return op(5.7, 8.2);
    }
    auto op(float, float) -> double(*(*)) {
        return op(5.7, 8.2);
    }
    // средняя оценка
    double averMark();
    // вывод на экран
    void printStudent();
};

