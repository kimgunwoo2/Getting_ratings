#include<stdio.h>
#define N 3 //�����Ǽ� 
int main(void)
{
	int score[N];//�����迭 ����
	char rating[N];//��޹迭 ����
    double point[N];//�����迭 ����
	double avr=0;//������ ��� ����
	double sum=0;//������ ��ü �� ����
	int i;

	for(i=0; i<N;i++)//�Է¹��� ������ �������� �ٲٴ� ����
	{
		printf("������ �Է��ϼ��� ");
		scanf_s("%d", &score[i]);
	
	if (score[i]>=90){
		rating [i] = 'A';
		point[i] = 4.5;
	}else if(score[i]>=80){
		rating[i] = 'a';
		point[i] =4.0;
	}else if (score[i]>=70){
		rating[i] = 'B';
		point[i] = 3.5;
	}else if(score[i]>=60){
		rating[i] = 'b';
		point[i] = 3.0;
	}else if (score[i]>=50){
		rating[i] = 'C';
		point[i] = 2.5;
	}else if(score[i]>=40){
		rating[i] = 'c';
		point[i] = 2.0;
	}else if (score[i]>=30){
		rating[i] = 'D';
		point[i] = 1.5;
	}else if(score[i]>=20){
		rating[i] = 'd';
		point[i] = 1.0;
	}else if (score[i]<20){
		rating[i]='F';
		point[i] = 0.0;
	}
	printf ("����: %c\n", rating[i]);//�Է��� ������ ���� ����� ���
	
	sum = (double)sum + point[i];//������ ������ ���� ������ ������ sum�� �� ���ϴ� ����
	}
	avr=(double)sum/N;// �� ���� sum�� N(�����)�� ����� ��ü���������� ������ ����� ���ϴ� ����
	printf("����: %.2f\n", avr);// ������ ������ ���(�Ҽ� ��°�ڸ� ����)
}