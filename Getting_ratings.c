#include<stdio.h>
#define N 3 //�����Ǽ�
#define SEMESTER 8 //�б��� ��
int main(void)
{
	int score[SEMESTER][N];//�����迭 ����
    double point[SEMESTER][N];//�����迭 ����
	double avr=0;//������ ��� ����
	double sum;//������ ��ü �� ����
	double all=0;//��ü�б��� ��� ����
	int i,j;
	for(j=0; j<SEMESTER; j++)
	{
		sum=0;
	for(i=0; i<N;i++)//�Է¹��� ������ �������� �ٲٴ� ����
	{
		
		printf(" %d �б��� ������ �Է��ϼ��� ",j+1);
		scanf("%d", &score[j][i]);
	
	if (score[j][i]>=90){
		printf("         A+\n");
		point[j][i] = 4.5;
	}else if(score[j][i]>=80){
		printf("         A\n");
		point[j][i] =4.0;
	}else if (score[j][i]>=70){
		printf("         B+\n");
		point[j][i] = 3.5;
	}else if(score[j][i]>=60){
		printf("         B\n");
		point[j][i] = 3.0;
	}else if(score[j][i]>=50){
		printf("         C+\n");
		point[j][i] = 2.5;
	}else if(score[j][i]>=40){
		printf("         C\n");
		point[j][i] = 2.0;
	}else if (score[j][i]>=30){
		printf("         D+\n");
		point[j][i] = 1.5;
	}else if(score[j][i]>=20){
		printf("         D\n");
		point[j][i] = 1.0;
	}else if (score[j][i]<20){
		printf("         F\n");
		point[j][i] = 0.0;
	}
	
	sum = sum + point[j][i];//������ ������ ���� ������ ������ sum�� �� ���ϴ� ����
	
	}avr=sum/N;// �� ���� sum�� N(�����)�� ����� ��ü���������� ������ ����� ���ϴ� ����
	printf("%d�б��� ����: %.2f\n\n",j+1,avr);// ������ ������ ���(�Ҽ� ��°�ڸ� ����)
	all=avr+all;
	}all=all/SEMESTER;
	
	printf("��%d�б��� ������ ������ %.2f\n\n",SEMESTER ,all);
	return 0;
			
	
}