-- Aim: Manipulating Data with Database Objects (DML)
-- Perform exercise to Retrieve:
SELECT name FROM student1;
SELECT id,city FROM student1;
SELECT name FROM book;
SELECT ID,city FROM student1 WHERE id='S101';
SELECT ID,city FROM student1
where city='MUMBAI ';
-- Perform exercise to Retrieve :
SELECT ID,city FROM student1 WHERE id='S102' OR ID='S105' OR ID='S107' ;
SELECT COUNT (NAME) FROM DEPARTMENT WHERE NAME='IT';
Perform Exercise to update
UPDATE STUDENT1 SET CITY='VADODARA' WHERE ID='S103';
ALTER TABLE FACULTY
ADD PHONE INT;
UPDATE FACULTY SET PHONE=9922334455 WHERE ID='F101';
ALTER TABLE DEPARTMENT
ADD NOF INT;
UPDATE STUDENT1 SET CITY='BOMBAY' WHERE CITY='MUMBAI';
Perform Exercise to delete:
DELETE FROM STUDENT1;


DELETE FROM STUDENT1 WHERE CITY='AHMEDABAD';
DELETE FROM BOOKRECORD WHERE ID='105';