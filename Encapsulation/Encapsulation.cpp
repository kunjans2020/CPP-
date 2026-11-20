//
//#include <iostream>
//using namespace std;
//
//class Car {
//private:
//    // Data members (Attributes)
//    string brand;
//    string model;
//    int year;
//    string color;
//    double price;
//
//public:
//    // Setter methods
//    void setBrand(string b) {
//        brand = b;
//    }
//
//    void setModel(string m) {
//        model = m;
//    }
//
//    void setYear(int y) {
//        year = y;
//    }
//
//    void setColor(string c) {
//        color = c;
//    }
//
//    void setPrice(double p) {
//        price = p;
//    }
//
//    // Getter methods
//    string getBrand() {
//        return brand;
//    }
//
//    string getModel() {
//        return model;
//    }
//
//    int getYear() {
//        return year;
//    }
//
//    string getColor() {
//        return color;
//    }
//
//    double getPrice() {
//        return price;
//    }
//};
//
//int main() {
//    Car c1;
//
//    
//    c1.setBrand("Toyota");
//    c1.setModel("Fortuner");
//    c1.setYear(2025);
//    c1.setColor("Black");
//    c1.setPrice(3500000);
//
//   
//    cout << "Car Details" << endl;
//    cout << "Brand: " << c1.getBrand() << endl;
//    cout << "Model: " << c1.getModel() << endl;
//    cout << "Year: " << c1.getYear() << endl;
//    cout << "Color: " << c1.getColor() << endl;
//    cout << "Price: " << c1.getPrice() << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Employee {
//private:
//    
//    int empId;
//    string empName;
//    int age;
//    string department;
//    double salary;
//
//public:
//    
//    void setEmpId(int id) {
//        empId = id;
//    }
//
//    void setEmpName(string name) {
//        empName = name;
//    }
//
//    void setAge(int a) {
//        age = a;
//    }
//
//    void setDepartment(string dept) {
//        department = dept;
//    }
//
//    void setSalary(double s) {
//        salary = s;
//    }
//
//   
//    int getEmpId() {
//        return empId;
//    }
//
//    string getEmpName() {
//        return empName;
//    }
//
//    int getAge() {
//        return age;
//    }
//
//    string getDepartment() {
//        return department;
//    }
//
//    double getSalary() {
//        return salary;
//    }
//};
//
//int main() {
//    Employee e1;
//
//    
//    e1.setEmpId(101);
//    e1.setEmpName("Rahul");
//    e1.setAge(25);
//    e1.setDepartment("IT");
//    e1.setSalary(35000);
//
//    
//    cout << "Employee Details" << endl;
//    cout << "Employee ID: " << e1.getEmpId() << endl;
//    cout << "Employee Name: " << e1.getEmpName() << endl;
//    cout << "Age: " << e1.getAge() << endl;
//    cout << "Department: " << e1.getDepartment() << endl;
//    cout << "Salary: " << e1.getSalary() << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    
//    int rollNo;
//    string name;
//    int age;
//    string course;
//    float marks;
//
//public:
//   
//    void setRollNo(int r) {
//        rollNo = r;
//    }
//
//    void setName(string n) {
//        name = n;
//    }
//
//    void setAge(int a) {
//        age = a;
//    }
//
//    void setCourse(string c) {
//        course = c;
//    }
//
//    void setMarks(float m) {
//        marks = m;
//    }
//
//   
//    int getRollNo() {
//        return rollNo;
//    }
//
//    string getName() {
//        return name;
//    }
//
//    int getAge() {
//        return age;
//    }
//
//    string getCourse() {
//        return course;
//    }
//
//    float getMarks() {
//        return marks;
//    }
//};
//
//int main() {
//    Student s1;
//
//    
//    s1.setRollNo(101);
//    s1.setName("Rahul");
//    s1.setAge(20);
//    s1.setCourse("BCA");
//    s1.setMarks(85.5);
//
//   
//    cout << "Student Details" << endl;
//    cout << "Roll Number: " << s1.getRollNo() << endl;
//    cout << "Name: " << s1.getName() << endl;
//    cout << "Age: " << s1.getAge() << endl;
//    cout << "Course: " << s1.getCourse() << endl;
//    cout << "Marks: " << s1.getMarks() << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Convert {
//private:
//    float inches;
//
//public:
//    void getData() {
//        cout << "Enter inches: ";
//        cin >> inches;
//    }
//
//    void convertToFeet() {
//        float feet = inches / 12;
//        cout << "Feet = " << feet << endl;
//    }
//};
//
//int main() {
//    Convert c1;
//
//    c1.getData();
//    c1.convertToFeet();
//
//    return 0;
//}


#include <iostream>
using namespace std;
class Time {
private:
    int totalSeconds;
    int hours, minutes, seconds;

public:
    // Setter method
    void setData(int s) {
        totalSeconds = s;
    }

    // Conversion method
    void convertTime() {
        hours = totalSeconds / 3600;
        minutes = (totalSeconds % 3600) / 60;
        seconds = totalSeconds % 60;
    }

    // Getter method
    void display() {
        cout << "Time in HH:MM:SS = ";

        if (hours < 10) cout << "0";
        cout << hours << ":";

        if (minutes < 10) cout << "0";
        cout << minutes << ":";

        if (seconds < 10) cout << "0";
        cout << seconds << endl;
    }
};

int main() {
    Time t1;
    int s;

    cout << "Enter total seconds: ";
    cin >> s;

    t1.setData(s);
    t1.convertTime();
    t1.display();

    return 0;
}

