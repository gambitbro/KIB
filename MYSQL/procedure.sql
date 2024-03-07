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
