-- Practical 6
-- Consider the table from Practical 1&2 and perform the following (Joins)
CREATE TABLE product
( ID VARCHAR(5) PRIMARY KEY , name VARCHAR(10));
INSERT INTO product ( ID, name)
VALUES ( 'p101', 'pizza');  
INSERT INTO product ( ID, name)
VALUES ( 'p102', 'milk');
INSERT INTO product ( ID, name)
VALUES ( 'p103', 'sugar');
INSERT INTO product ( ID, name)
VALUES ( 'p104', 'cotton');
INSERT INTO product ( ID, name)
VALUES ( 'p105', 'salt');
CREATE TABLE productlog
( p_ID VARCHAR(5) PRIMARY KEY , CITY VARCHAR(10));
INSERT INTO productlog ( p_ID, city)
VALUES ( 'p101', 'itly');
INSERT INTO productlog ( p_ID, city)
VALUES ( 'p102', 'anand');
INSERT INTO productlog ( p_ID, city)
VALUES ( 'p103', 'baroda');
INSERT INTO productlog ( p_ID, city)
VALUES ( 'p104', 'kheda');
INSERT INTO productlog ( p_ID, city)
VALUES ( 'p105', 'ajmer');
 
CREATE TABLE customer
( ID VARCHAR(5) PRIMARY KEY , name VARCHAR(10));
INSERT INTO customer ( ID, name)
VALUES ( 'c101', 'purva');
INSERT INTO customer ( ID, name)
VALUES ( 'c102', 'rutvi');
INSERT INTO customer ( ID, name)
VALUES ( 'c103', 'honey');
INSERT INTO customer ( ID, name)
VALUES ( 'c104', 'bhadra');
INSERT INTO customer ( ID, name)
VALUES ( 'c105', 'dipak');
INSERT INTO customer ( ID, name)
VALUES ( 'c106', 'dipti');
CREATE TABLE customerlog
(ID VARCHAR(5) PRIMARY KEY ,item_name VARCHAR(10) ,price VARCHAR(10));
INSERT INTO customerlog ( ID, item_name , price)
VALUES ( 'c101', 'diamond' , '99,00,000');
INSERT INTO customerlog ( ID, item_name , price)
VALUES ( 'c102', 'laptop' , '2,00,000');
INSERT INTO customerlog ( ID, item_name , price)
VALUES ( 'c103', 'make-up' , '5,00,000');
INSERT INTO customerlog ( ID, item_name , price)
VALUES ( 'c104', 'gold' , '50,00,000');
INSERT INTO customerlog ( ID, item_name , price)
VALUES ( 'c105', 'platinum' , '80,00,000');
 
Perform Inner Join on Product and ProductLog
SELECT id,name,city FROM product
INNER JOIN productlog
ON product.id = productlog.p_id;
Perform Left Outer Join on Customer and customerLog
SELECT *FROM customer
LEFT JOIN customerlog
ON customer.id = customerlog.id;
Perform Right Outer Join on Customer and customerLog
SELECT *FROM customer
RIGHT JOIN customerlog
ON customer.id = customerlog.id;
Perform Full Outer Join on Customer and customerLog
SELECT *FROM customer
FULL JOIN customerlog
ON customer.id = customerlog.id;
Perform Cross Join on Product and ProductLog.
 
Perform Cross Join on Product and ProductLog.
SELECT ID,NAME,CITY
FROM PRODUCT
CROSS JOIN PRODUCTLOG;
Perform Union, Intersection and Minus clause on ProductLog and CustomerLog.
SELECT P_ID FROM PRODUCTLOG
UNION
SELECT ID FROM CUSTOMERLOG;
 
Consider the table from Practical 1&2 and perform the following (Subqueries)
Show all books from Book Table who has been borrowed by Student with StudentID 101
from Book Record.
SELECT B_BOOK FROM BOOK WHERE ID='B101';
Show all Product who has been sold with Qty left.
SELECT ID,NAME,QUANTITY
FROM PRODUCT
LEFT JOIN PRODUCTLOG
ON PRODUCT.ID = PRODUCTLOG.P_ID;
Calculate the count of books taken by every student from Book Record table
SELECT NAME,
SUM (B_BOOK)
FROM BOOK
GROUP BY NAME;
 
Show details students who have taken books using Student and Book_Record Tab
SELECT STUDENT1.ID,B_ID,NAME,B_BOOK
FROM STUDENT1
LEFT JOIN BOOK
ON STUDENT1.B_ID = BOOK.ID;