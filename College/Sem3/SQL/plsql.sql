Practical 9
Aim: PL/SQL Block Syntax and DML Operation through PL/SQL Block
Code:
DECLARE
 i_date date;
 r_date date;
 bid varchar2(20);
BEGIN
bid:='b102';
 SELECT ISSUE_DATE INTO i_date
 FROM BOOK_RECORDS
 WHERE B_ID= bid;
SELECT RETURN_DATE INTO r_date
 FROM BOOK_RECORDS
 WHERE B_ID= bid;
IF (r_date-i_date)>20 THEN
 UPDATE BOOK_RECORDS
 SET RETURN_DATE = SYSDATE
 WHERE B_ID= bid;
END IF;
END
Output


Practical 10
Aim: Control Structures in PL/SQL
1. Write a PL/SQL block to print the sum of Numbers from 1 to 100.
Code:
declare
n number(10);
s number(10);
begin
n:=1;
s:=0;
for n in 0..100 loop
s:=(s + n);
end loop;
dbms_output.put_line('Sum of 1 to 100 is '||s);
end;


2. Write a PL/SQL block to print if the given number is prime or not.
Code:
declare
n number(10);
s number(10);
temp number(10);
begin
s:=9;
temp:=1;
for n in 2..s/2 loop
IF mod(s,n)=0 THEN
temp:=1;
exit;
END IF;
end loop;
 if temp = 1
 then
 dbms_output.put_line(s ||' is prime number.');
 else
 dbms_output.put_line(s||' is not prime number.');
 end if;
end;
output:
3. Write a PL/SQL program for inserting even numbers in EVEN table and
odd number in ODD table from number 1 to 50.
Code:
declare
n number(10);
begin
for n in 0..50 loop
IF REMAINDER(n,2)=0 THEN
INSERT INTO NUM(even)
VALUES (n);
ELSE
INSERT INTO NUM(odd)
VALUES (n);
END IF;
end loop;
end;
