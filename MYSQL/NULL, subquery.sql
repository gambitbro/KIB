use madangdb;

create table Mybook(
	bookid int primary key,
    price int);
insert into Mybook(bookid, price) value (1, 10000);
insert into Mybook(bookid, price) value (2, 20000);
insert into Mybook(bookid, price) value (3, NULL);

select price + 100 from Mybook where bookid = 3;

select sum(price), avg(price), count(*), count(price), count(bookid)
from Mybook;

-- NULL값 채우기
select name, ifnull(phone, '연락처없음')
from Customer;

-- 4-11 example 고객 목록에서 고객번호, 이름, 전화번호를 앞의 2명만 나타내시오
set @seq:=0;

select (@seq:=@seq+1), custid, name, phone
from Customer
where @seq < 2;

-- 4-12 example 평균 주문금액 이하의 주문에 대해서 주문번호와 금액을 나타내시오 - 중첩질의/비교연산자
select orderid, saleprice, (select avg(saleprice) from Orders)
from Orders
where saleprice <= (select avg(saleprice)
					from Orders);
                    
-- 4-13 example 각 고객의 평균 주문금액보다 큰 금액의 주문 내역에 대해서 주문번호, 고객번호, 금액을 나타내시오
select orderid, custid, saleprice
from Orders od1
where saleprice > (select avg(saleprice)
					from Orders od2
                    where od1.custid = od2.custid);
                    

