#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"
#include "clsDeveloper.h"

using namespace std;

int main()

{

    clsEmployee Employee(10, "Mohammed", "Almomany", "A@a.com", "8298982", "Med-Engineer", "Engineering", 3000);
    clsDeveloper Developer(10, "Mohammed", "Almomany", "A@a.com", "8298982", "Med-Engineer", "Engineering", 3000, "C++");
  

    clsPerson* Person1 = &Employee;
    clsPerson* Person2 = &Developer;

    Person1->Print();
    Person2->Print();


    system("pause>0");
    return 0;
}
