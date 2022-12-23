-- Aim: Retrieving, Restricting and Sorting Data(DRL)
ALTER TABLE FACULTY
ADD SALARY INT;
SELECT * FROM FACULTY;
-- Query 1: Write a query to display the name and salary for all faculties whose salary is not in the
-- range $10,000 through $15,000.
SELECT NAME, SALARY FROM FACULTY
WHERE SALARY NOT BETWEEN 10000 AND 15000;
-- Query 2: Write a query to display the name and department ID of all faculties in departments in
-- ascending order.
SELECT ID,NAME FROM DEPARTMENT ORDER BY NAME ASC;
-- Query 3: Write a query to display the name and salary for all faculties whose salary is not in the
-- range $10,000 through $15,000 and are in department ‘IT’ and ‘CE’.
select name, salary from faculty where (salary not between 10000 and 15000);
-- Query 4: Write a query to display the first name of all students who have both "A" and "C" in
-- their first name.
select s_name from student where ( s_name like '%a%') and ( s_name like '%c%');
-- Query 5: Write a query to display all data of students whose city is ‘anand’ and ‘ahmedabad’.
select * from student where city='Anand' or city='Ahmedabad';

-- Query 6: Write a query to display all data of students whose name starts with "a" and ends with
-- "o.
select * from student where s_name like 'n%' and '%l';
Result is empty.
Query 7: Selects all fields from "faculty " where salary is "10000" AND city is Nadiad.
select * from faculty where salary=10000 and city='nadiad';