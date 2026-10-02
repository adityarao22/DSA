use aditya;

select *from employee;
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  2 | Rahul  |  60000 | HR         |
|  3 | Sneha  |  55000 | Finance    |
|  4 | Amit   |  70000 | IT         |
|  5 | Priya  |  65000 | HR         |
+----+--------+--------+------------+

select count(*) from employee;
+----------+
| count(*) |
+----------+
|        5 |
+----------+

select count(*) from employee where department="IT";
+----------+
| count(*) |
+----------+
|        2 |
+----------+

select count(*) from employee where salary>60000;
+----------+
| count(*) |
+----------+
|        2 |
+----------+

select sum(salary) from employee;
+-------------+
| sum(salary) |
+-------------+
|      300000 |
+-------------+

select sum(salary) from employee where department='IT';
+-------------+
| sum(salary) |
+-------------+
|      120000 |
+-------------+

select avg(salary) from employee; 
+-------------+
| avg(salary) |
+-------------+
|  60000.0000 |
+-------------+

select avg(salary) from employee where department='HR';
+-------------+
| avg(salary) |
+-------------+
|  62500.0000 |
+-------------+

select min(salary) from employee; 
+-------------+
| min(salary) |
+-------------+
|       50000 |
+-------------+

select name , salary from employee where salary= ( select min(salary) from employee);
+--------+--------+
| name   | salary |
+--------+--------+
| Aditya |  50000 |
+--------+--------+

select name , salary from employee where salary =(select max(salary) from employee);
+------+--------+
| name | salary |
+------+--------+
| Amit |  70000 |
+------+--------+

select count(*) from employee where salary >55000;
+----------+
| count(*) |
+----------+
|        3 |
+----------+

select sum(salary) from employee where department='HR';
+-------------+
| sum(salary) |
+-------------+
|      125000 |
+-------------+

select avg(salary) from employee where salary>50000;
+-------------+
| avg(salary) |
+-------------+
|  62500.0000 |
+-------------+

