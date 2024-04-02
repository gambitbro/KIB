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

  - 트랜잭션
    - DBMS에서 데이터를 다루는 논리적인 작업의 단위
    - 전체가 실행되거나 전혀 실행되지 않아야 한다
    - 원자성, 일관성, 고립성, 지속성
    - TCL (Transaction Control Language)
  
  - 동시성 제어
    - 트랜잭션이 동시에 수행될 때, 일관성을 해치지 않도록 트랜잭션의 데이터 접근을 제어하는 DBMS의 기능
    - 락의 유형
      - 공유락 shared lock
      - 배타락 exclusive lock
      - 데드락 (deadlock 교착상태) : 두 개 이상의 트랜잭션이 각각 자신의 데이터에 대하여 락을 획득하고
        상대방 데이터에 대하여 락을 요청하면 무한 대기 상태에 빠질 수 있음


# 2024-03-12 화
---

- 마이크로 컨트롤러
  - 임베디드 시스템(Embedded System) : 특정한 용도로 맞춰서 만드는 시스템

# 2024-03-26 화
---------------
- 우분투 리눅스 터미널 훑어보기
- C++ 기본 cout, cin, include하기
  - using namespace std 사용 -> std::cout 이걸로 쓰다가 너무 많아져서 사용

# 2024-03-27 수
---------------
- C언어 훑어보기
  - printf("%d", 10);
    printf("%03d", 10);
    printf("%05d", 10);
      위 세 가지의 차이 이해

  - float형의 경우?
      1. 기본 소숫점 6자리까지 표시
      2. 실제값보다 소숫점을 줄이면, 자동으로 반올림
      3. printf("%06.2f\n", 3.45); -> %뒤의 6은 전체 자릿수, .2는 소숫점 자리 제한, 0은 앞의 빈자리를 전부 0으로 채워준다.

  - printf("0o%o\n", 12);      //8진수
    printf("0x%02x\n", 12);      //16진수
    printf("0x%02X\n", 12);      //16진수
    
  - 'A' 는 65로 저장됨
    "A" 는 문자열로, 65 와 \0 으로 저장됨
    char c = 'A';
    char *str = "A";
    printf("%c\n", ch);
    printf("%s\n", str);
    문자열은 포인터로
    문자열은 첫 주소값만 가져오지만 전체 문자열을 가져오는 이유 -> NULL값(\0)이 나올때까지 출력하기 때문에

  - 정수 상수가 컴파일된 후의 비트 형태
    0 -> 0000 0000
    1 -> 0000 0001
    -1 -> 1111 1111
    127 -> 0111 1111
    -128 -> 1000 0000

  - pre = (++a) * 3;
      //a = a + 1;
      //pre = a * 3
    post = (b++) * 3;
      //post = b * 3;
      //b = b + 1;
  
  - 복합대입 연산자 : a += 20;    // a와 20을 더한 결과를 다시 a에 저장.

  - switch-case문 : break 사용과 break을 생략하고 쓰는 경우

  - for문, while문, do-while문
    - for문 : 횟수를 정해서 반복 할 때 많이 씀.
    - while문 : 조건이 참일 때, 계속해서 반복하다가 조건이 맞지않으면 빠져나올 때.
    - do-while문 : 한번은 무조건 실행시키게 할 때.

# 2024-03-28 목
---------------
 - C언어 훑어보기

  - 매개변수(parameter)와 인자(argument)의 차이
    - 인자는 값이다. 함수를 호출했을 때, 넣어주는 인자의 값이 중요하다.
    - 함수 구현쪽의 parameter와 호출시 쓰는 argument는 다르다.

  - double형 배열의 초기화는 0.0
    char형 배열의 초기화는 NULL
  
  - 배열에서의 변수명 자체가 주소가 되는것
    - int형이면 4바이트를 잡기때문에, 주소값도 4씩 증가한다
      printf("score[0]의 주소 : %p\n", score);      //배열의 이름은 0번지 주소
      printf("score[1]의 주소 : %p\n", score+1);    //score[1]의 주소, 이름에 +1
  
  - char str[] = {'a', 'p', 'p', 'l', 'e', 'j', 'a', 'm'};    //문자의 배열(null값이 없다)
    char str1[80] = "applejam";   //문자열

  - sizeof 연산자를 활용한 배열처리
    - count = sizeof(score)/sizeof(score[0]);   //배열 요소의 개수 계산, 뒤의 score[0]의 크기가 int면 int로 나눠주고 double이면 double로 나눠주는 형태

  - strcpy(str1, "tiger");
    - str1 : char형 목적지 주소값
    - "tiger" : 넣어줄 문자열의 주소값

  - MSB : 최상위 비트
    LSB : 최하위 비트

  - 지역변수들은 stack영역에 저장이 된다. 그래서 사라질 변수들은 heap영역에 넣어줘야 한다.

  - stack영역 : LIFO (last in, first out)
    stack영역의 변수들은 사라지니까(함수가 끝나면 지역변수가 사라지니까) malloc을 써서, 함수에서 나온 return값을 heap에 저장한다.


# 2024-03-29 금
---------------
- C언어 실습(예제)

# 2024-04-01 월
---------------
- C언어 string 입력받아서 숫자, 연산자 구분하기
- C++ 클래스 선언, 클래스 구현(함수 구현)

# 2024-04-02 화
---------------
- C++ 클래스 선언, 멤버 변수, 멤버 함수 구현 (TV예시)

- class
  - 생성자
    - 멤버 변수의 초기화는 중요하다.
    - 생성자 함수 -> 클래스 이름과 똑같이 만든다, 객체가 생성될 때 자동으로 호출, 초기화도 담당한다.
    - C++는 매개변수만 다르다면 이름이 같은 생성자 함수를 만들 수 있다. C는 안됨. overloading
    - Circle donut(10) -> 객체 생성 시 뒤쪽 괄호값이 생성자의 매개변수에 들어간다
    - 위임 생성자 Circle::Circle() : Circle(1){}
    - C++컴파일러는 생성자 중 반드시 하나를 호출하도록 컴파일한다. 없으면 기본 생성자를 자동으로 삽입한다.
  
  - 소멸자
    - 생성자와 같지만 앞에 ~가 붙음.
    - 오직 한개만 존재하면 매개변수를 갖지 않는다. overloading이 불가능.
    - class의 객체는 메인함수가 끝나면 소멸자가 생성되어 사라진다.

  - private, public, protected
    - 아무것도 안쓰면 private.
    - 생성자는 public으로 선언.








