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

-- 중첩 부속질의 --

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
                    
-- 4-14 example 대한민국에 거주하는 고객에게 판매한 도서의 총판매액을 구하시오
select sum(saleprice) total
from Orders
where custid in (select custid
from Customer                    
where address like "%대한민국%");

-- 4-15 example 3번 고객이 주문한 도서의 최고 금액보다 더 비싼 도서를 구입한 주문의 주문번호와 판매금액을 보이시오
select orderid, saleprice
from Orders
where saleprice > all (select saleprice
						from Orders
                        where custid=3);

-- 4-16 EXISTS 연산자를 사용하여 대한민국에 거주하는 고객에게 판매한 도서의 총판매액을 구하시오.
select sum(saleprice) total
from Orders od
where exists (select *
				from Customer cs
                where address like "%대한민국%" and cs.custid=od.custid);
                
-- 스칼라 부속질의 --

-- 4-17 마당서점의 고객별 판매액을 나타내시오(고객이름과 고객별 판매액 출력)
select (select name
		from Customer cs
        where cs.custid=od.custid) name, sum(saleprice)
from Orders od
group by od.custid;

-- 4-18 Orders 테이블에 각 주문에 맞는 도서이름을 입력하시오
alter table Orders add bname varchar(40);

update Orders
set bname = (select bookname
			from Book
			where Book.bookid = Orders.bookid);
            
select * from Orders;

-- 4-19 고객번호가 2 이하인 고객의 판매액을 나타내시오(고객이름과 고객별 판매액 출력)
select cs.name, sum(od.saleprice)
from (select custid, name
		from Customer cs
        where custid <= 2) cs, Orders od
where cs.custid = od.custid
group by cs.name;




