# Password Strength Checker 🔐 

A simple and effective tool to evaluate the strength of passwords. This project analyzes password complexity and provides feedback to improve security.

## Features
- Analyzes password length, use of uppercase, lowercase, numbers, and special characters.
- Provides a strength score from Weak to Strong.
- Offers suggestions to enhance password security.

## Installation & Setup
#### In Linux
1. Install git:
   ```bash
   sudo apt-get install git-all
2. Clone the repository and cd into it
     ```bash
   git clone https://github.com/gasanthosh/Pass_strength_check.git &&
   cd Pass_strength_check.git
3. Compile the file using gcc
      ```bash
      gcc psc.c -o <outputfilename>
4. Give the executable permissions to outputfile and run the file
      ```bash
       chmod +x <outputfile>
      ./<outputfile>
     
 ### Working
 In my case I used gcc compiler and got the compiled file as a.out 
 
- Promts to input the password.
- After entering the password it evaluates every single character.
- Based on evaluation it increments score variable.
- After scoring it generate the strength.
### Example
- Input: "systemadmin". 

  Output: "Password is Weak"

- Input: "systemAadmin". 

  Output: "Password is Average/Moderate"

- Input: "admin@System_1".

  Output: "Password is strong"
