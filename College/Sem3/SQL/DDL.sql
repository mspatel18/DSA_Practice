-- Aim: Creating and manipulating database objects and applying Constraints
-- (DDL)
-- Creating a Table with the Create Table Tool:
CREATE TABLE student1
( ID VARCHAR(5)
PRIMARY KEY,
CITY VARCHAR (10));



INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S101', 'NADIAD ' );
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S102', 'ANAND ');
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S103', 'AHMEDABAD ');
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S104', 'VADODARA ');
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S105', 'SURAT ' );
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S106', 'MUMBAI ' );
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S107', 'DELHI ' );
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S108', 'RAJKOT ');
INSERT INTO STUDENT1 ( ID, CITY)
VALUES ( 'S109', 'JAIPUR ' );
INSERT INTO STUDENT1( ID, CITY)
VALUES ( 'S110', 'PUNE ');


CREATE TABLE faculty (
ID VARCHAR(5)
PRIMARY KEY ,
name VARCHAR(10));
INSERT INTO FACULTY ( ID, NAME)
VALUES ( 'F101', 'A ' );
INSERT INTO FACULTY ( ID, NAME)
VALUES ( 'F102', 'B ' );
INSERT INTO FACULTY ( ID, NAME)
VALUES ( 'F103', 'C ');
INSERT INTO FACULT ( ID, NAME )
 VALUES ( 'F104', 'D ');
 INSERT INTO FACULTY ( ID, NAME)
 VALUES ( 'F105', 'E ');
 INSERT INTO FACULTY ( ID, NAME)
 VALUES ( 'F106', 'F ');
 INSERT INTO FACULTY ( ID, NAME)
VALUES ( 'F107', 'G ');
INSERT INTO FACULTY ( ID, NAME)
VALUES ( 'F108', 'H ');
INSERT INTO FACULTY ( ID, NAME)
VALUES ( 'F109', 'I ' );
INSERT INTO FACULTY ( ID, NAME)
VALUES ( 'F110', 'J ');


CREATE TABLE department(
ID VARCHAR(5),
PRIMARY KEY ,
name VARCHAR(10)
);
INSERT INTO DEPARTMENT ( ID, NAME)
VALUES ( 'D101', 'IT ');
INSERT INTO DEPARTMENT ( ID, NAME)
VALUES ( 'D102', 'CP ');
INSERT INTO DEPARTMENT ( ID, NAME)
VALUES ( 'D103', 'FPT ');
INSERT INTO DEPARTMENT ( ID, NAME)
VALUES ( 'D104', 'EC ');
INSERT INTO DEPARTMENT ( ID, NAME)
VALUES ( 'D105', 'CIVIL ');

CREATE TABLE book
( ID VARCHAR(5) PRIMARY KEY , name VARCHAR(10));
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B101', 'B1 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B102', 'B2 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B103', 'B3 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B104', 'B4 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B105', 'B5 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B106', 'B6 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B107', 'B7 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B108', 'B8 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B109', 'B9 ');
INSERT INTO BOOK ( ID, NAME)
VALUES ( 'B110', 'B10 ');

CREATE TABLE bookrecord ( ID VARCHAR(5) PRIMARY KEY , name VARCHAR(10));

-- Use Alter Tool:
ALTER TABLE STUDENT1
ADD DOB DATE;
ALTER TABLE STUDENT1
MODIFY DOB VARCHAR(10);
ALTER TABLE STUDENT1
ADD COURSE VARCHAR(10);
ALTER TABLE BOOK
ADD DISCRIPTION VARCHAR(10);
ALTER TABLE BOOK
MODIFY DISCRIPTION VARCHAR(15);
ALTER TABLE FACULTY
ADD CITY VARCHAR(15);
-- Use Drop Tool:
ALTER TABLE FACULTY
DROP COLUMN CITY;
ALTER TABLE STUDENT1
DROP COLUMN DOB;