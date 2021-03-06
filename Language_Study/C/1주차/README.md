# C 학습 1주차

## 목차

1.  **개요**
    1.  프로그램과 프로그래밍 언어
    2.  프로그래밍 언어의 분류
2.  **C 기본 구조**
    1.  C의 장점과 단점
    2.  C의 구성 요소
    3.  C의 기본 형식
    4.  C의 기본 입출력 방법
    5.  주석
3.  **C 프로그램 생성 원리**
    1.  실행 파일 생성 과정
4.  **자료형(Data Type)**
    1.  메모리(Memory)란?
    2.  컴퓨터의 양수/음수 구별 방법
    3.  컴퓨터의 정수/문자 구별 방법
        1.  ASCII Code란?
    4.  컴퓨터의 실수 표현 방법
    5.  자료형의 종류
        1.  정수 자료형(Integer Type)
            1.  오버플로우(Overflow)와 언더플로우(Underflow)
        2.  문자 자료형(Character Type)
        3.  실수 자료형(Floating Point Type)
        4.  자료형의 크기를 알 수 있는 sizeof() 연산자
5.  **상수와 변수(Constant & Variable)**
    1.  상수와 변수의 차이
    2.  상수
        1.  진법 기초
        2.  리터럴 상수(Literal)
            1.  정수 리터럴
            2.  문자 리터럴
            3.  실수 리터럴
            4.  문자열 리터럴
        3.  매크로 상수
        4.  const 변수
    3.  변수
        1.  변수의 이름 - 식별자(Identifier)
        2.  변수 선언과 초기화
        3.  변수의 사용 방법
6.  **연산자(Operator)**
    1.  표현식이란?
    2.  연산자와 피연산자
    3.  전체 연산자 둘러보기
        1.  피연산자의 개수에 따라
        2.  연산자의 기능에 따라
    4.  연산자의 종류
        1.  대입 연산자(Assignment Operator)
        2.  산술 연산자(Arithmetic Operator)
        3.  증감 연산자(Increment/Decrement Operator)
        4.  관계 연산자(Relational Operator)
        5.  논리 연산자(Logical Operator)
        6.  비트 연산자(Bitwise Operator)
        7.  복합 대입 연산자(Additional Assignment Operator)
        8.  조건 연산자(Conditional Operator)
        9.  그 밖의 연산자들
    5.  연산자 우선순위와 연산 방향
        1.  연산자 우선순위
        2.  연산 방향
7.  **알고 계셨나요?🤓(부록)**
    1.  컴퓨터에서 음수를 표현하는 세 가지 방법
    2.  부동 소수 표기법
    3.  다양한 코딩 스타일과 코드 컨벤션(Code Convention)

---

## Main Page

C 언어 학습을 시작하신 것을 환영합니다!

이번 주차에는 다음과 같은 내용들을 학습합니다.

*   #### 개요

    프로그램과 프로그래밍 언어의 뜻을 알아보고, 다양한 프로그래밍 언어를 분류하는 기준에 대해 알아봅니다.

*   #### C의 기본 구조와 실행 파일 생성 과정

    C의 기본 문법 구조를 알아봅니다.

    C로 코딩한 프로그램이 실제 실행 파일이 되는 과정을 알아보고, 이를 도와주는 다양한 요소들을 알아봅니다.

*   #### 자료형

    C의 데이터 종류를 구분하는 자료형에 대해 알아봅니다. 또한 이를 메모리의 관점에서 파악하기 위해 기초적인 메모리 구조를 알아봅니다.

*   #### 상수와 변수

    상수와 변수의 의미와 차이에 대해 알아봅니다.

    상수의 표현 방식과 내부 원리를 간단히 살펴보고, 사용 방법을 알아봅니다.

    변수의 표현 방식과 내부 원리를 간단히 살펴보고, 사용 방법을 알아봅니다.

*   #### 연산자

    데이터 간의 연산을 지원하는 연산자에 대해 알아봅니다.

    연산자들을 분류하는 기준에 대해 알아봅니다.

    여러 연산자가 복합적으로 사용될 때, 연산자의 연산 순서에 대해 알아봅니다.



첫 주차에 모두 공부하기엔 상당히 양이 많지만, 한 주 동안 여러번 읽어 보면서 천천히 이해해 봅시다.

이해가 안 되거나 궁금한 부분이 있다면 언제든지 서로 토의하거나 질문해주세요!

----

*(C) 2021. Im-Yongsik(Hamsik2rang) all rights reserved.*

<div style="text-align:left"> <a href="./">← 첫 페이지로</a><div/>
<div style="text-align:right"> <a href="./Main_Text/1.개요.md">개요 →</a><div/>





