#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void project_Tutorial()
{
    cout << "Follow the following format" << endl;
    string dayName = "Monday or Mon";
    string instructorName = "acp or ACP";
    string subject = "DAA";
    int width = 48;

    // Top row
    cout << setw(width) << setfill('*') << "" << endl;

    // Text rows
    cout << "* Enter Day as: " << setw(width - 17) << setfill(' ') << left << dayName << "*" << endl;
    cout << "* Enter Instructor Name as: " << setw(width - 29) << setfill(' ') << left << instructorName << "*" << endl;
    cout << "* Enter Subject Name as: " << setw(width - 26) << setfill(' ') << left << subject << "*" << endl;

    // Bottom row
    cout << setw(width) << setfill('*') << "" << endl;
}
void project_info()
{

    string universityName = "Pandit Dwarka Prasad Mishra Indian Institute of Information Technology, Design & Manufacturing Jabalpur Madhya Pradesh";
    cout << setw(70) << setfill(' ') << universityName << endl;
    cout << "\n";
    cout << setw(67) << setfill('-') << " Welcome To CSE (Computer Science and Engineering) " << setw(53) << setfill('-') << "\n";

    cout << " Enter your Full Name: ";
    string name;
    getline(cin, name);
    cout << setw(65) << setfill('=') << " Welcome To My Project " << "Sir/ Ma'am " << name << " " << setw(45) << setfill('=') << "=" << endl;
    cout << setw(80) << setfill('*') << "Project name: Classes Schedule" << setw(41) << setfill('*') << "\n";
    cout << setw(39) << setfill('~') << "~" << " Prepaerd by: Priyanka Chauhan " << setw(40) << setfill('~') << "~" << endl;
    // cout << setw(37) << setfill('<') << "<" << " Assigned by: Me " << setw(35) << setfill('>') << ">" << endl;
}