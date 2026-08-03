#include <iostream>
using namespace std;

//--------------------- Base Class 1 ---------------------
class Student {
protected:
    int rollNo;
public:
    // Default Constructor
    Student() {
        rollNo = 0;
        cout << "Student Default Constructor Called" << endl;
    }
    // Parameterized Constructor
    Student(int r) {
        rollNo = r;
        cout << "Student Parameterized Constructor Called" << endl;
    }
    // Copy Constructor
    Student(const Student& s) {
        rollNo = s.rollNo;
        cout << "Student Copy Constructor Called" << endl;
    }
    // Destructor
    ~Student() {
        cout << "Student Destructor Called" << endl;
    }
};

//--------------------- Base Class 2 ---------------------
class Sports {
protected:
    int sportsMarks;
public:
    // Default Constructor
    Sports() {
        sportsMarks = 0;
        cout << "Sports Default Constructor Called" << endl;
    }
    // Parameterized Constructor
    Sports(int m) {
        sportsMarks = m;
        cout << "Sports Parameterized Constructor Called" << endl;
    }
    // Copy Constructor
    Sports(const Sports& s) {
        sportsMarks = s.sportsMarks;
        cout << "Sports Copy Constructor Called" << endl;
    }
    // Destructor
    ~Sports() {
        cout << "Sports Destructor Called" << endl;
    }
};

//--------------------- Derived Class ---------------------
class Result : public Student, public Sports {
private:
    int totalMarks;
public:
    // Default Constructor
    Result() : Student(), Sports() {
        totalMarks = 0;
        cout << "Result Default Constructor Called" << endl;
    }
    // Parameterized Constructor
    Result(int r, int s, int t) : Student(r), Sports(s) {
        totalMarks = t;
        cout << "Result Parameterized Constructor Called" << endl;
    }
    // Copy Constructor
    Result(const Result& obj) : Student(obj), Sports(obj) {
        totalMarks = obj.totalMarks;
        cout << "Result Copy Constructor Called" << endl;
    }
    void display() {
        cout << "\nRoll No : " << rollNo;
        cout << "\nSports Marks : " << sportsMarks;
        cout << "\nTotal Marks : " << totalMarks << endl;
    }
    // Destructor
    ~Result() {
        cout << "Result Destructor Called" << endl;
    }
};

//------------------------- Main Function -------------------------
int main() {
    cout << "\n====== Default Constructor ======\n";
    Result r1;
    r1.display();

    cout << "\n====== Parameterized Constructor ======\n";
    Result r2(101, 25, 450);
    r2.display();

    cout << "\n====== Copy Constructor ======\n";
    Result r3(r2);
    r3.display();

    cout << "\nProgram Ends...\n";
    return 0;
}
