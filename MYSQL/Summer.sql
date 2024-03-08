use madangdb;

drop table if exists Summer;

create table Summer(
	sid int,
    class varchar(20),
    price int
);

insert into Summer values (100, 'JAVA', 20000);
insert into Summer values (150, 'Python', 15000);
insert into Summer values (200, 'C', 10000);
insert into Summer values (250, 'JAVA', 20000);

-- 7-1 200번 학생의 계절학기 수강신청을 취소하시오 / 삭제이상
set SQL_SAFE_UPDATES=0;
delete from Summer
where sid=200; -- 삭제 이상 -> 200번 학생 정보를 지우면 c클래스의 가격도 같이 사라진다

-- 7-2 계절학기에 새로운 강좌 C++를 개설하시오 / NULL이 안들어가게끔 설정하기
insert into Summer values (NULL, 'C++', 25000); -- 이런식으로 NULL이 들어가면 안됨
select count(*) '수강 인원' from Summer
where sid is not null;

delete from Summer
where sid is null;

-- 7-3 JAVA강좌의 수강료를 20000원에서 15000원으로 수정하시오 / 수정이상
update Summer
set price = 15000
where class like 'JAVA';

select * from Summer;
--



create table SummerPrice(
	class varchar(20),
    price int
);
insert into SummerPrice values('JAVA', 20000);
insert into SummerPrice values('Python', 15000);
insert into SummerPrice values('C', 10000);

create table SummerEnroll(
	sid int,
    class varchar(20)
);
insert into SummerEnroll values(100, 'JAVA');
insert into SummerEnroll values(150, 'Python');
insert into SummerEnroll values(200, 'C');
insert into SummerEnroll values(250, 'JAVA');

-- 7-4 학생의 계절학기 수강신청을 취소하시오 / 삭제 이상 발생 안되는 예제
select * from SummerPrice;
select * from SummerEnroll;

delete from SummerEnroll where sid=200;

-- 7-5 계절학기에 새로운 강좌 C++를 개설하시오 / 삽입이상 없음
insert into SummerPrice Values ("C++", 25000);
select count(*) from SummerPrice;

-- 7-6 JAVA 강좌의 수강료를 20000원에서 15000원으로 수정하시오 / 수정이상없음
update SummerPrice set price=15000 where class like "JAVA";







