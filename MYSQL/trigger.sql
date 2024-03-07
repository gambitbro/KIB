use madangdb;

set global log_bin_trust_function_creators=on;

create table Book_log(
	bookid integer primary key,
    bookname varchar(40),
    publisher varchar(40),
    price integer
);

-- Book_AFTER_INSERT trigger registration
DROP TRIGGER IF EXISTS `madangdb`.`Book_AFTER_INSERT`;

DELIMITER $$
USE `madangdb`$$
CREATE DEFINER = CURRENT_USER TRIGGER `madangdb`.`Book_AFTER_INSERT` AFTER INSERT ON `Book` FOR EACH ROW
BEGIN
	declare average integer;
    insert into Book_log
		values(new.bookid, new.bookname, new.publisher, new.price);
END$$
DELIMITER ;
-- Book_AFTER_INSERT trigger registration end

insert into Book value(14, "스포츠과학 1", "이상미디어", 25000); -- Book에 값을 넣으면 Book_log에도 들어감
select * from Book;
select * from Book_log;


-- 사용자 정의 함수
-- fnc_interest registration
USE `madangdb`;
DROP function IF EXISTS `fnc_interest`;

DELIMITER $$
USE `madangdb`$$
CREATE FUNCTION fnc_interest(price int)
RETURNS INTEGER
BEGIN
	declare myInterest int;
    -- 가격이 30,000원 이상이면 10%, 30,000원 미만이면 5%
    if price >= 30000 then
		set myInterest = price * 0.1;
    else
		set myInterest = price * 0.05;
    end if;
return myInterest;
END$$

DELIMITER ;
-- fnc_interest registration end

select custid, orderid, saleprice, fnc_interest(saleprice) as 'interest'
from Orders;