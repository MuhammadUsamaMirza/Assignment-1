    # Arrays Example: C++

This example project is written in C++, and tested with make and [Catch2](https://github.com/catchorg/Catch2).

### ASSIGNMENT 1

#### Part 1)

Get Input from the user for the number of entries they want to enter in an float array.

    Size of Array : 5
    1st element : 1
    2nd element : 2
    3rd element : 3
    4th element : 4
    5th element : 5

Function to be implemented 
    
    int GetInputFromTheUser ( float * ); 


#### Part 2)

Write a function to display entries in an array
  

    void DisplayArray ( float *, int ); 

Output should be like this 
    "[1,2,3,4,5]"


#### Part 3)
Write a function that will find a number inside the array.
- If number is inside the array you have to return the index of the number. 
- If number present inside the array, then return -1. 
  
        int searchNumber (float, float * , int);


### Run command
`make run`
`make test`



### Notes
- `g++` can be used to compile and link C++ applications for use with existing test harnesses or other C++ testing frameworks.

