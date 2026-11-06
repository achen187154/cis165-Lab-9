//Name: Angelina Chen
//Date: November 5, 2026
//Course:CIS-165
//Description: Write min_max.cpp. Read a series of integers using a loop. The value -99 ends the series; 
//it is a sentinel, not a data value. After the sentinel, display the largest and smallest values entered with clear labels.

#include<iostream>
using namespace std;

int main(){

    //Variables store minimum value, max value, and whatever the current input is
    int min;
    int max;
    int entry;

    //Asks for initial number, which can be assigned to max or min or lead to the no data route
    cout << "Give me a number, -99 to end: ";
    cin >> entry;

    //No data route, doesn't even enter while loop. If statement ensures the loop isnt encountered.
    if (entry == -99){
        cout << "You did not submit any prior numbers, no min or max number";
    }
    //If the data is valid, both max and min are set to that as the baseline
    else
    {
        min=entry;
        max=entry;

        //While the user doesn't quit
        while (entry!=-99)
        {
            cout << "Give me another number, -99 to end: ";
            cin >> entry;

            //This if statemente ensures the -99 isn't assigned to a value by breaking out
            if (entry==-99)
            {
                break;
            }

            //If the values are lower than min, the new min is established and vise versa
            if (entry < min)
            {
                min = entry;
            }
            else if (entry > max)
            {
                max = entry;
            }
        }

        //When out of the loop, the final max and min is printed
        cout << "Min Value: " << min << " & Max Value: " << max << "\n";
    }
    



}