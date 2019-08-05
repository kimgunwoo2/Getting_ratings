#include<stdio.h>
#define N 3 //과목의수 
int main(void)
{
	int score[N];//점수배열 선언
	char rating[N];//등급배열 선언
    double point[N];//학점배열 선언
	double avr=0;//학점의 평균 선언
	double sum=0;//학점의 전체 합 선언
	int i;

	for(i=0; i<N;i++)//입력받은 점수를 학점으로 바꾸는 과정
	{
		printf("점수를 입력하세요 ");
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
	printf ("학점: %c\n", rating[i]);//입력한 점수에 대한 등급을 출력
	
	sum = (double)sum + point[i];//각각의 점수에 대한 학점의 점수를 sum에 다 합하는 과정
	}
	avr=(double)sum/N;// 다 합한 sum에 N(과목수)를 나누어서 전체학점에대한 점수의 평균을 구하는 과정
	printf("평점: %.2f\n", avr);// 학점의 평점을 출력(소수 둘째자리 까지)
}