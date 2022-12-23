Practical 8
Aim: Securing data using Views and Controlling User Access
(DCL)
1. Give the other user permission only to view records in the table
Student with an option to further grant permission on these tables to
other users.
Command:
grant select on student to hunter;
2. Give the other user yourself all data manipulation privileges on the
table Book and Book Record without an option to further grant
permission on the same table to other users.
Command:
grant ALL PRIVILEGE on student to hunter;
3. Take back all privileges given to the user on the table Student.
Command:
revoke ALL PRIVILEGE on student from hunter;