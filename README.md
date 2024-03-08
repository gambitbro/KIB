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
 - create test db by using Windows


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
  
  - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/select_groupby.sql)

  - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/DDL.sql)

  - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/DCL.sql)

  - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/built_in_function.sql)



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
    
  - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/view.sql)

  - 인덱스(index)
    - 인덱스와 B-tree : 루트 노드/내부 노드/리프 노드 -> 데이터 테이블
      - B-tree에서의 검색은 크고 작고 두가지만 비교
    - MY SQL 인덱스
      - 클러스터 인덱스와 보조 인덱스는 보통 같이 사용
      - 인덱스를 만들어놔도 무조건 쓰이진않음, 많이 넣는게 항상 좋진않다
  
  - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/index.sql)


  - 데이터베이스 프로그래밍(database programming)
   
    - 1. 데이터베이스 프로그래밍 방법
      - 1) SQL 전용언어를 사용
      - 2) 일반 프로그래밍 언어에 SQL을 삽입하여 사용
      - 3) 웹 프로그래밍 언어에 SQL을 삽입하여 사용
      - 4) 4th Generation Language
    
    - 2. 저장 프로그램
      - 프로시저 : 선언부 실행부로 구성, 독립적으로 프로세스가 돌아감
      - 연산의 중간중간에 변화를 주고 싶을 때 -> 커서
     
      - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/procedure.sql)
      
      - 데이터의 변경(insert, delete, update)문이 실행될 때 자동으로 같이 실행 -> 트리거
      - 사용자 정의 함수 (query문 안쪽에서 쓸 수 있다. 프로시저는 call을 해야함)
      
      - [참고](file:/home/qq42/KUIOT/KIB/MYSQL/trigger.sql)

- python3


## 2024-03-08 금
---
- 헤더 살펴보기
- 소스 -> 프로그램 -> 배포
- CMakeLists -> 중요함

- CMakeLists를 이용한 빌드와 디버깅
- flask를 이용하여 MySQL 자료 웹으로 띄우기


- [참고](file:/home/qq42/KUIOT/KIB/PYTHON_C_MYSQL/CMakeLists.txt)

- [참고](file:/home/qq42/KUIOT/KIB/PYTHON_C_MYSQL/booklist.c)

- [참고](file:/home/qq42/KUIOT/KIB/flaskweb/app.py)

- web framework
  - python : flask, django
  - java : spring
  - c++ : wt, poco

- MySQL
  - IE 표기법
  - 정규화
    - 이상현상
    - 함수 종속성 (어떤 속성값  A값을 알면 B는 결정된다 / - A는 B의 결정자 / A -> B )
    - 릴레이션 R(K, A1, A2, A3 ...)에서 K가 기본키이면 K -> R이 성립한다. 즉, 기본키는 릴레이션의 모든 속성에 대한 결정자이다.
    - 제 1 정규형 : 모든 속성 값이 원자값을 가진다
    - 제 2 정규형 : 제 1 정규형을 만족한 상태에서 기본키가 아닌 속성이 기본키에 완전 함수 종속일 때 제 2 정규형, 불완전 함수 종속이 없어야한다
    - 제 3 정규형 : 릴레이션이 제 2 정규형이고, 기본키가 아닌 속성이 기본키에 비이행적으로 종속할 때 제 3정규형
    - BCNF 정규형 : 릴레이션 R에서 함수 종속성 X -> Y 가 성립할 때 모든 결정자 X가 후보키이면 BCNF 정규형
    - 무손실 분해
  -  