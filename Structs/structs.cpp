#include <iostream>
using namespace std;
int main(){
// our struct for storing student info

struct Student
{
    string name;
    string student_id;
    int subjects_num;
};

int main()
{
    // use of the above Student struct
    Student student1; // declared a variable student1 of type Student
    student1.name = "Binash Ahsan";
    student1.student_id = "SE123";
    student1.subjects_num = 3;

    
    return 0;
}
