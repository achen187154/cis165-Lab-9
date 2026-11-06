//Name: Angelina Chen
//Date: November 5, 2026
//Course:CIS-165
//Description: Write min_max.cpp. Read a series of integers using a loop. The value -99 ends the series; 
//it is a sentinel, not a data value. After the sentinel, display the largest and smallest values entered with clear labels.

Plan: First, the goal of the code is to find the max and min values from however many numbers the user wants to provide. This means that there is a loop, and in this case, the loop stops when the user uses the number -99. Therefore, there must be a break whenever the input is -99. Knowing the context, I make the int variables min, max, and entry. Since there is a clause that ends the program when the first provided is -99, I put the loop in a if else statement, so that if the entry is -99, the if statement catches it and produces a no data message. Since the loop is in the else portion, there is no loop for the user to work with. Additionally, if the first entry is not -99, I assign entry value to both min and max before the loop starts. If I had put it in the loop then it would've constantly assigned entry to both variables. Then, within the loop, the loop prompts an entry and then the entry is compared to the max and min values. If the value is less than min, then the value in entry is stored in min, and vise versa for max. After the user has decided that they don't want to input any more numbers, they put -99, which breaks out of the loop. After the loop, the min and max values are printed.

Test            Expected Result     Actual Result       Match
8,3,12,-99      Min:3, Max:12        Min:3, Max:12      Yes
-8,-3,-12,-99.  Min:-12, Max: -3     Min:-12, Max:-3    Yes
5,-99           Min:5, Max:5         Min:5, Max:5       Yes
0,0,-99         Min:0, Max:0         Min:0, Max:0       Yes
-99             No Data Comment     No Data Comment     Yes
-100,0,100      Min:-100, Max:100   Min:-100, Max:100   Yes
Question: 
1. Tracing the first test, which is 9,3,12,-99, the first value inputted is 9, which bypasses the -99 conditin and goes straight to the else portion of the statement. The 9 is assigned to both min and max, which sets the baseline value for comparison. Then, the loop starts, where the user enters 3. The 3 fails the -99 condition, as it is not equal to -99, which then leads to the min condition, where 3 is put against the value stored in min to see which is smaller. 3 is smaller than 9, so the min variable gets assigned 3, which overwrites 9. Since 3 is not bigger than 9, the max condition is false. The loop repeats and asks for a numebr, which is 12. 12 is false for the -99 and min conditions, but it is greater than max, which at the time is 9, so the new max value becomes 12. As of this point, the min is 3 and the max is 12. When the loop repeats, the user breaks out using the -99, which comes true for the -99 condition. After the loop is broken out of, the current max and min is printed.
2. The code keeps -99 out of the loop, because firstly, if the first value is -99, then the loop dooesn't even occur and the no data comment is printed. However, whenever the user decides to input -99 to quit the loop, it is the first condition, in order to prevent the valu -99 being input into the max or min variables. 
3. Assigning the value 0 to the variables max and min may not be a good idea in case the user wants to compare strictly only positive or negative values. If the user only uses 1,2,3, then while the min should be 1, because the min is preset to 0, none of the given values will be less than 0. Vise versa for only negative numbers, where the max would be 0, despite the user not using 0;
4. A value of 0 in a variable is different from an empty variable, as the variable without any value doesn't even have a 0. 