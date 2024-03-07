use madangdb;

create view vw_Book
as select *
from Book
where bookname like "%축구%";

select * from vw_Book;

-- 4-21 Orders 테이블에서 고객이름과 도서이름을 바로 확인할 수 있는 뷰를 생성한 후, '김연아'고객이 구입한 도서의 주문번호
-- 				도서이름, 주문액을 나타내시오.
create view vw_Orders(orderid, custid, name, bookid, bookname, saleprice, orderdate)
as select od.orderid, cs.custid, cs.name, bk.bookid, bk.bookname, od.saleprice, od.orderdate
	from Orders od, Customer cs, Book bk
    where od.custid=cs.custid and od.bookid=bk.bookid;

select orderid, bookname, saleprice
from vw_Orders
where name like '김연아';

create or replace

-- 4-22 vw_Customer의 주소가 대한민국인 고객을, 영국을 주소로 가진 고객으로 변경

create or replace view vw_Customer(custid, name, address)
as select custid, name, address
	from Customer
    where address like "%영국%";

-- 4-23 뷰의 삭제 vw_Customer 삭제
drop view vw_Customer;

-- 뷰에 값 넣기
insert into vw_Customer value (6, "민병근", "영국 계룡");
insert into Customer value (7, "박정석", "영국 대전", "000-0000-0000");

select * from vw_Customer;

