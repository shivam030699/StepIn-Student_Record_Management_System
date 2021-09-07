# REQUIREMENTS AND INTRODUCTION FOR STUDENT RECORD MANAGEMENT SYSTEM
# Introduction to STUDENT RECORD MANAGEMENT SYSTEM
Student records are often viewed as paperwork produced for the education bureaucracy. However, a well-designed student record system, whether using paper documents or automated systems, yields many benefits. The most important of these is the ability to report information for decision making about individual students, schools, programs, and school districts. A second benefit, particularly with automated systems, is efficiency in processing and exchanging student records among schools. When student records are added to an overall management information system that includes information on staff, materials, and budgeting for the school or school district, more management activities can be accomplished and efficiency will be improved. Student record systems, thus, play a key role in the overall functioning of the education system; but more importantly, they increase a school's ability to meet the needs of students.
# Objective of SRM
The main objective of the Student Management System is to manage the details of Profiles, Cources, Logins, Exams, Fees. It manages all the information about Profiles, Student, Fees, Profiles. 
# Benifits of SRM
Add student Name.
Add student Mobile Number.
Add student ID.
Add student Stream.
Add student Branch.
# features of our SRM
Add Record.
View Record.
Search Record.
Modify Record.
Delect Record.
Exit
# pictorial rep. for features
![REQ1](https://user-images.githubusercontent.com/89725420/132291652-696b2cca-6e13-4f62-a621-010f56f3f740.PNG)
# Inbuilt features of SRM
create a student record
Delete a student record
View a student record
Update a student record
Save student to file
View student from file
# S.W.O.T analysis
S.W.O.T. analysis is an acronym for examining the internal strengths and weaknesses of an operation and the external opportunities and threats faced by an operation.
# Benifits of S.W.O.T analysis
strength is the internal capabilities (skills, potential) or resource that can lead to the formation of competitive advantages.
weaknesses are activities that an enterprise does not perform very well or resources that are used irrationally.
feasibilities are alternatives that an enterprise can use to achieve strategic goals.
threats are any processes or phenomena that impede the movement of an enterprise towards achieving its mission and goals.
# S.W.O.T analysis for my system
![swot](https://user-images.githubusercontent.com/89725420/132294240-2621a143-e7ff-4bc8-9389-4ef7b8e16baa.PNG)
# 4W's and 1'H
# use of 4W's and 1'H
Four of the W’s (who, what, where, when) and the one H is used to comprehend for details, analyze inferences and judgment to get to the fundamental facts and guide statements to get to the abstraction. The last W (why) is often asked five times so that one can drill down to get to the core of a problem.
#Who:
Company's and there facult can easy manage and view student Record.
#What:
Companys can effectivity manage there records such as Name, Mobile number, ID, Stream, and Branch.
#When:
During STEPin program
#Where:
At LTTS
#How:
During STEPin program the student record can be Added, Viewed, Searched, Modifyed, Delected, exit.
# Requirements (High level and Low level)
High-level and low-level, as technical terms, are used to classify, describe and point to specific goals of a systematic operation; and are applied in a wide range of contexts, such as, for instance, in domains as widely varied as computer science and business administration. High-level describe those operations that are more abstract in nature; wherein the overall goals and systemic features are typically more concerned with the wider, macro system as a whole. Low-level describes more specific
# High Level Requirements for our system:
| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User shall be able to add new student record | Techincal | IMPLEMENTED | 
| HR02 | User shall be able to view a student record | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to search a student record | Techincal |  IMPLEMENTED  |
| HR03 | User shall be able to modifyed a student record | Techincal |  IMPLEMENTED  |
| HR04 | User shall be able to delete a student record | Techincal |  IMPLEMENTED  |
| HR05 | User shall be able to save records in a file | Techincal |  IMPLEMENTED  |
| HR06 | User shall be able to view data from a file | Techincal |  IMPLEMENTED  |
| HR07 | Data should not be lost in case of faliure | Scenario | FUTURE |
| HR08 | Data should always be stored when closing the system | Scenario |  IMPLEMENTED |
# low level Requirements for our system:
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | (1). New record shall be added by providing all the asked information                                                                                                    (2). Id should be unique and validated from persistant file or else candidate record should not be accepted. | HR01 |  IMPLEMENTED  |
| LR02 | Reading candidate data should be possible in 2 ways (1). first being by searching by sfid of a candidate (2). By printing all the records available | HR02 |  IMPLEMENTED |
| LR03 | While viewing all the records, only 10 records per page should be visible and should add 10 more if user wants to see more | HR02 | FUTURE |
| LR04 | If user searches for an invalid ID "No Record Found" message should be displayed | HR02 |  IMPLEMENTED  |
| LR05 | User need to search by name for the candidate record to be updated, if no such record is available then "No Record Found" Message should be displayed | HR03 |  IMPLEMENTED  |
| LR06 | User need to search by name for the pateint record to be deleted, if no such record is available then "No Record Found" Message should be displayed | HR04 |  IMPLEMENTED  |
| LR05 | User shall be able to save the files, if file already exists then it should append to file and should not overwrite it and if file does not exists then it should create a new file | HR05 |  IMPLEMENTED  |
| LR06 | If opening the file fails, then the system should prompt the message "Unable to access file" and should not end the program execution | HR05, HR06, HR07, HR08 |  IMPLEMENTED  |
| LR07 | When user Log off the system perform check and save data to file (1). If new data in inserted add it to file (2). If New data is not inserted do not add anything to file | HR08 |  IMPLEMENTED  |








