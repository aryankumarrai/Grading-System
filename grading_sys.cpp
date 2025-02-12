#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>
using namespace std;

string captcha(size_t length) {
    const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
    mt19937 gen(time(nullptr)); // Seed with current time
    uniform_int_distribution<> dist(0, chars.size() - 1);
    string result(length, '\0');
    generate_n(result.begin(), length, [&]() { return chars[dist(gen)]; });
    return result;
}


int main() {
    // Faculty login
    string faculty_name;
    cout<< "Enter faculty's name: ";
    getline(cin,faculty_name);
    int emp_id;
    cout<< "Enter employee id: ";
    cin>> emp_id;

    // Captcha
    string a=captcha(5);
    cout << "Captcha: " << a << endl;
    string verify;
    cout<< "Enter the captcha: ";
    cin>> verify;
    if (verify==a) {
            cout<< "Successfull"<< endl;
            // Student grading system
    string student_name;
    cout<< "Enter student's name: ";
    getline(cin,student_name);
    string reg_num;
    cout<< "Enter registraion number: ";
    cin>> reg_num;
    float marks;
    cout<< "Enter marks of the student: ";
    cin>> marks;
    if (marks>95 && marks<=100) {
        cout<< "Grade of the student is S"<< endl;
    }
    else if (marks>90 && marks<=95) {
        cout<< "Grade of student is A"<< endl;
    }
    else if (marks>80 && marks<=90) {
        cout<< "Grade of student is B"<< endl;
    }
    else if (marks>70 && marks<=80) {
        cout<< "Grade of student is C"<< endl;
    }
    else if (marks>60 && marks<=70) {
        cout<< "Grade of student is D"<< endl;
    }
    else if (marks>50 && marks<=60) {
        cout<< "Grade of student is E"<< endl;
    }
    else{
        cout<< "Grade of student is F"<< endl;
    }
        }
    else{
            cout<< "Try again"<< endl;
        }
    

    
    

    return 0;
}