CREATE DATABASE PRACTISE1;

USE PRACTISE1;

CREATE TABLE EmployeeDetail(
	EmpID int NOT NULL,
    Project varchar(500),
    EmpPosition Char(20),
    DOJ date
);

CREATE TABLE Employee (
EmpID int NOT NULL,
EmpName Varchar(250),
Gender Char,
Salary int,
City Char(20) );

-- first run the above code then below

INSERT INTO EmployeeDetail
VALUES (1, 'P1', 'Executive', '2019-01-26'),
(2, 'P2', 'Executive', '2020-05-04'),
(3, 'P1', 'Lead', '2021-10-21'),
(4, 'P3', 'Manager', '2019-11-29'),
(5, 'P2', 'Manager', '2020-08-01');

INSERT INTO Employee
VALUES (1, 'Arjun', 'M', 75000, 'Pune'),
(2, 'Ekadanta', 'M', 125000, 'Bangalore'),
(3, 'Lalita', 'F', 150000 , 'Mathura'),
(4, 'Madhav', 'M', 250000 , 'Delhi'),
(5, 'Visakha', 'F', 120000 , 'Mathura');


-- Q1. Find list of employees with salary range 2L to 3L

SELECT * FROM Employee
WHERE Salary > 200000 AND Salary < 300000;

SELECT * FROM Employee
WHERE Salary BETWEEN 200000 AND 300000;

-- Q2. List of Emp from same city

 SELECT E1.EmpID, E1.EmpName, E1.City
 FROM Employee E1, Employee E2
 Where E1.city = E2.city AND E1.EmpID != E2.EmpID;
 
 -- Q3. Find Null Values in table
 
 SELECT * FROM Employee
 WHERE EmpID is NULL;
 
 -- Q4. Find Cummulative sum of employee's salary
 
 SELECT EmpID, EmpName, SUM(Salary) OVER (ORDER By EmpID) AS commulative_sum
 FROM Employee;
 
-- Q5. What is the male and female employee ratio

SELECT 
    (SUM(gender = 'M') * 100.0 / COUNT(*)) AS "Male Ratio",
    (SUM(gender = "F") * 100.0 / COUNT(*)) AS "Female Ratio"
FROM employee;	

-- Q6. Fetch 50% Record from the Employee Table

SELECT * FROM Employee
WHERE EmpID <= (SELECT COUNT(*) FROM employee)/2;

SELECT * FROM 
	(SELECT *, row_number() OVER(ORDER BY EmpID) AS RowNumber FROM Employee)
	AS Emp
WHERE Emp.RowNumber <= (SELECT COUNT(*)/2 from Employee);

-- Q7. Fetch the employee's salary but replace last two digits with 'XX' i.e 12345 will be 123XX

SELECT *, Salary,
CONCAT(SUBSTRING(CAST(Salary AS CHAR), 1, LENGTH(CAST(Salary AS CHAR))-2), 'XX') as masked_number
FROM employee; 


SELECT *, Salary,
CONCAT(LEFT(CAST(Salary AS CHAR), LENGTH(CAST(Salary AS CHAR))-2), 'XX') as masked_number
FROM employee; 


-- Q8. Query to fetch even and odd rows from employee table

SELECT * FROM
	(SELECT *, row_number() OVER(order by EmpID) AS RowNumber FROM Employee)
    AS Emp
WHERE MOD(Emp.RowNumber, 2) != 0;


-- Q9. Query to find all Employee names whose:
		-- 1. Begin with 'A'
		-- 2. Contains 'A' at 2nd place
        -- 3. Contains 'Y' at 2nd last place
        -- 4. End with 'L' and contains 4 alphabets
        -- 5. Begin with 'V' and ends with 'A'

SELECT * FROM Employee
Where EmpName LIKE 'A%';

SELECT * FROM Employee
WHERE EmpName LIKE '_A%';

SELECT * FROM Employee
WHERE EmpName LIKE '%Y_';

SELECT * FROM Employee
WHERE EmpName LIKE "%___L";

SELECT * FROM Employee
WHERE EmpName LIKE 'V%A';


-- Q10. Find list of emp:
	-- 1. starting with vowels without duplicates
    -- 2. ending with vowels without duplicates
    -- 3. starting and ending with vowels without duplicates
    
    
SELECT DISTINCT * FROM Employee
WHERE EmpName LIKE "[aeiou]%";   -- Not work on workbench

SELECT DISTINCT * FROM Employee
WHERE EmpName LIKE "[%aeiou]";

SELECT DISTINCT * FROM Employee
WHERE EmpName LIKE "[aeiou%][aeiou%]"