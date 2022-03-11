/*Goal: practice using a class. 
**Create an array called roster, populate it 
**with multiple instances of Dog, it has a size of SIZE. 
**The create a function called 
**printRoster(roster, SIZE) that will print 
**all the information about all the dogs on the roster.
*/

#include "Dogroster.hpp"


int main()
{
    //ToDo: assign the dogs to an array called roster
    const int SIZE =4;
    Dog roster[SIZE];
  
    //Then assign names to the Dog.
    roster[0].setName("Ricky");
    roster[0].setLicenceNo(4563);

    roster[1].setName("John");
    roster[1].setLicenceNo(3456);

    roster[2].setName("Bumby");
    roster[2].setLicenceNo(3256);

    roster[3].setName("Bia");
    roster[3].setLicenceNo(9892);
    


    //ToDo: declare and define this function
    //in the header file
    printRoster(roster,SIZE);
    return 0;
}