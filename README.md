# Implement-cpp-arrays-and-strings
01.
AIM : PRINTING ARRAY ELEMEMTS

THEORY :
- Arrays store multiple elements of the same data type in contiguous memory locations, enabling efficient data management.
- Using loops (commonly a for loop), the program iterates through the array indices to access and print each element.
- Printing array elements helps in verifying the correctness of data storage and manipulation within the program.
- This basic operation forms the foundation for more complex data handling and algorithm implementation in C++.

ALGORITHM:
- Start the program.
- Declare an integer array arr of size 5.
- Display the message "Enter 5 integers:" to prompt the user for input.
- Use a loop that runs from 0 to 4 (total 5 times):
- Read an integer from the user.
- Store the input value in the array at the current index.
- Display the message "Array elements are:" to indicate the output.
- Use another loop that runs from 0 to 4:
- Access each array element at the current index.
- Print the element followed by a space.
- Print a newline to end the output line.
- End the program.

02.
AIM : TO FIND NUMBER IN A GIVEN ARRAY

THEORY :
- The purpose of this program is to search for a specific number within the elements of an array.
- The program examines each array element sequentially to check for a match with the target number.
- This method of searching is known as linear search, where elements are checked one after another until the number is found or the array ends.
- Detecting whether a number exists in an array helps in data validation and decision-making tasks in programming.
- Searching arrays is a fundamental concept that forms the basis for more advanced search algorithms and data manipulation techniques.

ALGORITHM:
- Start the program.
- Declare an integer array arr of size 5, an integer variable num for the number to search, and an integer flag found initialized to 0.
- Prompt the user to enter 5 integers.
- Use a loop from i = 0 to i < 5 to:
- Read each integer from the user.
- Store it in arr[i]
- Prompt the user to enter the number num to search in the array.
- Use another loop from i = 0 to i < 5 to:
- Check if arr[i] equals num.
- If yes, set found to 1 and break the loop.
- Check the value of found:
- If found is 1, print "num is present in the array."
- Otherwise, print "num is not present in the array."
- End the program.
