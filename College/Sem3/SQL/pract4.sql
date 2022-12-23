-- Practical 4
--  Create following tables as described below:
--  Table : Student_Result
-- Attribute Type Size Constraint
-- StudentID VARCHAR 6 Primary Key
-- Name VARCHAR 10
-- Marks1 Number 5
-- Marks2 Number 5
-- Marks3 Number 5
CREATE TABLE student
(
ID INT PRIMARY KEY ,name VARCHAR(10),
Marks1 NUMBER(5) ,Marks2 NUMBER (5),Marks3 NUMBER (5));
insert into student (ID, name, Marks1, Marks2, Marks3)
values (1, 'A', 85, 57, 69);
insert into student (ID, name, Marks1, Marks2, Marks3)
values (2, 'B', 86, 67, 59);
insert into student (ID, name, Marks1, Marks2, Marks3)
values (3, 'C', 45, 55, 64);
insert into student (ID, name, Marks1, Marks2, Marks3)
values (4, 'D', 65, 87, 90);
List the names of Students having ‘a’ as the second letter in their names.
SELECT * FROM STUDENT
WHERE NAME LIKE '_a%';

-- List the names of Students whose names start with ‘N’.
SELECT * FROM STUDENT
WHERE NAME LIKE 'N%';
ALTER TABLE STUDENT ADD SUM NUMBER;
ALTER TABLE STUDENT ADD PER NUMBER;
SELECT ID,NAME,(MARKS1 + MARKS2 + MARKS3) AS SUM FROM STUDENT;
-- Find out the percentage of three subject marks.
SELECT ID,NAME,
(MARKS1 + MARKS2 + MARKS3) AS SUM ,
((MARKS1 + MARKS2 + MARKS3) /3 ) AS PER FROM STUDENT;
SELECT * FROM STUDENT WHERE MARKS1 BETWEEN 50