#include<iostream>

// 사용 네임스페이스(이름공간) std standard 
// using namespace std; (지양)

// 변수 : 데이터를 저장하는 임시 메모리 공간 

int main()
{
    // 네이밍 -> 이름 짓는거 중요   
    std::cout << "2일차" << std::endl;

    //표기법
    /* 헝가리안 표기법 : 변수앞에 데이터 타입을 알려줌
     bool bNum;
     카멜 표기법 : 낙타
     int playerAtk;
    */


    // 데이터 타입 크기
    /*
    std::cout << "int형 크기 " << sizeof(int) << "바이트"<< std::endl;
    //std::cout << "playerAtk변수 크기 " << sizeof(playerAtk) << "바이트" << std::endl;
    std::cout << "char형 크기 " << sizeof(char) << "바이트" << std::endl;
    std::cout << "long형 크기 " << sizeof(long) << "바이트" << std::endl;
    std::cout << "short형 크기 " << sizeof(short) << "바이트" << std::endl;
    std::cout << "float형 크기 " << sizeof(float) << "바이트" << std::endl;
    std::cout << "double형 크기 " << sizeof(double) << "바이트" << std::endl;

    // 정수형 : 목적에 따라 상황에 맞게 데이터 타입을 사용
    // 실수형 :

    */


    // 원 넓이 구하기
    /*
    double rad; // 입력용 변수
    double area; //

    std::cout << "원의 반지름을 입력하시오.";
    std::cin >> rad; // 입력

    area = rad * rad * 3.14; // 넓이 공식

    std::cout << "원의 넓이는 ? " << area << std::endl; // 결과 출력
    */


    // 연산자 
    /*
     - 대입 연산자 :  (데이터를 저장하는 연산자) , = (오른쪽에 있는 값을 왼쪽에 있는 피연산자에 대입하는 연산을 수행)
     - 산술 연산자 : + , - , * , / , %
     %(나머지 연산자 -> 몫은 버리고 나머지를 구할때 사용)

    int a = 5;
    int b = 2;
    int result = a + b;
    std::cout << a + b << std::endl;
    std::cout << result << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl

     관계연산자(비교연산자) -> 결과는 무조건 true(1), false(0)
     >      a>b         a가 b보다 크냐
     <      a<b         a가 b보다 작냐
     >=      a>=b      a가 b보다 크거나 작냐
     <=,    a<=b      a가 b보다 작거나 크냐
     == ,    a==b      a가 b는 같다
     !=      a!=b      a가 b는 같지 않다

    int num1 = 1;
    int num2 = 2;

    int result;
    int result1;
    int result2;
    int result3;

    result = (num1 > num2);      // num1이 num2보다 크냐 ? 0(거짓)
    result1 = (num1 <= num2);   // num1이 num2보다 같거나 작냐 ? 1(참)
    result2 = (num1 == num2);   // num1이 num2가 같냐 ? 0 (거짓)
    result3 = (num1 != num2);   // num1이 num2가 같지 않냐 ? 1(참)

    std::cout << "result에 저장된 값 : " << result << std::endl;
    std::cout << "result1에 저장된 값 : " << result1 << std::endl;
    std::cout << "result2에 저장된 값 : " << result2 << std::endl;
    std::cout << "result3에 저장된 값 : " << result3 << std::endl;



    */


    // 증감연산자
    /*   증감연산자
    ㄴ ++ , --
    ㄴ 피연산자의 값을 1증가 또는 1감소

    ++a      선 증가, 후 연산 (먼저 증가하고 그다음에 연산) 전위연산
    a++      선 연산, 후 증가 (먼저 연산하고 그 다음에 증가) 후위연산
    --a      선 감소, 후 연산 (먼저 감소하고 그 다음에 연산) 전위연산
    a--      선 연산, 후 감소 (먼저 연산하고 그 다음에 감소) 후위연산

       /*int num = 10; // num변수를 10으로 초기화
    std::cout << "num의 값 : " << num << std::endl;
    num++; // num = num+1와 같음 11
    std::cout << "num++후 num의 값" << num << std::endl;
    ++num;
    std::cout << "++num후 num의 값" << num << std::endl;
    num--; // num = num-1과 같음
    std::cout << "num--후 num의 값" << num << std::endl;
    --num;
    std::cout << "--num후 num의 값" << num << std::endl;
    // 전위와 후위의 차이
    int num1 = 10;
    int num2 = 20;

    int a;
    int b;

    a = ++num1; // 전위 방식 , 선 증가 후 연산
    std::cout << " 변수 a의 값 : " << a << ", " << "변수 num1의 값 : " << num1 << std::endl;

    b = num2++;// 후위 연산 , 선 연산 후 증가, (num2에 저장되어 있는 20을 먼저 b에 대입하고 증가)
    std::cout << " 변수 b의 값 : " << b << ", " << "변수 num2의 값 : " << num2 << std::endl;


    std::cout << ++num1 << std::endl; // 11
    std::cout << num1 << std::endl; // 11

    std::cout << std::endl;

    // 후위연산이기 때문에 선연산(출력)하고 증가
    std::cout << num2++ << std::endl;
    // 증가된 값 출력
    std::cout << num2++ << std::endl;

    // 증감연산자를 잘 이용하면?
    num2 = num2 + 1;
    num2++; // 연산자가 하나만

    */


    //문제
    /*
    입력용 변수 2개를 선언한다
    입력을 받은 변수로 사칙연산을 수행한다.
    */

    // 풀이1
    /* 방법 1
    int num1, num2;

    std::cout << "num1의 값을 입력하시오";
    std::cin >> num1;
    std::cout << "num2의 값을 입력하시오";
    std::cin >> num2;

    std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
    std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
    std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
    std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
    std::cout << "num1 % num2 = " << num1 % num2 << std::endl;
    */


    // 풀이2
    /* 방법2
    int num1, num2, sum ,min, mul, div, rem;

    std::cout << "num1의 값을 입력하시오";
    std::cin >> num1;
    std::cout << "num2의 값을 입력하시오";
    std::cin >> num2;

    sum = num1 + num2;
    min = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    rem = num1 % num2;

    std::cout << "num1 + num2 = " << sum << std::endl;
    std::cout << "num1 - num2 = " << min << std::endl;
    std::cout << "num1 * num2 = " << mul << std::endl;
    std::cout << "num1 / num2 = " << div << std::endl;
    std::cout << "num1 % num2 = " << rem << std::endl;
    */

    // 복합대입 연산자
    /*
    // a+=b     a = a + b
    // a-=b   a = a - b
    // a/=b   a = a / b
    // a*=b   a = a * b

    */

    //논리 연산자
    /*
    && : 피연산자가 모두 참(true) 일때만 참 (AND 연산)
    0 && 0      0
    0 && 1      0
    1 && 0      0
    1 && 1      1


    || : 피연산자중 둘중 하나가 참이면 참 (OR 연산)
    0 || 0      0
    0 || 1      1
    1 || 0      1
    1 || 1      1

    ! : 피연산자가 참이면 거짓, 거짓이면 참
    !0         1
    !1         0



    int number = 10;
    int number1 = 20;

    int res = (number == 9 && number1 == 20);
    int res1 = (number <= 10 || number1 < 20);

    std::cout << res << std::endl;   //false
    std::cout << res1 << std::endl;   // true

    */

    // 코드의 가독성
    // 누가봐도 알아먹을 수 있는 코드 


    // 비트 연산자
    /*
     & : 두개의 비트가 모두 1일때 1을 반환
       0 & 0      0
       0 & 1      0
       1 & 0      0
       1 & 1      1

    int bitNum = 15;
    int bitNum1 = 20;
    int bitres = bitNum & bitNum1;
    std::cout << bitres << std::endl;

     | : 두개의 비트 중에 하나라도 1이면 1
        0 | 0      0
       0 | 1      1
       1 | 0      1
       1 | 1      1

     ^ : 두개의 비트가 서로 다른 경우에만 1을 반환
       0 ^ 0      0
       0 ^ 1      1
       1 ^ 0      1
       1 ^ 1      0
       */


       //shift연산(비트 이동)
       /*

             << , >>

             int sNum = 15;   // 0000 1111
             int sRes = sNum << 1; // 오른쪽으로 1비트 이동시켜라  0001 1110
             int sRes1 = sNum << 2;
             int sRes2 = sNum >> 1;

             std::cout << sRes << std::endl;   //30
             std::cout << sRes1 << std::endl; //60
             std::cout << sRes2 << std::endl; //30
             // 비트의 열을 왼쪽으로 1칸씩 이동할때마다 정수의 값은 *2
             // 비트의 열을 오른쪽으로 이동시키면 정수의 값은 /2
             // 상황에 따라 곱셈과 나눗셈은 얘로 대체할수 있음
             // 컴퓨터는 나눗셈보다 곱셈이 빠름 /2 할바엔 *0.5
             */

             // 삼항연산자 
             /*
             // if else 분기문일 때만 삼항연산자를 사용하면 가독성이 좋아서 효율 ,
             // 삼항 연산자 안에 삼항연산자를 넣으면 오히려 가독성이 떨어짐
             int num1 = 2;
             int num2 = 3;
             int res;
             res = (num1 > num2) ? num1 : num2;
             std::cout << res;
             */
}