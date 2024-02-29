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
      
