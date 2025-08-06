#include <iostream>
using namespace std;



// class Student // "Class" is the blue-print of object. "Student"  is user defined 'data type'
// {
//     // public:   // by default private
//     string name;
//     int age, roll;
//     string grade;
//     // Function Getter and Setter - function bana kr bahar use kar sakte hai, private hote hue v

// public:
//     void setname(string s)
//     {
//         if(s.size()==0){
//             cout<<"Please Enter a Name";
//             return;
//         }
//         name = s;
//     }

//     void setage(int a)
//     {
//         if(a < 0 || a >= 100){
//             cout<<"Invalid Age";
//             return;
//         }
//         age = a;
//     }

//     void get()
//     {
//         cout << "\n" << name << " " << age;
//     }
// };

// int main()
// {
//     public part /*
//     Student s1;
//     s1.name = "Sachin";          // "s1" is object
//     s1.age = 19;
//     s1.roll = 58;
//     s1.grade = "A+";

//     cout<< s1.name <<"\n"<< s1.age << "\n" << s1.roll<< "\n"<< s1.grade; */

//     Student s1;
//     s1.setname("Sachin");      // if blank string passes if will handle it
//     s1.setage(-2);
//     s1.get();
// }

// padding - to watch

// Dynammic Memory Allocation

class Student{
    public:
    string name;
    int age, roll;
};

int main(){
    Student *s = new Student;
    (*s).name = "Sachin";
    (*s).age = 19;
    (*s).roll = 58;

    cout<< s->name << " "<< s->age;       // (*s).name == s->name
}