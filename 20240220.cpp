#include<iostream>

// ��� ���ӽ����̽�(�̸�����) std standard 
// using namespace std; (����)

// ���� : �����͸� �����ϴ� �ӽ� �޸� ���� 

int main()
{
    // ���̹� -> �̸� ���°� �߿�   
    std::cout << "2����" << std::endl;

    //ǥ���
    /* �밡���� ǥ��� : �����տ� ������ Ÿ���� �˷���
     bool bNum;
     ī�� ǥ��� : ��Ÿ
     int playerAtk;
    */


    // ������ Ÿ�� ũ��
    /*
    std::cout << "int�� ũ�� " << sizeof(int) << "����Ʈ"<< std::endl;
    //std::cout << "playerAtk���� ũ�� " << sizeof(playerAtk) << "����Ʈ" << std::endl;
    std::cout << "char�� ũ�� " << sizeof(char) << "����Ʈ" << std::endl;
    std::cout << "long�� ũ�� " << sizeof(long) << "����Ʈ" << std::endl;
    std::cout << "short�� ũ�� " << sizeof(short) << "����Ʈ" << std::endl;
    std::cout << "float�� ũ�� " << sizeof(float) << "����Ʈ" << std::endl;
    std::cout << "double�� ũ�� " << sizeof(double) << "����Ʈ" << std::endl;

    // ������ : ������ ���� ��Ȳ�� �°� ������ Ÿ���� ���
    // �Ǽ��� :

    */


    // �� ���� ���ϱ�
    /*
    double rad; // �Է¿� ����
    double area; //

    std::cout << "���� �������� �Է��Ͻÿ�.";
    std::cin >> rad; // �Է�

    area = rad * rad * 3.14; // ���� ����

    std::cout << "���� ���̴� ? " << area << std::endl; // ��� ���
    */


    // ������ 
    /*
     - ���� ������ :  (�����͸� �����ϴ� ������) , = (�����ʿ� �ִ� ���� ���ʿ� �ִ� �ǿ����ڿ� �����ϴ� ������ ����)
     - ��� ������ : + , - , * , / , %
     %(������ ������ -> ���� ������ �������� ���Ҷ� ���)

    int a = 5;
    int b = 2;
    int result = a + b;
    std::cout << a + b << std::endl;
    std::cout << result << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
    std::cout << a % b << std::endl

     ���迬����(�񱳿�����) -> ����� ������ true(1), false(0)
     >      a>b         a�� b���� ũ��
     <      a<b         a�� b���� �۳�
     >=      a>=b      a�� b���� ũ�ų� �۳�
     <=,    a<=b      a�� b���� �۰ų� ũ��
     == ,    a==b      a�� b�� ����
     !=      a!=b      a�� b�� ���� �ʴ�

    int num1 = 1;
    int num2 = 2;

    int result;
    int result1;
    int result2;
    int result3;

    result = (num1 > num2);      // num1�� num2���� ũ�� ? 0(����)
    result1 = (num1 <= num2);   // num1�� num2���� ���ų� �۳� ? 1(��)
    result2 = (num1 == num2);   // num1�� num2�� ���� ? 0 (����)
    result3 = (num1 != num2);   // num1�� num2�� ���� �ʳ� ? 1(��)

    std::cout << "result�� ����� �� : " << result << std::endl;
    std::cout << "result1�� ����� �� : " << result1 << std::endl;
    std::cout << "result2�� ����� �� : " << result2 << std::endl;
    std::cout << "result3�� ����� �� : " << result3 << std::endl;



    */


    // ����������
    /*   ����������
    �� ++ , --
    �� �ǿ������� ���� 1���� �Ǵ� 1����

    ++a      �� ����, �� ���� (���� �����ϰ� �״����� ����) ��������
    a++      �� ����, �� ���� (���� �����ϰ� �� ������ ����) ��������
    --a      �� ����, �� ���� (���� �����ϰ� �� ������ ����) ��������
    a--      �� ����, �� ���� (���� �����ϰ� �� ������ ����) ��������

       /*int num = 10; // num������ 10���� �ʱ�ȭ
    std::cout << "num�� �� : " << num << std::endl;
    num++; // num = num+1�� ���� 11
    std::cout << "num++�� num�� ��" << num << std::endl;
    ++num;
    std::cout << "++num�� num�� ��" << num << std::endl;
    num--; // num = num-1�� ����
    std::cout << "num--�� num�� ��" << num << std::endl;
    --num;
    std::cout << "--num�� num�� ��" << num << std::endl;
    // ������ ������ ����
    int num1 = 10;
    int num2 = 20;

    int a;
    int b;

    a = ++num1; // ���� ��� , �� ���� �� ����
    std::cout << " ���� a�� �� : " << a << ", " << "���� num1�� �� : " << num1 << std::endl;

    b = num2++;// ���� ���� , �� ���� �� ����, (num2�� ����Ǿ� �ִ� 20�� ���� b�� �����ϰ� ����)
    std::cout << " ���� b�� �� : " << b << ", " << "���� num2�� �� : " << num2 << std::endl;


    std::cout << ++num1 << std::endl; // 11
    std::cout << num1 << std::endl; // 11

    std::cout << std::endl;

    // ���������̱� ������ ������(���)�ϰ� ����
    std::cout << num2++ << std::endl;
    // ������ �� ���
    std::cout << num2++ << std::endl;

    // ���������ڸ� �� �̿��ϸ�?
    num2 = num2 + 1;
    num2++; // �����ڰ� �ϳ���

    */


    //����
    /*
    �Է¿� ���� 2���� �����Ѵ�
    �Է��� ���� ������ ��Ģ������ �����Ѵ�.
    */

    // Ǯ��1
    /* ��� 1
    int num1, num2;

    std::cout << "num1�� ���� �Է��Ͻÿ�";
    std::cin >> num1;
    std::cout << "num2�� ���� �Է��Ͻÿ�";
    std::cin >> num2;

    std::cout << "num1 + num2 = " << num1 + num2 << std::endl;
    std::cout << "num1 - num2 = " << num1 - num2 << std::endl;
    std::cout << "num1 * num2 = " << num1 * num2 << std::endl;
    std::cout << "num1 / num2 = " << num1 / num2 << std::endl;
    std::cout << "num1 % num2 = " << num1 % num2 << std::endl;
    */


    // Ǯ��2
    /* ���2
    int num1, num2, sum ,min, mul, div, rem;

    std::cout << "num1�� ���� �Է��Ͻÿ�";
    std::cin >> num1;
    std::cout << "num2�� ���� �Է��Ͻÿ�";
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

    // ���մ��� ������
    /*
    // a+=b     a = a + b
    // a-=b   a = a - b
    // a/=b   a = a / b
    // a*=b   a = a * b

    */

    //�� ������
    /*
    && : �ǿ����ڰ� ��� ��(true) �϶��� �� (AND ����)
    0 && 0      0
    0 && 1      0
    1 && 0      0
    1 && 1      1


    || : �ǿ������� ���� �ϳ��� ���̸� �� (OR ����)
    0 || 0      0
    0 || 1      1
    1 || 0      1
    1 || 1      1

    ! : �ǿ����ڰ� ���̸� ����, �����̸� ��
    !0         1
    !1         0



    int number = 10;
    int number1 = 20;

    int res = (number == 9 && number1 == 20);
    int res1 = (number <= 10 || number1 < 20);

    std::cout << res << std::endl;   //false
    std::cout << res1 << std::endl;   // true

    */

    // �ڵ��� ������
    // �������� �˾Ƹ��� �� �ִ� �ڵ� 


    // ��Ʈ ������
    /*
     & : �ΰ��� ��Ʈ�� ��� 1�϶� 1�� ��ȯ
       0 & 0      0
       0 & 1      0
       1 & 0      0
       1 & 1      1

    int bitNum = 15;
    int bitNum1 = 20;
    int bitres = bitNum & bitNum1;
    std::cout << bitres << std::endl;

     | : �ΰ��� ��Ʈ �߿� �ϳ��� 1�̸� 1
        0 | 0      0
       0 | 1      1
       1 | 0      1
       1 | 1      1

     ^ : �ΰ��� ��Ʈ�� ���� �ٸ� ��쿡�� 1�� ��ȯ
       0 ^ 0      0
       0 ^ 1      1
       1 ^ 0      1
       1 ^ 1      0
       */


       //shift����(��Ʈ �̵�)
       /*

             << , >>

             int sNum = 15;   // 0000 1111
             int sRes = sNum << 1; // ���������� 1��Ʈ �̵����Ѷ�  0001 1110
             int sRes1 = sNum << 2;
             int sRes2 = sNum >> 1;

             std::cout << sRes << std::endl;   //30
             std::cout << sRes1 << std::endl; //60
             std::cout << sRes2 << std::endl; //30
             // ��Ʈ�� ���� �������� 1ĭ�� �̵��Ҷ����� ������ ���� *2
             // ��Ʈ�� ���� ���������� �̵���Ű�� ������ ���� /2
             // ��Ȳ�� ���� ������ �������� ��� ��ü�Ҽ� ����
             // ��ǻ�ʹ� ���������� ������ ���� /2 �ҹٿ� *0.5
             */

             // ���׿����� 
             /*
             // if else �б⹮�� ���� ���׿����ڸ� ����ϸ� �������� ���Ƽ� ȿ�� ,
             // ���� ������ �ȿ� ���׿����ڸ� ������ ������ �������� ������
             int num1 = 2;
             int num2 = 3;
             int res;
             res = (num1 > num2) ? num1 : num2;
             std::cout << res;
             */
}