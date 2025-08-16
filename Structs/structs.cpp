#include <iostream>
using namespace std;
int main(){

// our struct for storing student info
struct Student   // struct is keyword and Student is name of struct
{
// members of strcut
    string name;
    string student_id;
    int subjects_num;
};

// Real life example
struct Book{

}


int main()
{
    // use of the above Student struct
    Student student1;       // declared a variable student1 of type Student
    student1.name = "Binash Ahsan";  
    student1.student_id = "SE123";
    student1.subjects_num = 3;

    //print info on screen
    cout<< "Student name: "<< student1.name <<endl;
    cout<< "ID: "<< student1.student_id << endl;
    cout<< "# of Subjects: " student1.subjects_num << endl;

    return 0;
}


