#include <iostream>
#include <string>
using namespace std;

class student {
    private:
    int rollnumber;
    string name;
    float marks[3]; // marks for 3 subjects
    float total;
    float percentage;
    string result;

    public:
    // function to accpet student details
    void acceptdetails(){
        cout << "enter roll number: ";
        cin >> rollnumber;
        cin.ignore(); // clear input buffer
        cout << "enter name: ";
        getline(cin, name);
        cout << "enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++){
            cin >> marks[i];

        }
    }
    // funtion to calculate result
    void calculateresult() {
        total = 0;
        for (int i= 0; i < 3; i++) {
            total += marks[i];
        }
        percentage = total / 4.0;

        if (percentage >= 60){
            result = "first division";
        } else if (percentage >= 50) {
            result = "second division";
        } else if (percentage >= 40) {
            result = "pass";
        } else {
            result = "fail";
        }
    } 
    // function to display student details
    void displaydetails() {
        cout << "\n----- students details -----" << endl;
        cout << "roll number:" << rollnumber << endl;
        cout << "name:" << name << endl;
        cout << "marks:";
        for (int i =0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "total marks:" << total << endl;
        cout << "percentage:" << percentage << "%" << endl;
        cout << "result:" << result << endl; 
    }
};
int main() {
    student s;
    s.acceptdetails();
    s.calculateresult();
    s.displaydetails();
    return 0;
}