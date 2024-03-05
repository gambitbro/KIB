use madangdb;

-- 3-15 example
select sum(saleprice) 총판매액 from Orders;
-- 3-16 example
select sum(saleprice) 판매액
from Orders
where Orders.custid=2;

select custid 김연아, saleprice 판매액
from Orders
where Orders.custid=2;

-- 3-17 example
select sum(saleprice) Total, avg(saleprice) Average,
	min(saleprice) Min, max(saleprice) Max
from Orders;

select count(*) from Orders;

select * from Customer, Orders;
select * from Customer, Orders where Customer.custid = Orders.custid;
select * from Customer, Orders where Customer.custid = Orders.custid order by Customer.custid;

select * from Orders, Customer where Customer.custid = Orders.custid order by Customer.custid;

select Customer.custid, name, saleprice 
from Orders, Customer 
where Customer.custid = Orders.custid
order by Customer.custid;

-- 3-24 example
select name, sum(saleprice)
from Orders, Customer
where Customer.custid = Orders.custid
group by Customer.name
order by Customer.name;

-- 3-25 example
select Customer.name, Book.bookname
from Customer, Orders, Book
where (Customer.custid=Orders.custid) and (Book.bookid=Orders.bookid) -- 고객과 주문에서 고객 아이디 이어주기, 책과 주문에서 책 아이디 이어주기
-- 3-26 example
select Customer.name, Book.bookname, Book.price
from Customer, Orders, Book
where (Customer.custid=Orders.custid) and (Book.bookid=Orders.bookid) and Book.price>=20000;

-- 3-27 example 비교해보기
select Customer.name, Orders.saleprice
from Customer left outer join Orders on Customer.custid=Orders.custid; -- inner join은 없는 걸 뺀다

select Customer.name, Orders.saleprice
from Customer inner join Orders
on Customer.custid=Orders.custid;

select Customer.name, Orders.saleprice
from Customer left join Orders
on Customer.custid=Orders.custid;

-- 3-28 example
select Book.bookname, Book.price
from Book
Where price = (
	select max(price)
    from Book
    where Book.price < 15000);
    
-- 3-29 example 도서를 구매한 적이 있는 고객의 이름을 검색하시오.
select Customer.name
from Customer
where Customer.custid IN (select custid from Orders);

-- 3-30 example 대한미디어에서 출판한 도서를 구매한 고객의 이름을 나타내시오.
select Customer.name
from Customer
where Customer.custid IN(select Orders.custid
				from Orders
                where Orders.bookid IN(select Book.bookid
								from Book
                                where Book.publisher='대한미디어'
                                )
				);

-- 3-31 example 출판사별로 출판사의 평균 도서 가격보다 비싼 도서를 구하시오.
select b1.bookname, b1.price, b1.publisher
from Book b1
where b1.price > (select avg(b2.price)
					from Book b2
                    where b2.publisher = b1.publisher
					);

select publisher, avg(price) from Book group by publisher;

-- 3-32 example 대한민국에 거주하는 고객의 이름과 도서를 주문한 고객의 이름을 나타내시오
select Customer.name 이름, address
from Customer
where address like '대한민국%'
UNION
select Customer.name, address
from Customer
where custid IN(select custid from Orders);

-- example 3-33 주문이 있는 고객의 이름과 주소를 나타내시오
select name, address
from Customer cs
where exists (select *
				from Orders od
                where cs.custid=od.custid);
                

                

