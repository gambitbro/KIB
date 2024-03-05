use madangdb;

drop table NewBook;
create table NewBook(
	bookid 		integer primary key,
    bookname 	varchar(20),
    publisher 	varchar(20),
    price		integer);
    
    create table NewBook(
	bookid 		integer primary key,
    bookname 	varchar(20) not null,
    publisher 	varchar(20) unique,
    price		integer default 10000 check(price >= 10000));
    
    create table NewBook(
	bookid 		integer,
    bookname 	varchar(20) not null,
    publisher 	varchar(20) unique,
    price		integer,
    primary key(bookname, publisher)
    );
    
    create table NewCustomer(
		custid	integer primary key,
        name	varchar(40),
        address	varchar(40),
        phone	varchar(30)
	);
    
    create table NewOrders(
		orderid 	integer,
        custid		integer not null,delete from Customer;
        bookid 		integer not null,
        saleprice 	integer,
        orderdate	date,
        primary key(orderid),
        FOREIGN KEY(custid) references NewCustomer(custid) on delete cascade
    );
    
    -- 3-37 example NewBook테이블에 varchar(13)자료형을 가진 isbn 속성을 추가하시오
    alter table NewBook add isbn varchar(13);
    
    -- 3-38 example NewBook 테이블에서 isbn 속성의 데이터 타입을 INTEGER형으로 변경하시오
    alter table NewBook modify isbn integer;
    
    -- 3-39 example NewBook 테이블의 isbn 속성을 삭제하시오
    alter table NewBook drop column isbn;
    
    -- 3-40 example NewBook 테이블의 bookname 속성에 NOT NULL 제약조건을 적용하시오
    alter table NewBook modify bookname varchar(20) not null;
    
    -- 3-41 example NewBook 테이블의 bookid 속성을 기본키로 변경하시오
    alter table NewBook add primary key(bookid);