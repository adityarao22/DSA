select * from employee;
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  2 | Rahul  |  60000 | HR         |
|  3 | Sneha  |  55000 | Finance    |
|  4 | Amit   |  70000 | IT         |
|  5 | Priya  |  65000 | HR         |
+----+--------+--------+------------+

select name , department from employee where department='IT';
+--------+------------+
| name   | department |
+--------+------------+
| Aditya | IT         |
| Amit   | IT         |
+--------+------------+

select name , salary from employee where salary>55000;
+-------+--------+
| name  | salary |
+-------+--------+
| Rahul |  60000 |
| Amit  |  70000 |
| Priya |  65000 |
+-------+--------+

select name , salary from employee;
+--------+--------+
| name   | salary |
+--------+--------+
| Aditya |  50000 |
| Rahul  |  60000 |
| Sneha  |  55000 |
| Amit   |  70000 |
| Priya  |  65000 |
+--------+--------+

select name , salary from employee order by salary DESC;
+--------+--------+
| name   | salary |
+--------+--------+
| Amit   |  70000 |
| Priya  |  65000 |
| Rahul  |  60000 |
| Sneha  |  55000 |
| Aditya |  50000 |
+--------+--------+

SELECT  max(salary) as highest_salary from employee;        
+----------------+
| highest_salary |
+----------------+
|          70000 |
+----------------+

select name , salary from employee order by salary desc  limit 1;
+------+--------+
| name | salary |
+------+--------+
| Amit |  70000 |
+------+--------+

select name , salary from employee order by salary desc  limit 3;
+-------+--------+
| name  | salary |
+-------+--------+
| Amit  |  70000 |
| Priya |  65000 |
| Rahul |  60000 |
+-------+--------+

select name , salary from employee order by salary desc  limit 1 offset 1;
+-------+--------+
| name  | salary |
+-------+--------+
| Priya |  65000 |
+-------+--------+

select distinct department from employee;
+------------+
| department |
+------------+
| IT         |
| HR         |
| Finance    |
+------------+

select * from employee where name like 'R%';
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  2 | Rahul |  60000 | HR         |
+----+-------+--------+------------+

select * from employee where name like '%R%';
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  2 | Rahul |  60000 | HR         |
|  5 | Priya |  65000 | HR         |
+----+-------+--------+------------+

select * from employee where name like '%a';
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  3 | Sneha  |  55000 | Finance    |
|  5 | Priya  |  65000 | HR         |
+----+--------+--------+------------+

select * from employee where salary between 50000 and 60000;
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  2 | Rahul  |  60000 | HR         |
|  3 | Sneha  |  55000 | Finance    |
+----+--------+--------+------------+
