use madangdb;

-- example 4-1 ~ 4-3 절댓값, 반올림
select abs(-78), abs(+78);
select round(321.141592, -1);
select custid, round(avg(saleprice), -2)
from Orders
group by custid;

-- example 4-4 도서 제목에 야구가 포함된 도서를 농구로 변경한 후 도서 목록을 나타내시오
select bookid, replace(bookname, "야구", "농구")bookname, publisher, price
from Book;

-- example 4-5 굿스포츠에서 출판한 도서의 제목과 제목의 문자 수, 바이트 수를 나타내시오
select bookname '제목', char_length(bookname) '문자 수', length(bookname) '바이트 수' 
from Book 
where publisher like '굿스포츠'

-- example 4-6 마당서점의 고객 중에서 성이 같은 사람이 몇 명이나 되는지 알고싶다. 성별 인원수를 구하시오
select substr(name, 1, 1), count(*) from Customer group by substr(name, 1, 1);

-- example 4-7 마당서점은 주문일로부터 10일 후에 매출을 확정한다. 각 주문의 확정일자를 구하시오
select orderid '주문번호', orderdate '주문일', adddate(orderdate, INTERVAL 10 day) "확정"
from Orders;

-- example 4-8 마당서점이 2024년 7월 7일에 주문받은 도서의 주문번호, 주문일, 고객번호, 도서번호를 모두 나타내시오
select orderid '주문번호', date_format(orderdate, '%Y-%m-%d') '주문일', custid, bookid
from Orders
where orderdate = STR_TO_DATE('20240707', '%Y%m%d');