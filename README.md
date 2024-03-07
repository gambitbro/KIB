# KU_IoT_Bigdata
C/C++ database arduino raspberrypi IoT




## 2024-02-22
---

 - instruction.
 - github sign up.
 - github  create repository.
 - ubuntu hangul setting.
 - VsCode install.
 - git install.
 ```shell
 sudo apt-get install git
 git clone https://github.com/gambitbro/KIB.git
 ```
 - MySQL DBMS install - ubuntu
 - vscode mysql extension install
 - database book Chapter01, chapter03
    - create database;
    - create 3 tables
        - book
        - publisher
        - price 
    - put data into database --> insert into ... values(...);
    - grant all privileges on *.* to 'root'@'localbost' identified by '1234'
 - create test db by using Windows cli 


## 2024-02-23
---

## 2024-02-29 목
---

- Makefile 만들기
  - Makefile 만들기 -> touch Makefile
  - make -> Makefile 실행
  - make clean -> Makefile에 있는 clean 명령 실행
  - TARGET = '' -> 타겟 지정(변수), ${TARGET}으로 대체
  - circle: $@ -> circle.c 생략
 
- MYSQL
  - 조인 -> 같은 조건에서 조인한다. 다만 NULL값이 있는 경우, 1) inner join -> NULL값을 뺌, 2) outer join -> NULL값을 남김.
  - select_groupby.sql파일
  - DDL.sql파일
  - DCL.sql파일
  - built_in_function.sql파일


## 2024-03-05 화
---

## 2024-03-07 목
---
- MYSQL에서 꼭 필요한 능력(sql문법, 데이터베이스 운영, webDB, 개인서버 운영)

- MYSQL 
  - 229p NULL값처리 시작
  - NULL -> 아직 지정되지 않은 값(없다는 뜻 아님)
  - 빅데이터를 할 경우 NULL값을 잘 처리해야 한다
  - ifnull(column, '...') -> ...값을 column에 넣는다(NULL일 경우)
  - 행 번호 출력
    - set @seq:=0;

  - 부속질의(subquery)
    - where 부속질의 - 중첩질의
    - select 부속질의
    - from 부속질의 - view를 쓰는 것과 같은 상황
