use madangdb;

-- example 1
select bookname, price from Book;
-- example 2
select price, bookname from Book;
-- example 3
select bookid, bookname, publisher, price from Book;
-- example 3-2
select * from Book;

-- example 3-3
select publisher from Book;
select distinct publisher from Book;
-- example 3-4
select * from Book where price < 20000;
-- example 3-5
select * from Book where price between 10000 and 20000;
select * from Book where price >= 10000 and price <= 20000;

-- example 3-6
select * from Book where publisher in ('대한미디어', '굿스포츠');
select * from Book where publisher not in ('대한미디어', '굿스포츠');

-- example 3-7, 3-8
select bookname, publisher from Book where bookname like '축구의 역사';
select bookname, publisher from Book where bookname like '%축구%';

-- example 3-9
select * from Book where bookname like '_구%';

-- example 3-10, 3-11
select * from Book where (bookname like '%축구%') and (price >= 20000);
select * from Book where (publisher = '굿스포츠') or (price >= 10000);

-- example 3-12, 3-13
select * from Book order by bookname;
select * from Book order by bookname desc;

-- example 3-14
select * from Book order by price desc, publisher asc

-- example 3-15, 3-16
select * from Orders;
select sum(saleprice) from Orders;
select sum(saleprice) from Orders where custid=2;

-- example 3-17
select sum(saleprice),
	avg(saleprice),
    min(saleprice),
    max(saleprice)
from Orders;

-- example 3-18
select count(*) from Orders;
select count(phone) from Customer; -- without NULL

-- example 3-19
select sum(saleprice), count(*) from Orders group by custid;
select sum(saleprice), count(*) from Orders where
saleprice >= 8000
	group by custid
    having count(*) >= 2;
    