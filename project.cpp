#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
using namespace std;

int st01;
int st02;
int st03;
int st04;

void clearScreen()
{
#ifdef _WIN32
    system("cls");

#endif
}

void newSlate()
{
    cout << "\033[2J\033[H";
    cout.flush();
}

void pauseScreen()
{
    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();
    clearScreen();
}

void display();
class student
{
    friend class admin;
    friend void student1();
    friend void student2();
    friend void student3();
    friend void student4();
    friend void s1marks();
    friend void s3marks();
    friend void s2marks();
    friend void s4marks();

public:
    string name;
    int roll;
    int pass;
    string course;
    string batch;
    string department;
    int mvcmarks;
    int oopsmarks;
    int dldmarks;
    int dbmarks;

public:
    void setstudents()
    {
        clearScreen();
        cout << "=== ADD NEW STUDENT ===" << endl
             << endl;
        cout << "Enter Student ID: ";
        cin >> roll;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, name);
        cout << "Enter Student Course: ";
        getline(cin, course);
        cout << "Enter Student Batch: ";
        getline(cin, batch);
        cout << "Enter Student Deparment: ";
        getline(cin, department);
        cout << "Enter Student Login pass: ";
        cin >> pass;

        cout << "\nStudent added successfully!";
        pauseScreen();
    }

    void show()
    {
        cout << name << endl;
        cout << roll << endl;
        cout << pass << endl;
        cout << course << endl;
        cout << batch << endl;
        cout << department << endl;
    }

    void addmarks()
    {
        clearScreen();
        cout << "=== ADD MARKS ===" << endl
             << endl;
        cout << "OPPS Marks: ";
        cin >> oopsmarks;
        cout << "MVC Marks: ";
        cin >> mvcmarks;
        cout << "DLD Marks: ";
        cin >> dldmarks;
        cout << "DB Marks: ";
        cin >> dbmarks;

        cout << "\nMarks added successfully!";
        pauseScreen();
    }
};
student s4;
student s1;
student s2;
student s3;

void set()
{
    s1.roll = 241201055;
    s2.roll = 241201014;
    s3.roll = 241201056;
    s4.roll = 241201057;
}

void student1()
{
    s1.setstudents();
    ofstream one;
    one.open("s1.txt");
    one << s1.batch << endl;
    one << s1.pass << endl;
    one << s1.department << endl;
    one << s1.roll << endl;
    one << s1.course << endl;
    one << s1.name << endl;
    one.close();
}

void student2()
{
    s2.setstudents();
    ofstream one;
    one.open("s2.txt");
    one << s2.batch << endl;
    one << s2.pass << endl;
    one << s2.department << endl;
    one << s2.roll << endl;
    one << s2.course << endl;
    one << s2.name << endl;
    one.close();
}

void student3()
{
    s3.setstudents();
    ofstream one;
    one.open("s3.txt");
    one << s3.batch << endl;
    one << s3.pass << endl;
    one << s3.department << endl;
    one << s3.roll << endl;
    one << s3.course << endl;
    one << s3.name << endl;
    one.close();
}

void student4()
{
    s4.setstudents();
    ofstream one;
    one.open("s4.txt");
    one << s4.batch << endl;
    one << s4.pass << endl;
    one << s4.department << endl;
    one << s4.roll << endl;
    one << s4.course << endl;
    one << s4.name << endl;
    one.close();
}

void s1marks()
{
    ofstream ww;
    ww.open("s1marks.txt", ios::app);
    ww << "OOPS Marks =" << s1.oopsmarks << endl;
    ww << "DLD Marks =" << s1.dldmarks << endl;
    ww << "DB Marks =" << s1.dbmarks << endl;
    ww << "MVC Marks =" << s1.mvcmarks << endl;
    cout << "------------------------------" << endl;
    ww.close();
}

void s2marks()
{
    ofstream ww;
    ww.open("s2marks.txt", ios::app);
    ww << "OOPS Marks =" << s2.oopsmarks << endl;
    ww << "DLD Marks =" << s2.dldmarks << endl;
    ww << "DB Marks =" << s2.dbmarks << endl;
    ww << "MVC Marks =" << s2.mvcmarks << endl;
    cout << "------------------------------" << endl;
    ww.close();
}

void s3marks()
{
    ofstream ww;
    ww.open("s3marks.txt", ios::app);
    ww << "OOPS Marks =" << s3.oopsmarks << endl;
    ww << "DLD Marks =" << s3.dldmarks << endl;
    ww << "DB Marks =" << s3.dbmarks << endl;
    ww << "MVC Marks =" << s3.mvcmarks << endl;
    cout << "------------------------------" << endl;
    ww.close();
}

void s4marks()
{
    ofstream ww;
    ww.open("s4marks.txt", ios::app);
    ww << "OOPS Marks =" << s4.oopsmarks << endl;
    ww << "DLD Marks =" << s4.dldmarks << endl;
    ww << "DB Marks =" << s4.dbmarks << endl;
    ww << "MVC Marks =" << s4.mvcmarks << endl;
    cout << "------------------------------" << endl;
    ww.close();
}

void savePasswords()
{
    ofstream file("passwords.txt");
    if (file.is_open())
    {
        file << st01 << endl;
        file << st02 << endl;
        file << st03 << endl;
        file << st04 << endl;
        file.close();
    }
}

void loadPasswords()
{
    ifstream file("passwords.txt");
    if (file.is_open())
    {
        file >> st01;
        file >> st02;
        file >> st03;
        file >> st04;
        file.close();
    }
}

class admin
{
    friend void student1();
    friend void student2();
    friend void student3();
    friend void student4();
    friend void s1marks();
    friend void s3marks();
    friend void s2marks();
    friend void s4marks();
    friend void display();

private:
    string adminname;
    int adminpass;
    int a = 0;
    int op;

public:
    friend class student;
    admin()
    {
        clearScreen();
        cout << "=== ADMIN LOGIN ===" << endl
             << endl;
        cout << "Enter admin username: ";
        cin >> adminname;
        cout << "Enter admin password: ";
        cin >> adminpass;

        if (adminname == "admin" && adminpass == 1234)
        {
            clearScreen();
            options();
        }
        else
        {
            cout << "\nWrong username or password" << endl;
            pauseScreen();
            admin();
        }
    }

    void options()
    {
        clearScreen();
        cout << "----------------------------" << endl;
        cout << "       Welcome Back         " << endl;
        cout << "----------------------------" << endl;
        cout << "\n1-Show all Students" << endl;
        cout << "2-Delete Student" << endl;
        cout << "3-ADD Student Marks" << endl;
        cout << "4-ADD Student Attendence" << endl;
        cout << "5-ADD student" << endl;
        cout << "6-ADD/Update Student Password" << endl;
        cout << "7-Exit" << endl;

        cout << "\nEnter Option number: ";
        cin >> op;

        if (op == 1)
        {
            showstudents();
        }
        else if (op == 2)
        {
            deleteStudent();
        }
        else if (op == 3)
        {
            addmarkad();
        }
        else if (op == 4)
        {
            addattendance();
        }
        else if (op == 5)
        {
            int rt;
            cout << "Enter the ID for which You want to Add student:-";
            cin >> rt;
            if (rt == 241201055)
            {

                student1();
                options();
            }
            else if (rt == 241201014)
            {
                /* code */
                student2();
                options();
            }
            else if (rt == 241201056)
            {
                /* code */
                student3();
                options();
            }
            else if (rt == 241201057)
            {
                /* code */
                student4();
                options();
            }
            else
            {
                cout << "Wrong ID" << endl;
                options();
            }
        }
        else if (op == 6)
        {
            password();
        }
        else if (op == 7)
        {
            clearScreen();
            display();
        }
        else
        {
            cout << "\nWrong Option" << endl;
            pauseScreen();
            options();
        }
    }

    void password()
    {
        int f;
        int t1, t2, t3, t4;

        clearScreen();
        cout << "=== UPDATE STUDENT PASSWORD ===" << endl
             << endl;
        cout << "Enter the ID of the Student: ";
        cin >> f;

        if (f == s1.roll)
        {
            cout << "Enter Password for " << s1.roll << " : ";
            cin >> t1;
            st01 = t1;
            savePasswords();
            cout << "\nPassword Entered/Changed successfully!" << endl;
        }
        else if (f == s2.roll)
        {
            cout << "Enter Password for " << s2.roll << " : ";
            cin >> t2;
            st02 = t2;
            savePasswords();
            cout << "\nPassword Entered/Changed successfully!" << endl;
        }
        else if (f == s3.roll)
        {
            cout << "Enter Password for " << s3.roll << " : ";
            cin >> t3;
            st03 = t3;
            savePasswords();
            cout << "\nPassword Entered/Changed successfully!" << endl;
        }
        else if (f == s4.roll)
        {
            cout << "Enter Password for " << s4.roll << " : ";
            cin >> t4;
            st04 = t4;
            savePasswords();
            cout << "\nPassword Entered/Changed successfully!" << endl;
        }
        else
        {
            cout << "Wrong ID..." << endl;
        }

        pauseScreen();
        options();
    }

    void deleteStudent()
    {
        clearScreen();
        cout << "=== DELETE STUDENT ===" << endl
             << endl;
        cout << "Which student do you want to delete?" << endl;
        cout << "1- Bilal Ahmed Khan" << endl;
        cout << "2- M.Usman Riaz" << endl;
        cout << "3- Bazil Ahmed Khan" << endl;
        cout << "4- Abdullah Usman" << endl;
        cout << "5- Return to main menu" << endl;

        int ch;
        cout << "\nEnter choice: ";
        cin >> ch;

        string filename, marksFile, attendanceFile;
        bool success = false;

        if (ch == 1)
        {
            filename = "s1.txt";
            marksFile = "s1marks.txt";
            attendanceFile = "s1adt.txt";
        }
        else if (ch == 2)
        {
            filename = "s2.txt";
            marksFile = "s2marks.txt";
            attendanceFile = "s2.adt.txt";
        }
        else if (ch == 3)
        {
            filename = "s3.txt";
            marksFile = "s3marks.txt";
            attendanceFile = "s3.adt.txt";
        }
        else if (ch == 4)
        {
            filename = "s4.txt";
            marksFile = "s4marks.txt";
            attendanceFile = "s4.adt.txt";
        }
        else if (ch == 5)
        {
            options();
            return;
        }
        else
        {
            cout << "\nWrong choice..." << endl;
            pauseScreen();
            deleteStudent();
            return;
        }

        ofstream clearFile(filename, ios::trunc);
        if (clearFile.is_open())
        {
            clearFile.close();
            success = true;
        }

        ofstream clearMarks(marksFile, ios::trunc);
        if (clearMarks.is_open())
        {
            clearMarks.close();
        }

        ofstream clearAttendance(attendanceFile, ios::trunc);
        if (clearAttendance.is_open())
        {
            clearAttendance.close();
        }

        if (success)
        {
            cout << "\nStudent data successfully deleted!" << endl;
        }
        else
        {
            cout << "\nError deleting student data!" << endl;
        }

        pauseScreen();
        options();
    }

    void showstudents()
    {
        clearScreen();
        string a, b, c, d;
        cout << "-------------------------" << endl;
        cout << "   Showing All students   " << endl
             << endl;

        ifstream show;
        show.open("s1.txt");
        while (!show.eof())
        {
            getline(show, a);
            cout << a << endl;
        }
        show.close();

        ifstream rel;
        rel.open("s2.txt");
        while (!rel.eof())
        {
            getline(rel, b);
            cout << b << endl;
        }
        rel.close();

        ifstream bill;
        bill.open("s3.txt");
        while (!bill.eof())
        {
            getline(bill, c);
            cout << c << endl;
        }
        bill.close();

        ifstream kh;
        kh.open("s4.txt");
        while (!kh.eof())
        {
            getline(kh, d);
            cout << d << endl;
        }
        kh.close();

        pauseScreen();
        options();
    }

    void addmarkad()
    {
        clearScreen();
        cout << "=== ADD STUDENT MARKS ===" << endl
             << endl;
        cout << "For which student you want to add marks" << endl;
        cout << "1- Bilal Ahmed Khan" << endl;
        cout << "2- M.Usman Riaz" << endl;
        cout << "3- Bazil Ahmed Khan" << endl;
        cout << "4- Abdullah Usman" << endl;
        cout << "5- Return to main menu" << endl;
        int ch;
        cout << "\nEnter choice: ";
        cin >> ch;
        if (ch == 1)
        {
            s1.addmarks();
            s1marks();
        }
        else if (ch == 2)
        {
            s2.addmarks();
            s2marks();
        }
        else if (ch == 3)
        {
            s3.addmarks();
            s3marks();
        }
        else if (ch == 4)
        {
            s4.addmarks();
            s4marks();
        }
        else if (ch == 5)
        {
            options();
            return;
        }
        else
        {
            cout << "\nWrong choice...." << endl;
            pauseScreen();
            addmarkad();
            return;
        }

        options();
    }

    void addattendance()
    {
        clearScreen();
        cout << "=== ADD STUDENT ATTENDANCE ===" << endl
             << endl;
        cout << "For which student you want to add attendence" << endl;
        cout << "1- Bilal Ahmed Khan" << endl;
        cout << "2- M.Usman Riaz" << endl;
        cout << "3- Bazil Ahmed Khan" << endl;
        cout << "4- Abdullah Usman" << endl;
        cout << "5- Return to main menu" << endl;
        int ch;
        cout << "\nEnter choice: ";
        cin >> ch;

        if (ch == 1)
        {
            time_t now = time(0);
            tm *ltm = localtime(&now);

            char date[11];
            strftime(date, sizeof(date), "%Y-%m-%d", ltm);

            cout << "\nToday's date: " << date << endl;

            string word;
            cout << "Enter Attendence: ";
            cin >> word;

            ofstream file("s1adt.txt", ios::app);

            if (file.is_open())
            {
                file << date << " - " << word << endl;
                file.close();
                cout << "\nData saved successfully!" << endl;
            }
            else
            {
                cout << "\nError opening file!" << endl;
            }
        }
        else if (ch == 2)
        {
            time_t now = time(0);
            tm *ltm = localtime(&now);

            char date[11];
            strftime(date, sizeof(date), "%Y-%m-%d", ltm);

            cout << "\nToday's date: " << date << endl;

            string word;
            cout << "Enter Attendence: ";
            cin >> word;

            ofstream file("s2.adt.txt", ios::app);

            if (file.is_open())
            {
                file << date << " - " << word << endl;
                file.close();
                cout << "\nData saved successfully!" << endl;
            }
            else
            {
                cout << "\nError opening file!" << endl;
            }
        }
        else if (ch == 3)
        {
            time_t now = time(0);
            tm *ltm = localtime(&now);

            char date[11];
            strftime(date, sizeof(date), "%Y-%m-%d", ltm);

            cout << "\nToday's date: " << date << endl;

            string word;
            cout << "Enter Attendence: ";
            cin >> word;

            ofstream file("s3.adt.txt", ios::app);

            if (file.is_open())
            {
                file << date << " - " << word << endl;
                file.close();
                cout << "\nData saved successfully!" << endl;
            }
            else
            {
                cout << "\nError opening file!" << endl;
            }
        }
        else if (ch == 4)
        {
            time_t now = time(0);
            tm *ltm = localtime(&now);

            char date[11];
            strftime(date, sizeof(date), "%Y-%m-%d", ltm);

            cout << "\nToday's date: " << date << endl;

            string word;
            cout << "Enter Attendence: ";
            cin >> word;

            ofstream file("s4.adt.txt", ios::app);

            if (file.is_open())
            {
                file << date << " - " << word << endl;
                file.close();
                cout << "\nData saved successfully!" << endl;
            }
            else
            {
                cout << "\nError opening file!" << endl;
            }
        }
        else if (ch == 5)
        {
            options();
            return;
        }
        else
        {
            cout << "\nWrong choice...." << endl;
            pauseScreen();
            addattendance();
            return;
        }

        pauseScreen();
        options();
    }
};

class stu_login : public student
{
    friend void display();
    friend void set();

private:
    int n, k, l, fpass, newpass, newpass2;

public:
    stu_login()
    {
        clearScreen();
        cout << "=== STUDENT LOGIN ===" << endl
             << endl;
        cout << "Enter Student ID : ";
        cin >> n;
        cout << "Enter Student password: ";
        cin >> k;

        if (n == s1.roll && k == st01)
        {
            st_one();
        }
        else if (n == s2.roll && k == st02)
        {
            st_two();
        }
        else if (n == s3.roll && k == st03)
        {
            st_three();
        }
        else if (n == s4.roll && k == st04)
        {
            st_four();
        }
        else
        {
            cout << "\nWrong Username or Password" << endl;
            pauseScreen();
            stu_login();
        }
    }

    void dis()
    {
        clearScreen();
        cout << "----------------------------" << endl;
        cout << "       Welcome Back         " << endl;
        cout << "----------------------------" << endl;
        cout << "1-Personal Information" << endl;
        cout << "2-Semester Attendence" << endl;
        cout << "3-Semester Marks" << endl;
        cout << "4-Change your Password" << endl;
        cout << "5-Return to the Main Menu" << endl;
        cout << "\nEnter Choice: ";
        cin >> l;
    }

    void st_one()
    {
        dis();

        if (l == 1)
        {
            clearScreen();
            cout << "=== PERSONAL INFORMATION ===" << endl
                 << endl;
            ifstream bel("s1.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_one();
        }
        else if (l == 2)
        {
            clearScreen();
            cout << "=== ATTENDANCE RECORD ===" << endl
                 << endl;
            ifstream bel("s1adt.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_one();
        }
        else if (l == 3)
        {
            clearScreen();
            cout << "=== MARKS RECORD ===" << endl
                 << endl;
            ifstream bel("s1marks.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_one();
        }
        else if (l == 4)
        {
            clearScreen();
            cout << "=== CHANGE PASSWORD ===" << endl
                 << endl;
            cout << "Enter New Password: ";
            cin >> newpass;
            cout << "Re-enter New Password: ";
            cin >> newpass2;

            if (newpass == newpass2)
            {
                st01 = newpass;
                savePasswords();
                cout << "\nPassword updated successfully!" << endl;
            }
            else
            {
                cout << "\nPasswords do not match!" << endl;
            }

            pauseScreen();
            st_one();
        }
        else if (l == 5)
        {
            clearScreen();
            display();
        }
        else
        {
            cout << "\nWrong Entry" << endl;
            pauseScreen();
            st_one();
        }
    }

    void st_two()
    {
        dis();
        if (l == 1)
        {
            clearScreen();
            cout << "=== PERSONAL INFORMATION ===" << endl
                 << endl;
            ifstream bel("s2.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_two();
        }
        else if (l == 2)
        {
            clearScreen();
            cout << "=== ATTENDANCE RECORD ===" << endl
                 << endl;
            ifstream bel("s2adt.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_two();
        }
        else if (l == 3)
        {
            clearScreen();
            cout << "=== MARKS RECORD ===" << endl
                 << endl;
            ifstream bel("s2marks.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_two();
        }
        else if (l == 4)
        {
            clearScreen();
            cout << "=== CHANGE PASSWORD ===" << endl
                 << endl;
            cout << "Enter New Password: ";
            cin >> newpass;
            cout << "Re-enter New Password: ";
            cin >> newpass2;

            if (newpass == newpass2)
            {
                st02 = newpass;
                savePasswords();
                cout << "\nPassword updated successfully!" << endl;
            }
            else
            {
                cout << "\nPasswords do not match!" << endl;
            }

            pauseScreen();
            st_two();
        }
        else if (l == 5)
        {
            clearScreen();
            display();
        }
        else
        {
            cout << "\nWrong Entry" << endl;
            pauseScreen();
            st_two();
        }
    }

    void st_three()
    {
        dis();

        if (l == 1)
        {
            clearScreen();
            cout << "=== PERSONAL INFORMATION ===" << endl
                 << endl;
            ifstream bel("s3.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_three();
        }
        else if (l == 2)
        {
            clearScreen();
            cout << "=== ATTENDANCE RECORD ===" << endl
                 << endl;
            ifstream bel("s3.adt.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_three();
        }
        else if (l == 3)
        {
            clearScreen();
            cout << "=== MARKS RECORD ===" << endl
                 << endl;
            ifstream bel("s3marks.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_three();
        }
        else if (l == 4)
        {
            clearScreen();
            cout << "=== CHANGE PASSWORD ===" << endl
                 << endl;
            cout << "Enter New Password: ";
            cin >> newpass;
            cout << "Re-enter New Password: ";
            cin >> newpass2;

            if (newpass == newpass2)
            {
                st03 = newpass;
                savePasswords();
                cout << "\nPassword updated successfully!" << endl;
            }
            else
            {
                cout << "\nPasswords do not match!" << endl;
            }

            pauseScreen();
            st_three();
        }
        else if (l == 5)
        {
            clearScreen();
            display();
        }
        else
        {
            cout << "\nWrong Entry" << endl;
            pauseScreen();
            st_three();
        }
    }

    void st_four()
    {
        dis();

        if (l == 1)
        {
            clearScreen();
            cout << "=== PERSONAL INFORMATION ===" << endl
                 << endl;
            ifstream bel("s4.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_four();
        }
        else if (l == 2)
        {
            clearScreen();
            cout << "=== ATTENDANCE RECORD ===" << endl
                 << endl;
            ifstream bel("s4.adt.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_four();
        }
        else if (l == 3)
        {
            clearScreen();
            cout << "=== MARKS RECORD ===" << endl
                 << endl;
            ifstream bel("s4marks.txt");
            string s;
            while (!bel.eof())
            {
                getline(bel, s);
                cout << s << endl;
            }
            bel.close();

            pauseScreen();
            st_four();
        }
        else if (l == 4)
        {
            clearScreen();
            cout << "=== CHANGE PASSWORD ===" << endl
                 << endl;
            cout << "Enter New Password: ";
            cin >> newpass;
            cout << "Re-enter New Password: ";
            cin >> newpass2;

            if (newpass == newpass2)
            {
                st04 = newpass;
                savePasswords();
                cout << "\nPassword updated successfully!" << endl;
            }
            else
            {
                cout << "\nPasswords do not match!" << endl;
            }

            pauseScreen();
            st_four();
        }
        else if (l == 5)
        {
            clearScreen();
            display();
        }
        else
        {
            cout << "\nWrong Entry" << endl;
            pauseScreen();
            st_four();
        }
    }
};

void display()
{
    set();
    int n;
    int r, p;

    cout << "--------------------------------------" << endl;
    cout << "    Academic Management System        " << endl;
    cout << "--------------------------------------" << endl;
    cout << "Do you want to login as Student or admin\n 1: Admin \n 2: Student \n 3: Exit \n Enter:";
    cin >> n;

    if (n == 1)
    {
        admin a1;
    }
    else if (n == 2)
    {
        stu_login w2;
    }
    else if (n == 3)
    {
        cout << "Exiting...." << endl;
    }
    else
    {
        cout << "Wrong value Try again...." << endl;
        display();
    }
}

int main()
{
    loadPasswords();
    display();
    // cout<<st01;

    return 0;
}