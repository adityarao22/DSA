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

select department,count(*) from employee group by department;
+------------+----------+
| department | count(*) |
+------------+----------+
| IT         |        2 |
| HR         |        2 |
| Finance    |        1 |
+------------+----------+

select department , sum(salary) from employee group by department;
+------------+-------------+
| department | sum(salary) |
+------------+-------------+
| IT         |      120000 |
| HR         |      125000 |
| Finance    |       55000 |
+------------+-------------+

select department , avg(salary) from employee group by department;
+------------+-------------+
| department | avg(salary) |
+------------+-------------+
| IT         |  60000.0000 |
| HR         |  62500.0000 |
| Finance    |  55000.0000 |
+------------+-------------+

select department , count(*) as total_employees from employee group by department; 
+------------+-----------------+
| department | total_employees |
+------------+-----------------+
| IT         |               2 |
| HR         |               2 |
| Finance    |               1 |
+------------+-----------------+

select department,avg(salary) from employee where salary>55000  group by department;
+------------+-------------+
| department | avg(salary) |
+------------+-------------+
| HR         |  62500.0000 |
| IT         |  70000.0000 |
+------------+-------------+

select department , count(*) as total_employee from employee group by department  having count(*)>1;
+------------+----------------+
| department | total_employee |
+------------+----------------+
| IT         |              2 |
| HR         |              2 |
+------------+----------------+

select department,avg(salary) as avg_salary from employee where salary>50000 group by department having avg(salary)>60000;
+------------+------------+
| department | avg_salary |
+------------+------------+
| HR         | 62500.0000 |
| IT         | 70000.0000 |
+------------+------------+

select department , sum(salary) from employee where salary=(select max(salary) from employee) group by department;
+------------+-------------+
| department | sum(salary) |
+------------+-------------+
| IT         |       70000 |
+------------+-------------+

select department , sum(salary) from employee group by department order by sum(salary) asc limit 1;
+------------+-------------+
| department | sum(salary) |
+------------+-------------+
| Finance    |       55000 |
+------------+-------------+

select name , max(salary) from employee group by name order by max(salary) desc limit 1 offset 1;         
+-------+-------------+
| name  | max(salary) |
+-------+-------------+
| Priya |       65000 |
+-------+-------------+

select name , salary from employee order by salary desc limit 1 offset 2;
+-------+--------+
| name  | salary |
+-------+--------+
| Rahul |  60000 |
+-------+--------+

select name,salary,department from employee e where salary = (select max(salary) from employee where department=e.department);
+-------+--------+------------+
| name  | salary | department |
+-------+--------+------------+
| Sneha |  55000 | Finance    |
| Amit  |  70000 | IT         |
| Priya |  65000 | HR         |
+-------+--------+------------+

select name from employee where salary<(select avg(salary) from employee);
+--------+
| name   |
+--------+
| Aditya |
| Sneha  |
+--------+

select name,salary from employee order by ABS (salary - (select avg(salary) from employee)) limit 1;
+-------+--------+
| name  | salary |
+-------+--------+
| Rahul |  60000 |
+-------+--------+

