/*
  Assignment2-6.cpp: 
                  driver program that will calculate the mpg of a 20 gallon 
                  vehicle whom does 23.5 mpg in "town" and 28.9 mpg in "highway"
                  
  @author Jose A Huerta <josehuerta115@gmail.com>
  @version 1.0
  
  Algorithm:
            
            START OF PROGRAM 
            
            DECL gallons, townMpg, highwayMpg, totalTownMpg, totalHighwayMpg
            
            SET gallons = 20
            SET townMpg = 23.5
            SET highwayMpg = 28.9
            
            CALC totalTownMpg = gallons * townMpg
            CAlC totalHighwayMpg = gallons * highwayMpg
            
            PRINT "Gas Mileage in Town: " + totalTownMpg
            PRINT " "
            PRINT "Gas Mileage in Highway " + totalHighwayMpg
            
            END OF PROGRAM
             
*/


#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    
    double gallons, townMpg, highwayMpg, totalTownMpg, totalHighwayMpg;
    
    gallons = 20;
    townMpg = 23.5;
    highwayMpg = 28.9;
    
    totalTownMpg = gallons * townMpg;
    totalHighwayMpg = gallons * highwayMpg;
    
    
    cout << "Gas Mileage in Town: " << totalTownMpg<< "\n";
    cout << "Gas Mileage in Highway " << totalHighwayMpg <<"\n";
    
    system("PAUSE");
    return 0;
}
