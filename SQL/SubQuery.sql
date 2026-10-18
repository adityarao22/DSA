use aditya;

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

select name , salary from employee where salary = (select min(salary) from employee);
+--------+--------+
| name   | salary |
+--------+--------+
| Aditya |  50000 |
+--------+--------+

select name from employee where salary > (select salary from employee where name = "Rahul");
+-------+
| name  |
+-------+
| Amit  |
| Priya |
+-------+

select name from employee where salary > ( select avg(salary) from employee where department="IT");
+-------+
| name  |
+-------+
| Amit  |
| Priya |
+-------+

