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
  - DDL.sql 파일 참고
  - DCL.sql 파일 참고
  - built_in_function.sql 파일 참고


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
    - from 부속질의 : view를 쓰는 것과 같은 상황
  
  - NULL, subquery.sql 파일 참고

  - 뷰(view)
    - 장점 : 편리하다, 보안성이 있음
    - 원본을 변경하면 뷰도 변하고, 뷰를 변경하면 원본도 변함
    - 삽입, 삭제, 갱신 연산에 많은 제약이 따름
    - 뷰는 수정할 때 alter가 아닌 create or replace 를 쓴다 (실체가 없을 수도 있어서)
    
  - view.sql 파일 참고

  - 인덱스(index)
    - 인덱스와 B-tree : 루트 노드/내부 노드/리프 노드 -> 데이터 테이블
      - B-tree에서의 검색은 크고 작고 두가지만 비교
    - MY SQL 인덱스
      - 클러스터 인덱스와 보조 인덱스는 보통 같이 사용
      - 인덱스를 만들어놔도 무조건 쓰이진않음, 많이 넣는게 항상 좋진않다
  
  - index.sql 파일 참고


  - 데이터베이스 프로그래밍(database programming)
   
    - 1. 데이터베이스 프로그래밍 방법
      - 1) SQL 전용언어를 사용
      - 2) 일반 프로그래밍 언어에 SQL을 삽입하여 사용
      - 3) 웹 프로그래밍 언어에 SQL을 삽입하여 사용
      - 4) 4th Generation Language
    
    - 2. 저장 프로그램
      - 프로시저 : 선언부 실행부로 구성, 독립적으로 프로세스가 돌아감
      - 연산의 중간중간에 변화를 주고 싶을 때 -> 커서
      - procedure.sql 파일 참고
      - 데이터의 변경(insert, delete, update)문이 실행될 때 자동으로 같이 실행 -> 트리거
      - 사용자 정의 함수 (query문 안쪽에서 쓸 수 있다. 프로시저는 call을 해야함)
      - trigger.sql 파일 참고