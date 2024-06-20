// University Timetable Project

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <limits>
#include "Header.h"
#include <istream>
using namespace std;

struct Class
{
    string day;
    string subject;
    string instructor;
    string time;
    string roomNo;
    string blockNo;
};

void displayClassDetails(const Class classInfo)
{
    cout << "* Subject: " << classInfo.subject << endl;
    cout << "* Instructor: " << classInfo.instructor << endl;
    cout << "* Time: " << classInfo.time << endl;
    cout << "* Room No: " << classInfo.roomNo << endl;
    cout << "* Block No:" << classInfo.blockNo << endl;
    cout << "* Day :" << classInfo.day << endl;
}

void displayScheduleForDay()
{
    bool condition1 = false;
    do
    {
        string day;
        while (cin.get() != '\n')
        {
            continue;
        }
        getline(cin, day);
        if (day == "Monday" || day == "Mon" || day == "MON" || day == "MONDAY" || day == "monday")
        {
            condition1 = true;
            cout << "Here is the Class Schedule for " << day << ":" << endl;
            cout << "**************************************************" << endl;
            cout << "Your First Class Details are as follows:" << endl;
            displayClassDetails({"Design and Analysis of Algorithms", "Dr.Avinash Chandra Panday", "10:00 To 11:00", "L104", "0"});
            cout << "\n";
            cout << "Next Class" << endl;
            bool condition2 = false;
            do
            {
                cout << "Enter the group (e.g., A, B): \n"
                     << endl;
                char group;
                cin >> group;
                switch (group)
                {
                case 'A':
                    condition2 = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "Design and Analysis of Algorithms", "Dr.Avinash Chandra Panday", "11:00 To 12:00", "L105", "0"});
                    break;
                case 'a':
                    condition2 = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "Design and Analysis of Algorithms", "Dr.Avinash Chandra Panday", "11:00 To 12:00", "L105", "01"});
                    break;
                case 'B':
                    condition2 = true;
                    cout << "Your Second Class details are as follows:" << endl;
                    displayClassDetails({day, "Embedded System & IoT", "Dr.Munesh Singh", "11:00 To 12:00", "L104", "0"});
                    break;
                case 'b':
                    condition2 = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "Embedded System & IoT", "Dr.Munesh Singh", "11:00 To 12:00", "L104", "0"});
                    break;
                default:
                    cout << "Invalid group choice! Try Again" << endl;
                    condition2 = false;
                    break;
                }
            } while (!condition2);
        }
        else if (day == "Tuesday" || day == "Tue" || day == "TUE" || day == "TUESDAY")
        {
            condition1 = true;
            cout << "Here is the Class Schedule for " << day << ":" << endl;
            cout << "**************************************************" << endl;
            cout << "Your First Class Details are as follows:" << endl;
            displayClassDetails({day, "Computer Networks", "Dr. Vinode Kumar Jain", "9:00 To 10:00", "L104", "0"});
            cout << "\n";
            cout << "Break" << endl;
            cout << "Your Second Class Details are as follows:" << endl;
            displayClassDetails({day, "Operating System", "Dr. Vijaypal Singh Rathor", "11:00 To 12:00", "L104", "0"});
            cout << "Your Third Class Details are as follows:" << endl;
            displayClassDetails({day, "Interface Design", "Kiran Gopinath", "6:00 To 8:00", "CR102", "0"});
        }
        else if (day == "Wednesday" || day == "Wed" || day == "WED" || day == "WEDNESDAY")
        {
            condition1 = true;
            cout << "Here is the Class Schedule for " << day << ":" << endl;
            cout << "**************************************************" << endl;
            cout << "Your First Class Details are as follows:" << endl;
            displayClassDetails({day, "NoSQL Lab", "Utkarsh Mishra", "2:00 TO 5:00", "CC", "1"});
            cout << "\n";
            cout << "Lunch" << endl;
            cout << "Your Second Class Details are as follows:" << endl;
            displayClassDetails({day, "Interface Design", "Kiran Gopinath", "6:00 To 8:00", "CR201", "1"});
            cout << "Your Third Class Details are as follows:" << endl;
            displayClassDetails({day, "Computer Networks", "Dr. Vinode Kumar Jain", "9:30 To 10:30", "Online", "none"});
            cout << "\n";
            cout << "Break" << endl;
            // displayClassDetails({day, "Computer Programming", "", "02:00 To 04:00", "03", "01"});
        }
        else if (day == "Thursday" || day == "Thu" || day == "THU" || day == "THURSDAY")
        {
            condition1 = true;
            cout << "Here is the Class Schedule for " << day << ":" << endl;
            cout << "**************************************************" << endl;
            cout << "Your First Class Details are as follows:" << endl;
            displayClassDetails({day, "Design and Analysis of Algorithms", "Dr.Avinash Chandra Panday", "9:00 To 10:00", "L104", "0"});
            cout << "\n";
            cout << "One Class Break" << endl;
            bool condition = false;
            do
            {
                cout << "Enter the group (e.g., A, B): \n"
                     << endl;
                char group;
                cin >> group;
                switch (group)
                {
                case 'A':
                    condition = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "Design and Analysis of Algorithms", "Dr.Avinash Chandra Panday", "10:00 To 11:00", "L105", "0"});
                    break;
                case 'a':
                    condition = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "Design and Analysis of Algorithms", "Dr.Avinash Chandra Panday", "10:00 To 11:00", "L105", "0"});
                    break;
                case 'B':
                    condition = true;
                    cout << "Your Second Class details are as follows:" << endl;
                    displayClassDetails({day, "Operating system", "Dr. Vijaypal Singh Rathor", "10:00 To 11:00", "L104", "0"});
                    break;
                case 'b':
                    condition = true;
                    cout << "Your Second Class details are as follows:" << endl;
                    displayClassDetails({day, "Operating system", "Dr. Vijaypal Singh Rathor", "10:00 To 11:00", "L104", "0"});
                    break;
                default:
                    cout << "Invalid group choice! Try Again" << endl;
                    condition = false;
                    break;
                }
            } while (!condition);
        }
        else if (day == "Friday" || day == "Fri" || day == "FRIDAY" || day == "FRI")
        {
            condition1 = true;
            cout << "Here is the Class Schedule for " << day << ":" << endl;
            cout << "**************************************************" << endl;
            cout << "Your First Class Details are as follows:" << endl;
            displayClassDetails({day, "Computer Networks", "Dr. Vinode Kumar Jain", "09:00 To 11:00", "L105", "0"});
            cout << "\n";
            cout << "Lunch break" << endl;
            // displayClassDetails({day, "DAA Lab", "Dr.Avinash Chandra Panday", "2:00 To 4:00", "CC", "3"});
            // cout << "\n";
            // cout << "Lunch Break " << endl;
            bool condition = false;
            do
            {
                cout << "Enter the group (e.g., A, B): \n"
                     << endl;
                char group;
                cin >> group;
                switch (group)
                {
                case 'A':
                    condition = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "OS Lab", "Dr. Vijaypal Singh Rathor", "02:00 To 04:00", "CC", "2"});
                    break;
                case 'a':
                    condition = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "OS Lab", "Dr. Vijaypal Singh Rathor", "02:00 To 04:00", "CC", "2"});
                    break;
                case 'B':
                    condition = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "DAA Lab", "Dr.Avinash Chandra Panday", "02:00 To 04:00", "CC", "3"});
                    break;
                case 'b':
                    condition = true;
                    cout << "Your Second Class Details are as follows:" << endl;
                    displayClassDetails({day, "DAA Lab", "Dr.Avinash Chandra Panday", "02:00 To 04:00", "CC", "3"});
                    break;
                default:
                    cout << "Invalid group choice! Try Again" << endl;
                    condition = false;
                    break;
                }
            } while (!condition);
        }
        else if (day == "Saturday" || day == "Sat" || day == "SAT" || day == "SATURDAY")
        {
            condition1 = true;
            cout << "Here is the Class Schedule for " << day << ":" << endl;
            displayClassDetails({day, "DBMS", "Dr. Pritee Khanna", "11:00 To 12:00", "L105", "0"});
            cout << "\n";
            cout << "Lunch Break" << endl;
            displayClassDetails({day, "IT Workshop", "Mohammad Maksood Akhter", "02:00 To 03:00", "CC", "1"});
        }
    } while (!condition1);
}
void displayScheduleForInstructor()
{
    string instructor;
    cin.ignore();
    cout << "Enter the Instructor's Name: ";
    getline(cin, instructor);
    char name[256];
    for (size_t i = 0; i < instructor.length(); i++)
    {
        name[i] = instructor[i];
    }
    name[instructor.length()] = '\0';
    strupr(name);
    bool wrongname = false;
    while (!wrongname)
    {
        cout << "Here is the Class Schedule for Instructor: " << name << endl;
        cout << "**************************************************" << endl;

        if (strcmp(name, "Dr.Avinash Chandra Panday") == 0 || strcmp(name, "Sir Avinash") == 0 || strcmp(name, "ACP") == 0 || strcmp(name, "UMAIR") == 0)
        {
            wrongname = true;
            displayClassDetails({"Monday", "DAA", "Dr.Avinash Chandra Panday", "10:00 To 11:00", "L104", "0"});
            displayClassDetails({"Thursday", "DAA", "Dr.Avinash Chandra Panday", "9:00 To 10:00", "L104", "0"});
            cout << " Class for A Group \n"
                 << endl;
            displayClassDetails({"Monday", "DAA", "Dr.Avinash Chandra Panday", "11:00 To 12:00", "L105", "0"});
            cout << " Lab for B Group \n"
                 << endl;
            displayClassDetails({"Friday", "DAA Lab", "Dr.Avinash Chandra Panday", "02:00 to 04:00", "CC", "3"});
        }
        else if (strcmp(name, "Dr. Vijaypal Singh Rathor") == 0 || strcmp(name, "Sir Vijay") == 0 || strcmp(name, "VSR") == 0 || strcmp(name, "vsr") == 0)
        {
            wrongname = true;
            cout << " Lab for A Group " << endl;
            // displayClassDetails({"Monday", "Computer Programming Lab", "Muhammad Irfan Younis Mughal", "02:00 to 05:00 and 4:10 to 5:10", "03", "01"});
            displayClassDetails({"Tuesday", "OS", "Dr. Vijaypal Singh Rathor", "11:00 To 12:00", "L104", "0"});
            displayClassDetails({"Friday", "OS Lab", "Dr. Vijaypal Singh Rathor", "2:00 To 4:00", "CC", "2"});
            cout << " Lab for B Group " << endl;
            // displayClassDetails({"Thursday", "OS", "Dr. Vijaypal Singh Rathor", "02:00 to 04:00 and 4:10 to 5:10", "03", "01"});
            displayClassDetails({"Thursday", "OS", "Dr. Vijaypal Singh Rathor", "10:00 To 11:00", "3L104", "0"});
        }
        else if (strcmp(name, "Dr. Vinode Kumar Jain") == 0 || strcmp(name, "Sir Vinode") == 0 || strcmp(name, "VK Jain") == 0 || strcmp(name, "vk jain") == 0)
        {
            wrongname = true;
            cout << "Lab for A Group " << endl;
            // displayClassDetails({"Monday", "", "Dr. Vinode Kumar Jain", "02:00 To 05:00", "306", "03"});
            displayClassDetails({"Tuesday", "CN", "Dr. Vinode Kumar Jain", "9:00 To 10:00", "L104", "0"});
            displayClassDetails({"Wednesday", "CN", "Dr. Vinode Kumar Jain", "9:30 To 10:30", "Online", "none"});
            cout << " Lab for B Group" << endl;
            displayClassDetails({"Friday", "CN", "Dr. Vinode Kumar Jain", "09:00 To 11:00", "L105", "0"});
            // displayClassDetails({"Saturday", "CN", "MDr. Vinode Kumar Jain", "11:30 To 03:00", "207", "03"});
        }
        else if (strcmp(name, "Dr.Munesh Singh") == 0 || strcmp(name, "Sir Munesh") == 0 || strcmp(name, "MS") == 0 || strcmp(name, "ms") == 0)
        {
            wrongname = true;
            displayClassDetails({"Mon", "IoT", "Dr.Munesh Singh", "11:00 to 12:00", "L104", "0"});
        }
        else if (strcmp(name, "Kiran Gopinath") == 0 || strcmp(name, "Sir kiran") == 0 || strcmp(name, "kp") == 0 || strcmp(name, "KP") == 0)
        {
            wrongname = true;
            displayClassDetails({"Tuesday", "ID", "Kiran Gopinath", "6:00 To 8:00", "CR102", "0"});
            displayClassDetails({"Wednesday", "ID", "Kiran Gopinath", "6:00 To 8:00", "CR201", "1"});
        }
        else
        {
            cout << "No class schedule found for Instructor: " << name << endl;
            cout << "Try Again " << endl;
            displayScheduleForInstructor();
        }
    }
}

void displayScheduleForSubject()
{
    cout << "Enter the Subject: ";
    string subject;
    while (cin.get() != '\n')
    {
        continue;
    }
    getline(cin, subject);
    cout << "Here is the Class Schedule for Subject: " << subject << endl;
    cout << "**************************************************" << endl;
    bool check = false;
    while (!check)
    {
        if (subject == "Design and Analysis of Algorithms" || subject == "DAA" || subject == "daa")
        {
            check = true;
            // displayClassDetails({"Monday", "Electronic Devices and Circuits", " ", "12:30 To 01:30", "307", "03"});
            // displayClassDetails({"Tuesday", "Electronic Devices and Circuits", " ", "11:30 To 01:30", "508", "03"});
            // cout << "Lab for A Group " << endl;
            // displayClassDetails({"Thursday", "Electronice Devices and Circuits Lab", "", "02:00 To 05:00", "506", "03"});
            // cout << "Lab for B Group " << endl;
            // displayClassDetails({"Friday", "Electronic Devices and Circuits Lab", "", "03:00 To 06:00", "506", "03"});

            displayClassDetails({"Monday", "DAA", "Dr.Avinash Chandra Panday", "10:00 To 11:00", "L104", "0"});
            displayClassDetails({"Thursday", "DAA", "Dr.Avinash Chandra Panday", "9:00 To 10:00", "L104", "0"});
            cout << " Class for A Group \n"
                 << endl;
            displayClassDetails({"Monday", "DAA", "Dr.Avinash Chandra Panday", "11:00 To 12:00", "L105", "0"});
            cout << " Lab for B Group \n"
                 << endl;
            displayClassDetails({"Friday", "DAA Lab", "Dr.Avinash Chandra Panday", "02:00 to 04:00", "CC", "3"});

            break;
        }
        else if (subject == "Operating System" || subject == "OS" || subject == "os")
        {
            check = true;
            // cout << " Lab for A Group " << endl;
            // displayClassDetails({"Monday", "Computer Programming Lab", "", "02:00 to 05:00 and 4:10 to 5:10", "03", "01"});
            // displayClassDetails({"Wednesday", "Computer Programming", "", "12:30 To 04:00", "03", "01"});
            // cout << " Lab for B Group " << endl;
            // displayClassDetails({"Thursday", "Computer Programming Lab", "", "02:00 to 04:00 and 4:10 to 5:10", "03", "01"});
            cout << " Lab for A Group " << endl;
            // displayClassDetails({"Monday", "Computer Programming Lab", "Muhammad Irfan Younis Mughal", "02:00 to 05:00 and 4:10 to 5:10", "03", "01"});
            displayClassDetails({"Tuesday", "OS", "Dr. Vijaypal Singh Rathor", "11:00 To 12:00", "L104", "0"});
            displayClassDetails({"Friday", "OS Lab", "Dr. Vijaypal Singh Rathor", "2:00 To 4:00", "CC", "2"});
            cout << " Lab for B Group " << endl;
            // displayClassDetails({"Thursday", "OS", "Dr. Vijaypal Singh Rathor", "02:00 to 04:00 and 4:10 to 5:10", "03", "01"});
            displayClassDetails({"Thursday", "OS", "Dr. Vijaypal Singh Rathor", "10:00 To 11:00", "3L104", "0"});
        }

        else if (subject == "Computer Networks" || subject == "CN" || subject == "cn")
        {
            // cout << "Lab for A Group " << endl;
            // check = true;
            // displayClassDetails({"Monday", "Circuit Analysis Lab", "", "02:00 To 05:00", "306", "03"});
            // displayClassDetails({"Tuesday", "Circuit analysis", "", "04:10 To 06:10", "407", "03"});
            // displayClassDetails({"Wednesday", "Circuit analysis", "", "11:30 To 12:30", "507", "03"});
            // cout << " Lab for Grou  " << endl;
            // displayClassDetails({"Friday", "Circuit Analysis Lab", "", "03:00 To 06:00", "306", "03"});

            cout << "Lab for A Group " << endl;
            check = true;
            displayClassDetails({"Tuesday", "CN", "Dr. Vinode Kumar Jain", "9:00 To 10:00", "L104", "0"});
            displayClassDetails({"Wednesday", "CN", "Dr. Vinode Kumar Jain", "9:30 To 10:30", "Online", "none"});
            cout << " Lab for B Group" << endl;
            displayClassDetails({"Friday", "CN", "Dr. Vinode Kumar Jain", "09:00 To 11:00", "L105", "0"});
        }
        else if (subject == "Embedded System & IoT" || subject == "IoT" || subject == "iot")
        {
            check = true;
            displayClassDetails({"Mon", "IoT", "Dr.Munesh Singh", "11:00 to 12:00", "L104", "0"});
        }
        // else if (subject == "" || subject == "" || subject == "")
        // {
        //     check = true;
        //     displayClassDetails({"Thursday", "Communication Skills", "", "11:30 To 01:30", "211", "02"});
        //     displayClassDetails({"Friday", "Communication Skills", "", "11:30 To 01:30", "507", "03"});
        // }
        else if (subject == "Interface Design" || subject == "ID" || subject == "id")
        {
            check = true;
            displayClassDetails({"Tuesday", "ID", "Kiran Gopinath", "6:00 To 8:00", "CR102", "0"});
            displayClassDetails({"Wednesday", "ID", "Kiran Gopinath", "6:00 To 8:00", "CR201", "1"});
        }
        // else if (subject == " Workshop" || subject == "CW" || subject == "cw")
        // {
        //     check = true;
        //     displayClassDetails({"Saturday", "Coding WorkShop", "", "11:30 To 03:00", "207", "03"});
        // }
        else
        {
            check = false;
            cout << "Invalid Subject name Try Again " << endl;
            displayScheduleForSubject();
        }
    }
}

int main()
{
    project_info();
    cout << "\n";
    cout << " Do you want To get guidelines about how to use the project " << endl;
    cout << "\n";
    cout << " Enter Y for Yes " << endl;
    cout << " Enter N for No " << endl;

    char option;
    bool test = false;

    do
    {
        if (cin >> option)
        {
            switch (option)
            {
            case 'Y':
                test = true;
                cout << "  " << endl;
                project_Tutorial();
                break;

            case 'y':
                test = true;
                cout << "***___ Guidelines to use Project___***" << endl;
                project_Tutorial();
                break;

            case 'N':
                test = true;
                cout << " Start at your own risk " << endl;
                break;

            case 'n':
                test = true;
                cout << " Start at your own risk " << endl;
                break;

            default:
                test = false;
                cout << "Invalid choice! Try Again" << endl;
                break;
            }
        }
        else
        {
            cout << "Invalid input! Try Again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!test);

    cout << "\n";
    cout << "Please select an option:" << endl;
    cout << "\n";
    cout << setw(56) << setfill('*') << " " << "\n";
    cout << setw(1) << setfill('*') << "*" << "1. Display class schedule for a Specific Day " << setw(9) << setfill(' ') << " " << "*" << endl;
    cout << setw(1) << setfill('*') << "*" << "2. Display class schedule for a Specific Instructor " << setw(2) << setfill(' ') << " " << "*" << endl;
    cout << setw(1) << setfill('*') << "*" << "3. Display class schedule for a Specific Subject " << setw(5) << setfill(' ') << " " << "*" << endl;
    cout << setw(56) << setfill('*') << " " << "\n";

    int choice;
    bool condition = false;

    do
    {
        if (cin >> choice)
        {
            switch (choice)
            {
            case 1:
            {
                condition = true;
                cout << "Enter the Day (e.g., Monday, Tuesday): ";
                displayScheduleForDay();
                break;
            }
            case 2:
            {
                condition = true;
                displayScheduleForInstructor();
                break;
            }
            case 3:
            {
                condition = true;
                displayScheduleForSubject();
                break;
            }
            default:
                cout << "Invalid choice! Try Again" << endl;
                condition = false;
                break;
            }
        }
        else
        {
            cout << "Invalid input! Try Again" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (!condition);

    return 0;
}
