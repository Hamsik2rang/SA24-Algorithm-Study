# C 학습 2주차

## 목차

1.  **개요**
    1.  흐름 제어(Flow Control)란?
    2.  C의 흐름 제어 문법 살펴보기
2.  **조건문(Conditional Statemen)**
    1.  if
        1.  if의 사용법과 의미
        2.  if ~ else if
        3.  if ~ else
        4.  if ~ else if ~ else
        5.  중첩 if
    2.  switch
        1.  switch의 사용법과 의미
        2.  break와 default
        3.  Fallthrough(의도적인 non-breaking)
3.  **반복문(Iteration Statement)**
    1.  블록(Block)과 범위
    2.  for
        1.  for의 사용법과 의미
        2.  for의 구성 요소
        3.  for의 동작 원리와 순서
        4.  중첩 for
    3.  while
        1.  while의 사용법과 의미
        2.  while의 구성 요소
        3.  while의 동작 원리와 순서
        4.  중첩 while
    4.  do-while
        1.  do-while의 사용법과 의미
        2.  do-while의 구성 요소
        3.  do-while의 동작 원리와 순서
    5.  무한 루프(Infinity Loop)
4.  **분기문(Branch Statement)**
    1.  분기문의 역할과 필요한 이유
    2.  break
    3.  continue
    4.  return
    5.  goto
        1.  goto의 사용법과 의미
        2.  사용을 권장하지 않는 이유

---

## Main Page

이번 주차에는 다음과 같은 내용들을 학습합니다.

*   #### 개요

    프로그램에서 흐름 제어(Flow Control)의 의미가 무엇인지, 그리고 그 중요성을 알아봅니다.

    C에 존재하는 모든 흐름 제어 문법들을 살펴봅니다.

*   #### 조건문

    흐름 제어 문법들 중 특정 조건에 따라 명령의 실행 여부를 결정할 수 있는 조건문에 대해 알아봅니다.

*   #### 반복문

    흐름 제어 문법들 중 특정 조건을 만족하는 한 명령을 반복할 수 있도록 해 주는 반복문에 대해 알아봅니다.

*   #### 분기문

    흐름 제어 문법들 중 조건문 또는 반복문의 흐름을 제어하는 분기문에 대해 알아봅니다.

흐름 제어 문법은 모든 프로그래밍 언어가 공통적으로 포함하고 있는 문법이며, 프로그램 작성에 필수적인 요소입니다.

따라서 흐름 제어 문법까지 이해하고 나면 모든 프로그래밍 언어의 공통 기초 문법을 습득한 것이나 마찬가지이니 이번 기회에 자세히 습득해 봅시다.

이해가 안 되거나 궁금한 부분이 있다면 언제든지 서로 토의하거나 질문해주세요!

----

*(C) 2021. Im-Yongsik(Hamsik2rang) all rights reserved.*

<div style="text-align:left"> <a href="./">← 첫 페이지로</a><div/>
<div style="text-align:right"> <a href="./Main_Text/1.개요.md">개요 →</a><div/>





