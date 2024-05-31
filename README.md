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


## 2024-03-12 화
---

- 마이크로 컨트롤러
  - 임베디드 시스템(Embedded System) : 특정한 용도로 맞춰서 만드는 시스템

## 2024-03-26 화
---------------
- 우분투 리눅스 터미널 훑어보기
- C++ 기본 cout, cin, include하기
  - using namespace std 사용 -> std::cout 이걸로 쓰다가 너무 많아져서 사용

## 2024-03-27 수
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

## 2024-03-28 목
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


## 2024-03-29 금
---------------
- C언어 실습(예제)

## 2024-04-01 월
---------------
- C언어 string 입력받아서 숫자, 연산자 구분하기
- C++ 클래스 선언, 클래스 구현(함수 구현)

## 2024-04-02 화
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

## 2024-04-03 수
---------------
- 객체 포인터와 객체 배열
  - 예시
      Circle donut;
      Circle *p;
      p = &donut;
      cout << p->getArea() << endl;
      cout << (*p).getArea() << endl;   donut.getArea()

## 2024-04-04 목
-----------------
- C++

  - 클래스의 배열
    - 객체 배열 : Circle circleArray[3];
    - 객체 배열 초기화 : Circle circleArray[3] = {Circle(10), Circle(20), Circle()};
    - 클래스를 만들었을때의 size는 멤버 변수의 size.

  - 동적 메모리 할당
    - 데이터타입 *포인터변수 = new 데이터타입;
    - delete 포인터변수;
    - 배열의 경우? -> 데이터타입 *포인터변수 = new 데이터타입 [배열의크기];
    - 배열의 경우?-> delete [] 포인터변수;
    
    - this 포인터
      - this는 멤버 함수에서만 사용할 수 있다.
      - static member function는 this를 사용할 수 없다.

## 2024-04-05 금
-----------------
- C++

  - 211p_3 실습

  - 함수와 참조, 복사 생성자
    - call by value : 함수 내에서 실인자를 손상시킬 수 없는 장점이 있다.
    - call by address : 함수 내에서 실인자의 값을 변경하고자 할 때 사용한다.
    
    - 결국, main쪽의 변수의 실인자를 바꾸고싶은지 아닌지에 따라 달라진다.

    - 복사 생성자 -> 객체가 함수의 매개변수로 넘어가서 복사될 때, 생성자가 자동으로 생성되지 않는다. why? 생성자가 자동으로 생성되면, 원본 객체의 생성자가 기본생성자로 초기화되기 때문. 그래서 복사 생성자가 필요하다.

    - 참조 reference
      - int n = 2;
      - int &refn = n;
      - refn = 3; -> 그러면 n이 3이된다.

      - 참조자는 선언과 정의를 동시에 해줘야 한다. -> int &refc = a;
      - 한번 정의가 되면 변경이 불가능하다.
      - 참조를 매개변수로 넣으면 포인터를 쓸 필요가 없다.
      - 잘 쓰면 포인터를 사용할 때보다 코드가 깔끔해진다.

    - 복사 생성자
      - 얕은 복사(주소만 복사), 깊은 복사(주소와 그 안의 값까지)

## 2024-04-08 월
-----------------
- C++
  - 복사 생성자
    - 깊은 복사와 얕은 복사 -> 포인터 때문에 생기는 문제
    - 얕은 복사를 하면 포인터가 복사되고, 같은 메모리를 원본과 공유하기 때문에 문제가 생긴다.
    - 이름이 같으면 생성자
    - ClassName(const ClassName& c); -> 넘어오는 객체의 값은 변하면 안되기 때문에 const를 쓴다.
    - 복사 생성자의 매개변수는 오직 하나다. 자기 클래스에 대한 참조로 선언됨. 클래스에 무조건 한 개.
    - 디폴트 복사 생성자는 얇은 복사를 실행하도록 만들어진 코드이기 때문에 깊은 복사를 하려면 직접 만들어야 한다.

## 2024-04-09 화
-----------------
- C++
  - 272p_8
    - char ch[10]와 char *pch = "kitae"의 차이. scanf로 문자열을 저장하려면 char ch[10]으로 받아야한다. 프로그램을 시작하고 문자열을 잡아줄거면 포인터로 잡아줘야한다.

  - 함수의 중복과 static 멤버
    - 함수 중복이 가능하려면?
      - 중복된 함수들의 이름이 동일.
      - 매개 변수 타입이나 매개 변수의 개수가 달라야 함.
      - 함수 중복에 리턴 타입은 고려 X.
      - 같은 매개 변수 타입이라도 위치가 바뀌면 중복이 가능하다.

      - 디폴트 매개 변수(ex6_3)
      - 디폴트 매개 변수는 끝 쪽에 몰아 선언해야한다.
        ex) void calc(int a, int b=5, int c=0, int d=0);
      - 호출 시 인자값은 앞에서부터 채워간다

      - 형 변환으로 인한 모호성

      - static 멤버
        - 지역변수이긴 하지만, 소멸되지 않는 지역변수(프로그램이 종료될 때 죽음)
        - 생명 주기: 프로그램이 시작할 때 생성, 프로그램이 종료할 때 소멸
        - 사용 범위: 변수나 함수가 선언된 범위 내에서 사용. 전역(golbal) 혹은 지역(local)으로 구분
        - 객체가 생성될 때 생성되는게 아닌, 이미 생성된 static 멤버를 객체들끼리 공유한다.
        - 전역 변수같이 쓰지만, 쓰는건 class안의 객체들만 공유해서 쓴다.
        - non-static 멤버는 객체마다 별도로 생성되어 instance멤버라고 부르며, static멤버는 클래스당 하나만 생기고 모든 객체들이 공유하므로 class 멤버라고 부른다.

        - static 멤버 함수는 오직 static 멤버 변수들만 접근

## 2024-04-11 목
-----------------
- C++
  - friend와 연산자 중복
    - 프렌드 함수: 클래스 외부에 작성된 함수, 클래스 내에 friend키워드로 선언하면 클래스의 모든 멤버에 대해 접근이 가능하다.

    - friend로 선언할 수 있는 경우
      - 클래스 외부에 작성된 함수를 friend로 선언
      - 다른 클래스의 멤버 함수를 friend로 선언
      - 다른 클래스의 모든 멤버 함수를 friend로 선언
    
    - 연산자 중복
      - 동일한 연산 or 기호를 대상(피연산자)에 따라 서로 다른 의미로 해석하는 다형성.
      - C++언어에 본래 있는 연산자만 중복 가능.
      - 연산자 중복은 피연산자의 타입이 다른 연산을 새로 정의하는 것.
      - 연산자 중복은 함수를 통해 이루어진다.
      - 연산자 중복은 반드시 클래스와 관계를 가진다. 중복된 연산자는 반드시 피연산자에 객체를 동반한다.
      

## 2024-04-12 금
-----------------
- C++
  - 상속
    - 상속해주는 쪽: 기본 클래스(base class)
    - 상속받는 쪽: 파생 클래스(derived class)

    - protected -> 기본 클래스에서 지정하여 파생 클래스들만 접근 가능하도록 함. main함수에서는 접근 불가능.

    - 업 캐스팅(up-casting): 파생 클래스의 포인터가 기본 클래스 포인터에 치환되는 것. 파생 클래스 포인터는 기본 클래스에 접근 가능하지만 기본 클래스 포인터는 파생 클래스에 접근하기 어렵다.

    - 다운 캐스팅(down-casting): 다운 캐스팅은 업 캐스팅과는 달리 명시적으로 타입 변환을 지정해야한다.

    - 다중 상속
    - 가상 상속


## 2024-04-15 월
-----------------

- AVR
  - 직렬 통신
    - 단방향 통신
    - 양방향 통신: 반이중(Half-duplex) 방식, 전이중(Full-duplex) 방식

    - 동기 통신
    - 비동기 통신

    - 일대일 통신: UART통신
    - 일대다 통신
    - 다대다 통신

  - UART통신
    - RS-232C를 이용한 비동기식 전송시 규약


## 2024-04-16 화
------------------

- AVR
  - A/D 컨버터
  - text LCD

## 2024-04-18 목
-----------------

- TCP/IP 소켓 프로그래밍
  - 서버가 먼저 실행이 되어야 클라이언트와 연결 가능.
  - IP: pc 찾아가기
  - port: pc 안에 서버 찾아가기

## 2024-04-22 월
-----------------

- TCP/IP 소켓 프로그래밍
  - 소켓에 할당되는 IP주소와 PORT번호
    - 인터넷 주소: IP주소체계는 두가지로 나뉜다. IPv4, IPv6.
  - INADDR_ANY: 0.0.0.0 // 내 아이피 중 어느 것이라도 접속되도록 설정

  - TCP와 UDP
    - TCP는 데이터의 전송을 보장하는 프로토콜(신뢰성).
    - UDP는 보장하지 않는 프로토콜.
    - TCP는 신뢰성을 보장하기 때문에 UDP에 비해 복잡한 프로토콜이다.


## 2024-04-23 화
-----------------

- TCP/IP 소켓 프로그래밍
  - DNS서버(Domain Name System)

  - 입력버퍼/출력버퍼

  - Thread
    - 멀티 프로세스는 부담스럽다.


## 2024-04-24 수
-----------------

- TCP/IP 소켓 프로그래밍
  - Thread
    - thread의 컨텍스트스위칭이 프로세스의 컨텍스트스위칭보다 빠르다.
    - 쓰레드 동기화
      - 동일한 메모리 영역으로의 동시접근이 발생하는 상황 -> Mutex를 이용해 해결
      - 동일한 메모리 영역에 접근하는 쓰레드의 실행순서를 지정해야 하는 상황 -> Semaphore 사용


## 2024-04-25 목
-----------------

- 아두이노나 AVR이 센싱이나 액츄에이터 역할을 하고, 그로 인해 얻은 데이터를 UART통신으로 라즈베리파이로 전송


## 2024-04-26 금
-----------------

- I2C 통신
  - 마스터가 누구랑 통신할지 먼저 주소값을 보내주는게 우선임.
  - 주소값은 7비트이기 때문에 128개까지 1:n 통신 가능.
  - SDA(시리얼 데이터), SCL(시리얼 클럭)
  - 라즈베리파이에서 온습도 센서, LED, 자이로센서 등과 연결하여 데이터통신을 하기 위해서는 주소가 먼저 필요하다.

## 2024-04-29 월
-----------------

- Arduino
  - 아두이노를 활용한 LED 켜기, 끄기, 인터럽트사용.


## 2024-05-03 금
-----------------

- OpenCV
  - 리눅스 환경에서 쓴다.
  - 영상 획득: 빛->렌즈->센서->ISP->사진파일
  - BGR순서로 저장
  - 하나의 픽셀은 unsigned char 3개를 겹쳐서 사용한다.

  - Modern C++
    - std::vector 클래스
    - 범위 기반 for
      - for( declaration : expression ) { loop }
      - for(auto& age : ages) {cout << ages << endl};   //auto를 넣으면 타입이 자동으로 정해진다. 명확할 때 쓴다.
    - 람다 표현식(Lambda expression)
    - 스마트포인터(smart pointer)

  - imread 함수: cv::Mat imread( const String &filename, int flags = IMREAD_COLOR );
  - destroyWindows 함수
  - moveWindows 함수
  - imshow 함수: void imshow(const String &winname, InputArray mat);
  - waitKey 함수: int waitKey(int delay = 0); 리턴값이 키보드 아스키코드 char값.

  - 기본 자료형 클래스
    - point_ 클래스
    - Size_ 클래스
    - Rect_ 클래스
    - RotateRect 클래스
    - Range 클래스
    - String 클래스
    - 진짜 중요한 Mat 클래스
      - 얕은 복사 -대입 연산
      - 깊은 복사 -clone, copyTo

  - imread, imshow, imwrite
  - VideoCapture, VideoWriter
  - line 함수
  - waitKey()

  - CMakeLists.txt 작성법

  - KIB/openCV/chap1~4 line.cpp까지했음


## 2024-05-07 화
-----------------
- openCV
  - 복습
    - 영상처리(저수준) -> 밝기, 대비 등.
    - 영상인식(고수준) -> 영상을 해석을 해서 의미있는 정보를 뽑아내는 것.
    - 기초클래스
      - _Point -> x, y
      - _Size -> width, height
      - _Rect -> x, y, width, height
      - _Mat -> 2차원배열 [y][x]
      - _RotateRect
      - _Range
      - _String -> openCV에는 include<string>가 String 클래스에 들어가있다.
    - 기본기능
      - cap = VideoCapture -> cap<<[mat]
      - drawing
     
    - InputArray, OutputArray
      - 다양한 이미지 객체들을 받을 수 있음. 내부에서 처리됨.

  - 수업(4장)
    - lineTest.cpp
      - //

    - drawPolys.cpp
      - rectangle함수, circle함수, ellipse함수 

    - drawText.cpp
      - putText함수 -> 영어만 쓸 수 있다. freeType 라이브러리의 putText를 쓰면 한글도 쓸 수 있다.
    
    - freeTypeFont.cpp
      - //

    - mouse.cpp
      - waitKey함수
        - HightGui.hpp에 선언
        - 밀리초 단위의 시간을 대기하면서, 키의 ASCII값을 반환.
        - 대기시간동안 반환 값이 없으면 -1 반환.
        - 키보드의 특수 키는 입력받을 수 없음.
      - setMouseCallback 함수
      - struct를 만들어 전역변수들 넣어주기. 최대한 전역변수는 넣지 않는게 좋음(해킹위험), 함수의 결과를 보이드 포인터로 뺄 경우 class나 struct로 묶어서 옮겨주기(코드 참조).

      - class와 struct는 메소드(함수)의 유무로 판별한다.

    - keyboard.cpp
      - //
    - keyboard2.cpp
      - #include <chrono>, #include <thread> 활용.
      - //

    - storage.cpp
      - FileStorage class
        - FileStorage class를 이용하여 XML/YAML/JSON파일을 쓰기 모드로 열어 데이터를 파일에 저장할 수 있다.
        - 보통 << 연산자 재정의 함수를 사용한다.
        - char, int float, double등 기본자료형과, string, vector 등 STL클래스 객체, openCV의 Mat, Scalar, Point, Size, Rect등 클래스 객체를 저장할 수 있다.
    - storageRead.cpp
      - storage.cpp에서 저장한 json파일 데이터를 읽어온다.

    - maskSetTo.cpp, 
      - sum(), mean() 함수
      - minMaxLoc() 함수
      - normalize() 함수
      - cvRound() 함수

    - mouseRGBpoint.cpp
      - 4장 통합 예제
      - // github보고 빠진거 채우기
      
  - 수업(5장)
    - 영상의 밝기 조절: 최대값, 최소값 존재. 일반적으로 0~255
    - brightness.cpp
    - saturated.cpp


## 2024-05-08 수
-----------------

- openCV
  - 복습
    - drawing -> 사각형(rotated Rect), 원, 타원(호)
    - keyboard, mouse
      - keyboard: waitKey() 사용.
      - mouse: event가 일어날 때, eventCallBack() 사용.
    - fileStorage

    - 밝기 -> add(), substract(), saturated_cast(데이터 손실을 방지하는 기술중 하나)

  - 수업(5장)
    - brightTrackbar.cpp
      - 트랙바 만들어서 사진 밝기 조절하기.
      - on_brightness() 살펴보기.

    - contrast.cpp
      - 효과적인 명암비 조절 예제.

    - 히스토그램 분석 histogram.cpp
      - calcHist() 사용, 히스토그램 그래프 만들기.

    - histogramStretch.cpp
      - 히스토그램이 집중된 구간을 전 구간에 걸쳐서 나타나도록 만들기.

    - histogramEqualization.cpp
      - 히스토그램 평활화(histogram equalization)

  - 수업(6장)
    - arithmatic.cpp
      - 영상의 산술 연산
        - add, addWeighted, subtract, absdiff
    
    - logical.cpp
      - 영상의 논리 연산

  - 수업(7장)
    - 필터링 연산 convolution
      - mask연산을 하려면 예를들어 1200픽셀의 영상을 3x3mask로 연산할경우, 1200*9만큼의 픽셀이 필요하다. 픽셀 9개가 1개가 됨.

    - filterEmbossing.cpp
      - filter2D() 함수 -> 필터링 연산의 가장 기본이 되는 함수.
    
    - blur.cpp
      - 블러처리

    - gaussianBlur.cpp
      - 가우시안 함수 GaussianBlur()

    - sharpen.cpp
      - 언샤프 마스크 필터를 이용한 샤프닝.

    - noise.cpp

    - bilateralFilter.cpp
      - 양방향 필터
        - 가우시안 블러를 쓰면 잡음이 제거된다. 하지만 엣지가 무뎌지는 단점이 있음.

    - medianFilter.cpp
      - 백색노이즈(salt and pepper noise)를 줄이기위해 쓴다.

  - 수업(8장) 기하학 변환
    - affine.cpp
      - 어파인 변환(affine transformation)
    - affineTraslation.cpp
    - affineShear.cpp
    - affineRotation.cpp
    - flip.cpp

    - 투시변환 -> 점 4개를 옮기며 자유롭게 바꿀 수 있는 방법.
      - affine행렬은 2x3행렬이지만, 투시변환은 3x3행렬이다.

    - perspectiveTransform.cpp //보충필요!!!!!!!!!!
    //
    //
    //

    
    


  - 수업(9장)
    - 픽셀 변화가 큰 부분을 edge라고한다.
    - edge 얻어내기 -> line 얻어내기 -> corner 포인트 얻어내기 -> keypoint 얻어내기
  //
  //
  //
    - 케니 에지 검출 4단계
      - 1. 가우시안 필터링(잡음 제거)
      - 2. 그래디언트 계산: 크기와 방향을 계산
      - 3. 비최대 억제(non maximum suppression)
      - 4. 히스테리시스 에지 트래킹: 두 개의 임계값을 사용

    - canny.cpp


## 2024-05-09 목
-----------------
  - openCV

    - 수업(9장)
      - 직선 검출과 원 검출
      - hough.cpp
      - houghLinesP.cpp
      - houghCircle.cpp
      - houghCircleTrackbar.cpp

    - 수업(10장)
      - color.cpp
      - splitMerge.cpp
      - colorInrange.cpp

    - 수업(11장)
      - 이진화(binarization)와 모폴로지
        
        - 이진화 
          - 영상을 이진화하면 속도가 더 빨라지기도 한다. 그레이스케일로 처리하는 것보다 이진화하는게 정확성도 더 높다.
          - 이진화를 할때 웬만하면 적응형 이진화를 많이 쓴다.

          - threshold.cpp
          - adaptiveThreshold.cpp

        - 모폴로지
          - 이진화가 된 영상으로 모폴로지를 함.
          - 이진 영상의 침식(erosion)연산 -> 깎아내기
          - 이진 영상의 팽창(dilation)연산
          - 열기 -> 침식 적용후 팽창 적용
          - 닫기 -> 팽창을 적용하고 침식을 적용

          - erodeDilate.cpp
          - mophologyEX.cpp

    - 수업(12장)
      - 레이블링과 외곽선 검출
        - 레이블링(labeling)
          - 객체 구역을 영역 단위로 분석.
          - 객체 픽셀에 고유한 번호를 지정하는 작업이다.
        - 외곽선 검출
          - contour.cpp
          - contour_hier.cpp
        
        - 외곽선 처리 함수

    - 수업(13장)
      - 객체 검출
        - 템플릿 매칭
          - template.cpp
        
        - HOG 알고리즘
          - hog.cpp   //사람인식 및 사각형으로 detect

    - 수업(14장)
      - 지역 특징점 검출과 매칭
        - 해리스 코너 검출 -> 잘 안씀.
        - FAST 코너 검출
        - GFTT 코너 검출 -> 해리스 코너 검출을 업그레이드 한 검출.

        - 크기 불변 특징점 알고리즘
          - 영상을 여러번 축소한 뒤, 특징점을 검출 -> 비교 후, 확실한 특징점들을특징점으로 확정한다.

          - keypointMatching.cpp


//2차 프로젝트






## 2024-05-21 화
-----------------

  - Python 파이썬
    - 동적 타이핑 언어 -> 프로그램의 실행 시점에서 변수의 타입이 결정됨
    - 변수를 좀 유연하게 쓸 수 있다.
    - 파이썬에서 외부 라이브러리를 불러오는 키워드 import
    - 일반적인 파이썬 패키지 위치
      - /usr/lib/pythonX.Y/dist-packages
      - ex) usr/lib/python2.7/dist-packages
    - 라이브러리 위치 확인하는 방법
      - pip show [packageName]
    

    - Python 가상환경 설치 -> Virtualenv 설치
      - sudo apt install python3-virtualenv
      - virtualenv myenv 가상환경을 위한 폴더 생성
      - 가상환경 해제는 deactivate

    - Python 가상환경 설치 -> miniconda 실습 (주로 이걸 씀)
      - wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh
      - sh Miniconda3-latest-Linux-x86_64.sh
      - cd miniconda/bin
      - ./conda config --set auto_activate_base false
      - ./conda init

    - pip freeze //라이브러리 리스트 확인
    - pip install -r requirements.txt

    - conda create -n my_project python=3.10  //conda 가상환경 my_project라는 이름으로 생성
    - conda activate my_project   //가상환경 실행

    - veriable.py
    - operator.py   //python에서 쓰는 연산자의 차이점 설명
    - input.py
    - celsius.py

    - 리스트 list()
      - vector보다 유연성이 더 높다.
      - list.py
    
      - python도 gc(garbage collector)가 메모리 관리를 한다. 사용안하는 메모리를 주기적으로 제거해준다. 그래서 del을 잘 쓰지않는다.
      - del 은 객체삭제, remove는 리스트 안에있는 원소를 삭제
      - 리스트 안에 리스트를 넣었을경우, 주소값이 들어가기 때문에, 원본이 바뀌면 같이 바뀐다.
      - packing.py    //packing으로 리턴값을 묶어서 내보내기 같은거 많이 쓴다고함
      - list2.py
    
    - 조건문
      - condition.py    //조건문 예시
      

## 2024-05-22 수
-----------------
  - python은 쓰레드 활용이 어렵다. 안정성을 위한 GIL(글로벌 인터프리터 락)이 있기 때문.

  - **python 복습**
    - 패키징 -> c/c++에선 라이브러리, python에선 패키징. 불러오는 것을 import라고한다. import에서 불러오는건 모듈, 패키징안에 모듈이 있는 것.
    - 패키지를 추가하는방법 -> apt(site쪽), pip(dist쪽)

    - 가상환경
      - virtualenv + pip
      - conda -> conda3라는 라이브러리가 따로 존재하고, 활용하는 라이브러리는 따로 운용한다. 깃에 올리는 것도 활용하는 라이브러리만.

    - python의 변수
      - 모두 class의 객체이다. int나 str도 클래스.
      - 모든 class는 object클래스의 자식이다. object부모로부터 상속받음.
      - 기본적으로 heap에 쌓이게됨. 동적으로 관리. gc(garbage collecter)가 자동으로 관리해준다.

    - 자료형 확인
      - type함수
      - isinstance함수
      - id함수
    - 표준 입력 함수
      - input 함수
      - 리턴 값은 str이다
    
    - 리스트
      - 리스트 메소드
        - append, extend, insert, remove, pop, index, count, sort, reverse
        - 리스트 복사 -> 기본적으로 얕은 복사
      - 패킹과 언패킹
    - 조건문
      - if, elif, else
      - True, False 앞이 대문자, int타입에서 0아닌 수(-1도) True값이다.
      - 삼항 연산자



  - **python**
    - condition2.py   //elif사용

    - 반복문
      - for.py
      - while.py

    - multiplicationTable.py
    - decimalToBinary.py
    - reverseString.py

    - numberGame.py
    - muliplicationTable2.py
    - calculateAverage.py

    - if __name__ == "__main__": main() 을 쓰는 이유(enrty point) -> import를 할때 자체적으로 실행되는게 있을 수 있어서

    - ***함수***
      - function1.py
      - variableRange.py    //지역변수 전역변수가 함수에서 작동하는 방식

      - 함수의 인수(argument)
        - keywordArgument.py    //함수의 매개변수

        - 가변 인수 사용 예제
          - variableLengthArgument.py
          - variableLengthKeywordArgument.py    #dict 클래스 (딕셔너리)
            - items()는 키와 값 쌍을 튜플의 형태로 반환한다.
            - |이름|번호|비고|
              |:-|:-:|-:|
              |안녕|하세|요|
      - 람다(lambda)
        - 기능을 매개변수로 전달하는 코드를 더 효율적으로 작성
        - map이나 filter 함수 사용
        - lambda.py
        - filterMap.py
      - 제너레이터(generator)
        - 이터레이터를 직접 만들 때 사용하는 코드
        - 함수 내부에 yield 키워드를 사용하면, 해당 함수는 제너레이터 함수가 됨
      - 데코레이터(decorator)
        - decorator.py
    
    - 문자열
      - 문자열 함수
        - stringMethod.py
      - 단어 카운팅
        - wordCounting.py
      
      - 문자열 서식
        - f-string을 안쓰면 어떻게 써야하는가
          - stringFormat.py   //문자열 서식 예제

        

## 2024-05-23 목
-----------------

- **python**
  - 자료구조
    - 스택 -> last in first out, LIFO
    - 큐 -> first in first out, FIFO
    - 튜플 -> 변경이 불가능
    - 세트 -> 순서없이 저장하되 중복을 불허

    - setUnion.py // set()와 합,교,차집합 메소드

    - ***딕셔너리 dictionary***
      - 키key(색인)
      - 값value
      - 키와 값을 묶어둔 세트가 items
      - 딕셔너리 변수 = {키1:값1, 키2:값2}
      - 내부구조가 hash로 되어있고, 그래서 검색속도가 빠르다. 리스트보다 빠름.
      - 메소드 -> keys(), values(), items() 
      - for key, value in student_info.items(): print(key, value)

      - dictionaryFunction.py

    - collections 모듈
      - from collections import deque
      - appendleft(), rotate(), pop(), popleft() 등의 메소드를 쓴다
      
      - OrderedDict 모듈
        - 순서를 가진 딕셔너리 객체
      - defaultdict 모듈
        - 딕셔너리 변수를 생성할 때 키에 기본값을 지정하는 방법
      - counter 모듈
      - namedtuple 모듈

      - collectionsModules.py
      - textMining.py

  - 파이썬 스타일 코드
    - split(), join()
      - splitFunction.py
    - list comprehension
      - listComprehension.py
    - enumerate()
    - zip()
      - zipFunction.py

  - 파이썬 스타일 코드 2
    - mapReduce.py      //reduce()써보기

  
  - 객체 지향 프로그래밍
    - Class
      - python에서는 생성자, 소멸자 대신 "__init__(self)" 메소드를 쓴다.
      - "__str__(self)" 라는 스페셜 메소드를 정의를 한다.
      - pythonClass.py

      - notebookPython.py // 노트북 프로그램 만들기 
    
    - 상속
      - inheritancePerson.py
        - 어떤 class가 상속을 받았으면 super().__init__(name, age, gender) 이런식의 super()는 세트로 들어간다.

    - 다형성 polymorphism
      - 같은 이름의 메소드가 다른 기능을 하는 것
      - polymorphismClass.py

    - 가시성 visibility
      - visibilityClass.py
      - @property 사용
      - private변수로 선언은 __items 이런식으로
  
  - 책에 없는 내용
    - classVariable.py

  - pygame 제작실습



## 2024-05-24 금
-----------------

- python 복습
  - python의 자료구조
    - list( [] ), tuple(순서를 바꿀 수 없음)
    - dict( {} )
      - key, value
      - key값으로 인덱싱 가능: (( )[키값]) -> value가 나온다
    - set( () )
      - .add, .remove
      - 연산자 |(합집합, .union), &(교집합, .intersection), -(차집합, .difference)

    - 스택 FILO
    - 큐 FIFO

    - collection
      - dequeue
    
  - python 스타일코드 (파이덴틱, 파이써닉)
    - split, join
    - list comprehension
      - [i for i in range()]
  
  - 객체지향 프로그래밍 (object oriented programming)
    - 클래스를 선언한 뒤, 클래스를 가지고 객체를 만든다.
    - 클래스의 특징(인스턴스 변수, 메소드)을 객체가 이어받는다.

    - python에서 클래스를 쓸때 주의해야 할 점
      - class ... (부모 클래스):
      - 전부다 public
      - c++의 생성자, 소멸자가 없고, __init__
      - self라고하는 객체 자신을 나타내는 키워드가 있다. (*this)
      - 첫번째 argument로 반드시 self를 받는다.
      
    - 다형성, 가시성
      - __ 를 붙이면 외부에서 접근 불가능

- python
  - 모듈 만들기
    - random 모듈
    - time 모듈
    - urllib 모듈
  - 패키지 만들기
    - crawling
    - database
    - analysis

  - 가상환경 패키지 실습
    - /home/qq43/KIB/python/pythonData/matplotTest.py
    - conda install jupyter
  
  - 예외처리
    - tryExcept.py


  //정리//
  tryExcept.py
  assertTest.py
  fileOpen.py
  fileWrite.py
  mkdir1.py
  pickleTest.py
  pickleTest2.py
  
  pythonData폴더
    csv1.py
    csv3.py
    csv4.py
    loggingTest.py
    configParserTest.py
    loggingprogram.py
    loggingformatter.py
    htmlTest.py
    lab2.py
    beautifulSoup1.py



## 2024-05-27 월
-----------------
- **데이터 과학을 위한 통계**

  - **1.1 정형 데이터의 종류**
    - 수치형 데이터
      - 연속형 데이터: 일정 범위의 값
      - 이산 데이터: 정수만 취할 수 있는 데이터
    - 범주형 데이터
      - 이진 데이터: 값이 2개인 데이터(남/여, 참/거짓, 0/1)
      - 순서형 데이터: 수치 사이에 순위가 있는 데이터(성적)

  - **1.2 테이블 데이터(데이터 분석에서 가장 대표적으로 사용되는 객체의 형태)**
    - 데이터 프레임: 통계와 머신러닝 모델에서 가장 기본이 되는 테이블 형태의 데이터 구조
    - 피처(feature): SQL에서의 컬럼
    - 결과(outcome): 실험이나 연구에서 결과를 예측하기 위해 피처 사용
    - 레코드(record): 일반적으로 테이블의 각 행은 하나의 레코드
  
    - 테이블 형식이 아닌 데이터구조: 테이블 데이터로 변환 후 쓴다

  - **1.3 위치추정**
    - 평균(mean/average)
    - 절사평균: 양 끝에서 일정 개수의 값을 삭제한 후 평균을 구한다.
    - 가중평균: 센서와 관련. 부정확한 센서는 가중값을 높게 준다. 데이터 수집 시 대조군이 항상 똑같은 수가 얻어지지는 않기 때문에, 가중값을 줘서 두 집단의 영향력을 비슷하게 맞출때 가중평균을 쓴다.
    - 중간값: 데이터를 일렬로 정렬했을 때, 한가운데에 위치하는 값.
    - 가중 중간값: //
    - 로버스트: //

    - ***1.3.3_meanWeight.py*** [위치추정: 평균,절사평균,중간값,가중평균,가중중간값](python/pythonData/1.3.3_meanWeight.py)

  - **1.4 변이(variability)추정**
    - 편차: 관측값과 위치 추정값 사이의 차이
      - 평균을 기준으로 편차의 합은 항상 0
      - 평균 절대 편차: 편차의 절대값의 평균
    - 분산: //
    - 표준편차: 분산에 제곱근을 한 값
    - 중위 절대 편차(MAD): 로버스트한 변이 추정값. 중간값과의 편차를 구하고, 그 값들의 절대값에 대한 중간값
    - 백분위수: //
      - 사분위범위(IQR): //

    - ***1.4.3_deviation.py*** [변이추정: 표준편차,사분위범위(IQR), 중위절대편차(MAD)](python/pythonData/1.4.3_deviation.py)

  - **1.5 데이터 분포 탐색**
    - boxplot(상자그림)
    - 도수분포표(frequency table)
    - 히스토그램(histogram)
    - 밀도그림(density plot)

    - ***1.4.3_deviation.py*** [boxplot](python/pythonData/1.4.3_deviation.py)

    - ***1.5.2_histogramTest.py*** [도수분포표와 히스토그램](python/pythonData/1.5.2_histogramTest.py)

  - **1.6 이진 데이터와 범주 데이터 탐색**
    - 최빈값(mode)
    - 기댓값(expected value): 범주에 해당하는 어떤 수치가 있을때, 범주의 출현 확률에 따른 평균
    - 막대도표(bar chart)
    - 파이그림(pie chart)

    - ***p47_categoryDate.py*** [이진데이터 막대도표로 표현](python/pythonData/p47_categoryDate.py)

  
  - **1.7 상관관계**
    - 상관계수
    - 상관행렬
    - 산점도(scatterplot)

    - ***p52_correlation.py*** [상관관계](python/pythonData/p52_correlation.py)





- **numpy**
  - ***numpyArray.py*** [numpy 실습](python/pythonData/numpyTest/numpyArray.py)

  - ***numpyMethod.py*** [reshape, flatten](python/pythonData/numpyTest/numpyMethod.py)

  - ***numpyIndexing.py*** [indexing, slicing](python/pythonData/numpyTest/numpyIndexing.py)

  - ***numpyConstruction.py*** [배열생성함수: ones(),zeros(),empty(), 통계분석함수](python/pythonData/numpyTest/numpyConstruction.py)

  - ***numpySum.py*** [연산함수: arange()](python/pythonData/numpyTest/numpySum.py)

  - ***numpyStack.py*** [연결함수](python/pythonData/numpyTest/numpyStack.py)

  - ***numpyDot.py*** [행렬연산](python/pythonData/numpyTest/numpyDot.py)

  - ***numpyBroadcasting.py*** [브로드캐스팅 연산](python/pythonData/numpyTest/numpyBroadcasting.py)

  

- **정리**
  - 통계를 왜 배우는가 -> 빅데이터
  - 대표값: 평균, 중간값, 가중평균, 절사평균
            분산, 편차, 절대편차, **표준편차(분산에 루트씌운것)**, 백분위와 IQR

  - 이러한 값들을 가지고 그래프를 그림 (데이터 분포 탐색)
    - 수치 데이터 -> 히스토그램 x-y, box plot 
    - 이산데이터, 범주데이터 -> 히스토그램
  
  - 상관관계 corr -> -1 ~ 1, heatmap으로 표현

  - numpy: []리스트가 기본 타입이지만, 약점이 있었다. c-type array사용.
    - 선언: ones(), zeros(), empty()등
    - 메소드: reshape (주의사항: 원소의 개수를 맞춰야한다)
    - 사칙연산
    - dot
    - broadcasting: 증식하여 행렬이 맞춰져 연산됨(논리적으로 증식이 가능할 것 같은 경우에만)




## 2024-05-28 화
-----------------

- **numpy**
  - 비교 연산
    - ***numpyBoolIndex.py*** [비교연산, 비교연산함수, 인덱스 반환함수, 정렬된 값의 인덱스를 반환하는 함수(argsort,argmax,argmin)](python/pythonData/numpyTest/numpyBoolIndex.py)

    - ***numpyFancyIndex.py*** [인덱스를 활용한 데이터 추출: boolean index, fancy index](python/pythonData/numpyTest/numpyFancyIndex.py)


- **pandas**
  - python계의 엑셀
  - 시리즈(series): 컬럼이 1개인 데이터프레임
  - 시리즈를 여러개 모아놓으면 데이터프레임(데이터 테이블 전체를 포함하는 객체)
  - ***pandasSeries.py*** [Series 객체 생성, 이름변경](python/pythonData/pandasTest/pandasSeries.py)

  - pandas는 컬럼별로 타입을 다르게 지정할 수 있다.

  - 객체 생성
    - ***pandasDataFrame.py*** [데이터프레임 생성](python/pythonData/pandasTest/pandasDataFrame.py)

  - 데이터 추출
    - ***pandasExcel.py*** [엑셀 파일에서 데이터 추출](python/pythonData/pandasTest/pandasExcel.py)

  - 그룹별 집계
    - ***pandasGroup.py*** [그룹별 집계](python/pythonData/pandasTest/pandasGroup.py)

    - 그룹화된 상태에서(grouped)
    - ***pandasGroup2.py*** [그룹화된 상태_집계, 변환, 필터](python/pythonData/pandasTest/pandasGroup2.py)

  - 병합과 연결
    - ***pandasJoin.py*** [병합, 연결](python/pythonData/pandasTest/pandasJoin.py)

    - ***pandasConcat.py*** [](python/pythonData/pandasTest/pandasConcat.py)
  //

- **matplotlib**

  - ***pyplotTest.py*** [](python/pythonData/visualTest/pyplotTest.py)
  - ***pyplotSubplot.py*** [](python/pythonData/visualTest/pyplotSubplot.py)
  - ***pyplotSubplot2.py*** [](python/pythonData/visualTest/pyplotSubplot2.py)
  - ***pyplotCustomizing.py*** [](python/pythonData/visualTest/pyplotCustomizing.py)

  - 산점도
    - ***pyplotGraph*** [산점도](python/pythonData/visualTest/pyplotGraph.py)

  - ***pyplotBar*** [막대그래프](python/pythonData/visualTest/pyplotBar.py)


- **seaborn**
  - ***seabornLinePlot.py*** [시본의 기본 그래프](python/pythonData/visualTest/seabornLinePlot.py)
  - ***seabornLinePlot.ipynb*** [Jupyter](python/pythonData/visualTest/seabornLinePlot.ipynb)


## 2024-05-29 수
-----------------

- **플롯리(plotly)**
  - ***plotlyTest.ipynb*** [플롯리](python/pythonData/visualTest/plotlyTest.ipynb)


- **데이터 과학을 위한 통계**

  - 탐색적 데이터 분석

    - ***p52_correlation.py*** [전에 부족했던 부분 추가](python/pythonData/p52_correlation.py)

    - ***scatterTelecom.py*** [산점도그리기](python/pythonData/scatterTelecom.py)

    - ***multivariatePlot.py*** [육각형 구간과 등고선](python/pythonData/multivariatePlot.py)

    - ***categoryPlot.py*** [범주형 변수 대 범주형 변수, 범주형 변수 대 수치형 변수, 바이올린 도표, 다변수 시각화](python/pythonData/categoryPlot.py)



  - 데이터와 표본분포
    - **임의 표본 추출**: 대상이 되는 모집단 내의 선택 가능한 원소들을 무작위로 추출하는 과정, 원칙 지키는 것 중요.
      계층(stratum): 공통된 특징을 가진 모집단의 동종 하위 그룹
      표본편향(sample bias): 모집단을 잘못 대표하는 표본

    - 편향 -> 통계적 편향은 계통적인(systematic) 오차를 의미한다.
    - 임의의 표본 추출이 정확하게 이루어져야 한다.
    - 선택편향: 관측 데이터를 선택하는 방식 때문에 생기는 편향 
      데이터 스누핑: 뭔가 흥미로운 것을 찾아 광범위하게 데이터를 살피는 것

    - **평균으로의 회귀(regression to the mean)**
      - ...

    - **중심 극한 정리(central limit theorem)**
      - ...
    
    - 표준오차
      - 표본 값들의 표준편차s와 표본크기 n을 기반으로 한 통계량을 이용하여 추정

    - 부트스트랩
      - ***resampleTest.py*** [부트스트랩](python/pythonData/resampleTest.py)

    - 정규분포
      - ***qqgraph.py*** [표준정규분포](python/pythonData/qqgraph.py)

    - 긴꼬리분포
      - ***qqBlackSwan.py*** [긴꼬리분포](python/pythonData/qqBlackSwan.py)

    - T 분포
    - 이항분포
      - 이항식: 두 가지 결과를 갖는다.
        이항시행: 두 가지 결과를 가져오는 시행
        이항분포: n번의 시행에서 성공한 횟수에 대한 분포
      - ***binormTest.py*** [이항분포](python/pythonData/binormTest.py)
      
    - 카이제곱분포
    - F 분포
    - 푸아송 분포



## 2024-05-30 목
-----------------

- **orange**
  - 머신러닝: 지도학습[target]
    - f(x, y) = ax + by + c

- **데이터 과학을 위한 통계**

  - 통계적 실험과 유의성 검정
    - ***permuteSample.py*** [재표본추출.순열검정(웹사이트 정보)](python/pythonData/permuteSample.py)

    - ***permuteSample2.py*** [통계적유의성과 p값.순열검정](python/pythonData/permuteSample2.py)

    - ***pValue.py*** [p-value](python/pythonData/pValue.py)
    - ***tTest*** [t-test](python/pythonData/tTest.py)

    - 분산 분석(analysis of variance, ANOVA)
      - ***anovaTest.py*** [anova](python/pythonData/anovaTest.py)

    - ***fStatistics.py*** [f-statistic](python/pythonData/fStatistics.py)
    - ***chi2Statistics.py*** [chi2Statistics](python/pythonData/chi2Statistics.py)
    - ***effectiveSize.py*** [effectiveSize](python/pythonData/effectiveSize.py)


  - 회귀와 예측 (머신러닝과 직접관련)
    - 지도학습 (target이 있는 학습)
      비 지도학습 (target이 없는 학습)
    
    - 단순 선형 회귀
      - 응답변수(y값): 예측하고자 하는 변수
        독립변수(x값): 응답치를 예측하기 위해 사용되는 변수
        레코드: 한 특정 경우에 대한 입력과 출력을 담고 있는 벡터
      
      - ***linearRegresstionTest.py*** [](python/pythonData/linearRegresstionTest.py)
    
    - **다중 선형 회귀**
      - ***multiLinearReg.py*** [다중선형회귀 예제](python/pythonData/multiLinearReg.py)



## 2024-05-31 금
-----------------
- 빅데이터 -> IoT기기에서 센서설정을 먼저 해야함 -> data생성 -> MySQL에 저장(database에 저장) -> 분석 및 분석한 데이터로 의미있는 결과, 모델을 뽑아냄 -> 머신러닝으로 모델을 훈련, 예측
- 그래프 ( plt(matplot), sns(seaborn) )
- 기본 데이터 다루기( numpy(속도가 빠름), pandas(파이썬의 엑셀, 행과 열로 이루어진 2차원 데이터를 column, row를 이용해서 다룸)(Series, DataFrame) )
- 데이터의 분류
  - 수치형: 숫자, linear모델(linear regression)도 잘 작동함
  - 범주형: 범주형은 수치형으로 바꿀 수 있음.
- 모집단과 샘플

- chapter 4  
  - y = f(x)에 대해
    - 수치형은 y값 자체가 중요
    - 범주형은 2차원 그래프에 그려진 선에서 위쪽인지 아래쪽인지가 중요
  - **train(fit)**



- **4장 회귀와 예측**
  - ***subsetRegresstion.py*** [subsetRegression](python/pythonData/subsetRegresstion.py)

  - ***weightRegre*** [weightRegre](python/pythonData/weightRegre.py)

  - 회귀에서의 factor variable
  
  - 다수의 수준을 갖는 요인변수들
    - ***manyLevelStep.py*** [manyLevelStep](python/pythonData/manyLevelStep.py)

  - 회귀진단
    - 특잇값(outlier)
    - ***outlierAnalysis.py*** [outlierAnalysis](python/pythonData/cooksDistance.py)
  
  - ***cooksDistance.py*** [cookDistance](python/pythonData/cooksDistance.py)

  - ***heteroskedasticity.py*** [heteroskedasticiy](python/pythonData/heteroskedasticity.py)

  - ***partialResidualPlot.py*** [partialResidualPlot](python/pythonData/partialResidualPlot.py)

  - ***polynomialRegression.py*** [polynomialRegression](python/pythonData/polynomialRegression.py)

  - ******