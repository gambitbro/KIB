

show tables;
set sql_safe_updates=0;
delete from Customer;

set foreign_key_checks=1;


select * from information_schema.table_constraints
where table_name like 'Orders';

alter table Orders drop foreign key Orders_ibfk_1; -- Orders에 있는 foreign key 삭제



select * from Customer; -- Customer 데이터 전부 삭제됨