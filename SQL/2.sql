use aditya;

show tables;
+------------------+
| Tables_in_aditya |
+------------------+
| employee         |
+------------------+

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

select *from employee where not department="HR";   
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  3 | Sneha  |  55000 | Finance    |
|  4 | Amit   |  70000 | IT         |
+----+--------+--------+------------+

select * from employee where department in("HR","IT");
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  2 | Rahul  |  60000 | HR         |
|  4 | Amit   |  70000 | IT         |
|  5 | Priya  |  65000 | HR         |
+----+--------+--------+------------+

select * from employee where name like "_____";
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  2 | Rahul |  60000 | HR         |
|  3 | Sneha |  55000 | Finance    |
|  5 | Priya |  65000 | HR         |
+----+-------+--------+------------+

select * from employee where name like "____"; 
+----+------+--------+------------+
| id | name | salary | department |
+----+------+--------+------------+
|  4 | Amit |  70000 | IT         |
+----+------+--------+------------+

select * from employee where name like "__i%";
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  4 | Amit   |  70000 | IT         |
|  5 | Priya  |  65000 | HR         |
+----+--------+--------+------------+

select * from employee where name like "_%a";
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  3 | Sneha  |  55000 | Finance    |
|  5 | Priya  |  65000 | HR         |
+----+--------+--------+------------+

select * from employee order by salary DESC limit 3;      
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  4 | Amit  |  70000 | IT         |
|  5 | Priya |  65000 | HR         |
|  2 | Rahul |  60000 | HR         |
+----+-------+--------+------------+

select * from employee order by name ;              
+----+--------+--------+------------+
| id | name   | salary | department |
+----+--------+--------+------------+
|  1 | Aditya |  50000 | IT         |
|  4 | Amit   |  70000 | IT         |
|  5 | Priya  |  65000 | HR         |
|  2 | Rahul  |  60000 | HR         |
|  3 | Sneha  |  55000 | Finance    |
+----+--------+--------+------------+

select * from employee where salary > (select salary from employee where name="Sneha");
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  2 | Rahul |  60000 | HR         |
|  4 | Amit  |  70000 | IT         |
|  5 | Priya |  65000 | HR         |
+----+-------+--------+------------+

 select * from employee where name like "%A" and salary>50000;                                  
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  3 | Sneha |  55000 | Finance    |
|  5 | Priya |  65000 | HR         |
+----+-------+--------+------------+

select * from employee where name like "A%" and salary>50000;
+----+------+--------+------------+
| id | name | salary | department |
+----+------+--------+------------+
|  4 | Amit |  70000 | IT         |
+----+------+--------+------------+

select * from employee where department in("IT","HR") and salary>60000;
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  4 | Amit  |  70000 | IT         |
|  5 | Priya |  65000 | HR         |
+----+-------+--------+------------+

select * from employee where department <> "IT" and salary>50000;
+----+-------+--------+------------+
| id | name  | salary | department |
+----+-------+--------+------------+
|  2 | Rahul |  60000 | HR         |
|  3 | Sneha |  55000 | Finance    |
|  5 | Priya |  65000 | HR         |
+----+-------+--------+------------+