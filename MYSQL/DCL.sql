use madangdb;

insert into Book(bookid, bookname, publisher, price)
values (13, "스포츠 의학", "한솔의학서적", 90000);

insert into Book(bookid, bookname, publisher)
values (14, "스포츠 의학", "한솔의학서적"); -- price에는 NULL값이 들어간다

-- 3-46  example 수입도서 목록(Imported_book)을  Book 테이블에 모두 삽입하시오
create table Imported_book(
			bookid		integer primary key,
            bookname 	varchar(20),
            publisher 	varchar(20),
            price 		integer);
            
            
insert into Imported_book(bookid, bookname, price, publisher)
	select bookid, bookname, price, publisher
    from Book;
    
-- 3-47 example Customer테이블에서 고객번호가 5인 고객의 주소를 '대한민국 부산'으로 변경하시오
set SQL_SAFE_UPDATES=0;

update Customer
set address = "대한민국 부산"
where custid = 5;

-- 3-48 example Book테이블에서 14번 '스포츠 의학'의 출판사를 imported_book 테이블에 있는 10번 책의 출판사와 동일하게 변경하시오
update Book
set publisher = (select publisher
				from Imported_book
                where bookid = 10)
where bookid = 14;

-- 3-49 example Book테이블에서 도서번호가 11인 도서를 삭제하시오
delete from Book
where bookid >= 11;

-- 3-50 example 모든 고객을 삭제하시오
delete from Customer; -- 외래키때문에 실행이 안됨



