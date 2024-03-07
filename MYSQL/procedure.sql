delimiter //;
create procedure dorepeat2(p1 int)
begin
	set @x = 0;
    repeat
		set @x=@x+1;
		until @x > p1
	end repeat;
end;
// delimiter;

call dorepeat(100);
select @x;

-- dorepeat procedure registration

-- insertBook procedure registration
call insertBook(13, '스포츠과학', '마당과학서적', 25000);

-- BookInsertOrUpdate procedure registration
call BookInsertOrUpdate(15, '스포츠 즐거움', '마당과학서적', 25000);
call BookInsertOrUpdate(16, '스포츠 즐거움', '마당과학서적', 30000); -- 16번이 생기지 않고, 15번이 업데이트된다

-- AveragePrice procedure registration
call AveragePrice(@myprice);
select @myprice; -- myprice 안쪽 값 확인

-- Interest procedure registration
USE `madangdb`;
DROP procedure IF EXISTS `Interest`;

DELIMITER $$
USE `madangdb`$$
CREATE PROCEDURE Interest()
BEGIN
	declare myInterest int default 0.0;
    declare price int;
    declare endOfRow boolean default false;
    declare InterestCursor cursor for
		select saleprice from Orders;
	declare continue handler
		for not found set endOfRow=true;
	
    open InterestCursor;
    cursor_loop: loop
		fetch interestCursor into price;
        if endOfRow then leave cursor_loop;
		end if;
        if price >= 30000 then
			set myInterest = myInterest + price * 0.1;
		else
			set myInterest = myInterest + price * 0.05;
		end if;
	end loop cursor_loop;
    close InterestCursor;
    
    select concat("전체 이익 금액 =", myInterest);
END$$

DELIMITER ;
-- Interest procedure registration end

call Interest();
