# 🔐 Basic Password Strength Checker (C Project)

## 📌 Project Details
- Project Title: Basic Password Checker
- Project Type: Mini Project
- Programming language :C
- Semester : First
- Purpose: To validate password strength using basic programming logic
  This project checks whether a user-entered password meets minimum security requirements and provides feedback accordingly.

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


## ♨️Utilities of the Project
- Helps users create strong and secure passwords.
- Prevents the use of weak passwords by validating basic security rules.
- Improves understanding of password security concepts.
- Can be used as a basic module in login and registration systems.
    
## 🎗️Future Scope of the Project
1.Special characters (such as @, #, $) can be added as an additional password requirement.
2.The program can be enhanced to hide the password input instead of displaying it on the screen.
3.Password strength levels such as Weak, Medium, and Strong can be implemented.
4.The program can be modified to provide real-time feedback while typing the password.
5.The password checker can be integrated into a login or registration system.

## Output(screenshot).
<img width="826" height="217" alt="dipak output" src="https://github.com/user-attachments/assets/3af02ab0-0267-4f57-a66f-7250b2f97e85" />


