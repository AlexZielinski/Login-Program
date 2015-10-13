# Login-Program

Written in C++
Work in progress

---------------------------------------------------------------------------------
Program description:

Program that gets a user to create an account. The user must enter a username and 
password, however if they do not meet the username or password condition they will 
be notified and allowed to try again. Once the user has created an account they 
will be able to enter their account via logging in. I still havn't figured out 
though what info will be kept on the users account (Mabye keeps track of users 
grades in school and gives them different information like GPA based on their 
grades). Program uses a simple UI based on the user selecting different numbers 
which correspond to different functions.

Ex:
    If you'd like to create an account, press 1.
    If you already have an account and would like to login, press 2.
    
Finally the program will encrypt the users username and password when writing to a 
file. And when the user tries to login, the program decrypts the login information 
data in the text file to verify what the user typed was correct.