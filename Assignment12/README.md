 📂Assignment12 - Pattern Printing in C

This repository contains 5 C programs demonstrating different pattern printing techniques using nested loops. Each program accepts the number of rows and columns from the user and prints a specific pattern.

## Files and Descriptions

1. **Q1.c**  
Prints a solid rectangle of asterisks (`*`) based on user input for rows and columns.  
Example for 4x4:  
//Input : 4   4
/*output : *  *  *  *
           *  *  *  *
           *  *  *  *
           *  *  *  *
*/

2. **Q2.c**  
Prints rows where each column contains increasing numbers starting from 1 up to the number of columns.  
Example for 4x3:  
1 2 3
1 2 3
1 2 3
1 2 3

3. **Q3.c**  
Prints rows where each column counts down from the number of columns to 1.  
Example for 3x5:  
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1


4. **Q4.c**  
Prints rows with alternating `*` and `#` symbols in each column.  
Example for 3x4:  
//Input : 3   4
/*output : 
            *       #       *       #       
            *       #       *       #       
            *       #       *       #      
           
*/

5. **Q5.c**  
Prints rows where each row contains the row number repeated in all columns.  
Example for 4x4:  
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4


---

### How to Run

1. Compile each C file using a C compiler, e.g.,  
`gcc Q1.c -o Q1`  
2. Run the executable:  
`./Q1`  
3. Enter the number of rows and columns as prompted.  
4. View the printed pattern.

---

These programs illustrate the use of nested loops and conditionals to print common patterns, useful for learning it