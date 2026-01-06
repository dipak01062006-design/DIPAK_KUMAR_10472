# 🔐 Basic Password Strength Checker (C Project)

## 📌 Aim
The goal of this project is to **create a Basic Password Strength Checker** that validates a user’s password by ensuring:
- ✅ Minimum length requirement  
- ✅ Presence of at least one digit  
- ✅ Presence of at least one uppercase letter  


## 🛠️ Features
- Written in **C language**  
- Uses **strings (char arrays)**, **loops**, **conditional statements**, and **functions**  
- Menu-driven program where the **menu only calls functions** (all logic is inside functions)  
- Provides clear feedback on whether the password is valid or not

## Why did I Made This 
- It is suitable for beginners to practice:
- Using strings in C
- Applying conditional statements
- Working with loops and library functions
- Understanding basic password security concepts


## 🎯 Learning Outcomes
- Understanding of **validation logic**  
- Practice with **string traversal**  
- Hands-on experience with **functions and modular programming**


## How This Project Was Made
- First, the required header files (stdio.h, string.h, ctype.h) were included to handle input/output operations, string length, and character checking.
- A character array was created to store the password entered by the user.
- The user was asked to enter a password using standard input.
- The length of the password was checked using the strlen() function to ensure it meets the minimum length requirement.
- A loop was used to go through each character of the password.
- The isdigit() function was used to check whether the password contains at least one digit.
- The isupper() function was used to check whether the password contains at least one       uppercase letter.
- Based on the checks, the program displays whether the password is Strong or Weak, along with the reason if it is weak.


## 📖 Steps Implemented
1. Ask the user to enter a password string.  
2. Read the password using `scanf` or `gets`.  
3. Create a function to validate the password.  
4. Pass the entered password to the validation function.  
5. Inside the function, check if the password meets the minimum length requirement.  
6. Use a loop to check if the password contains at least one digit.  
7. Use a loop to check if the password contains at least one uppercase letter.  
8. If all conditions are met, return success from the function.  
9. If any condition fails, return failure or an error message.  
10. In `main()`, display whether the password is valid or not based on the function result.  


## Output:
- Enter your password:
- StrongPass1
- Strong Password


## Output with user input:
- Enter your password:
- dipak123
- Weak Password
- Reason: Password must contain at least one digit and one uppercase letter.
