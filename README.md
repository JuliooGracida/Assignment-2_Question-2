# Report/README File

## **Information**

Name: Julio Gracida  
Email: Jcgdc2@umsystem.edu  
Assignment 2 Question 2  
Anchor 303

## **How to Run the Code**

This code was written using replit.com  
You can copy and paste the URL below to run it in your web browser  
https://replit.com/@SimplyJuly/Assignment-2Question-2#main.cpp

You can also download the files to run it in your preferred IDE. 

It consists of the following files:  
main.cpp (contains menu and switch statement)  
dialogue.h (contains the employee options and menu)  
employee.h (abstract class)  
nonprofessional.h (derived class for nonprofessionals)  
nonprofessional.cpp (definitions for nonprofessional's member functions)  
professional.h (derived class for professionals)  
professional.cpp (definitions for professional's member functions)  

---

### **Requirements For Employees from Assignment 2**
- A company has 2 employee types: (professional and non professional)
- Professional employees have a monthly salary  
- Nonprofessional employees are paid an hourly rate.
- professional employees have a certain number of days of vacation
- nonprofessional employees receive vacation hours based on the number of hours they have worked.
- The amount contributed for health insurance is also different for each kind of employee. 

**Technical Requirements as Translated from Above**  

Create Abstract Class - Employees  
- stores information common to all employees  

Create Derived Classes - Professional and Nonprofessional  

Computing health care contributions and vacation days earned that week(come up with some rules for these 2) Rules:

- Unprofessionals need 50 hours to get one hour of vacation
- professional get 10% added to healthcare while unprofessionals get 5%

### **Screenshots of Program Running**  
  
Selects Nonprofessional Employee  
Works for a week, checks salary, checks employer contribution  
![Screen Shot 2022-10-19 at 1 00 02 AM](https://user-images.githubusercontent.com/98353390/196609672-64050630-9c10-470b-a3a1-c50a89ce03ea.png)  
  
(Still Under Nonprofessional Employee)  
Checks amount of vacation, checks money made so far  
![Screen Shot 2022-10-19 at 1 00 38 AM](https://user-images.githubusercontent.com/98353390/196609882-43a25be7-cd23-4a7d-8e53-a3a4ec983d5e.png)  
  
Changes to a professional Employee  
Works for a week, then checks salary  
![Screen Shot 2022-10-19 at 1 01 04 AM](https://user-images.githubusercontent.com/98353390/196610922-436c5325-9a36-4106-a2e8-225bc12df4b1.png)  
  
(Still Under Professional Employee)  
Checks employer contribution, checks amount of vacation, checks money made so far, then quits program  
![Screen Shot 2022-10-19 at 1 01 25 AM](https://user-images.githubusercontent.com/98353390/196611177-a05ca9d4-3d68-4bc3-ab43-07015c9dd01d.png)






