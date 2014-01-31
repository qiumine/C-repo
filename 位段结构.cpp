#include <iostream>															
using namespace std;

typedef struct bit{
       unsigned int hour:5; // ���ź�����ִ���λ�� 5λ
       unsigned int min: 6; // ���ź�����ִ���λ�� 6λ
       unsigned int sec:  6; // ���ź�����ִ���λ�� 6λ
}M;      // �൱����������4�ֽڣ�һ��int�������� 

typedef struct node
{
     unsigned int a: 1;      // ����һ������λ��λ�Σ�������ռ4Byte 
}S;

typedef struct node1
{
     unsigned int : 0;     // ��C++��ռ1�ֽڿռ䣬��C��ռ0�ֽ� 
}S1;

typedef struct node2
{
     unsigned int a : 1;   // 
     unsigned int : 0;     // ��һ��λ�η���һ���µ�λ�δ洢��Ԫ 
     unsigned  c: 32;      // ����ռ4+4=8Byte 
}S2;

typedef struct node3
{
     unsigned int a : 4;
     unsigned int : 0;
     int : 6;              // ���λ�η���һ���µ�λ�δ洢��Ԫ 
     
     unsigned c : 32;      // ����6+32>32,����λ��CҲ�����µĴ洢��Ԫ����
                           // 4+4+4=12Byte 
}S3;

typedef struct node4
{                               
     unsigned int a: 1;    
     char b;               // ��һ��λ�δ洢��Ԫ���ܹ��������еĳ�Ա������ռ 
     int c: 1;             // 4Byte 
     int d: 2;
     unsigned int e: 2;
}S4;

// �������� 
int main()
{
     S4 s4;
     s4.a = 1;
     s4.c = 1;
     s4.d = 2;
     s4.e = 3;
     
     cout << s4.a << " " 
          << s4.c << " "
          << s4.d << " "
          << s4.e << endl;
     cout << sizeof(M) <<" " 
          << sizeof(S) << " "
          << sizeof(S1) << " "
          << sizeof(S2) << " " 
          << sizeof(S3) << " "
          << sizeof(S4) << endl;
     
     system("pause");
     return 0;
}

/*
 �������н���ǣ�
 1 -1 -2 3
 4 4 1 8 12 4
 1������ӡS4�ĸ���λ��ʱ����ӡ�Ľ���븳�ĳ�ֵ��ͬ
 2������cֻռһλ����ôû������λ����ʱ���з�����չֱ���ڸ�λ���1��
    ���Դ�ӡ���Ϊ-1��
 3������dռ2λ�� ���Ե���2����dʱ���ڴ�洢������Ϊ10����ʱ���з���λ��չ��
    ��λ��1����Ϊ0XFF FF FF FE����ô����ֵΪ-2��*/ 

