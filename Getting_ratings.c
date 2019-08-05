#include<stdio.h>
#define N 3 //과목의수
#define SEMESTER 8 //학기의 수
int main(void)
{
	int score[SEMESTER][N];//점수배열 선언
    double point[SEMESTER][N];//학점배열 선언
	double avr=0;//학점의 평균 선언
	double sum;//학점의 전체 합 선언
	double all=0;//전체학기의 평균 선언
	int i,j;
	for(j=0; j<SEMESTER; j++)
	{
		sum=0;
	for(i=0; i<N;i++)//입력받은 점수를 학점으로 바꾸는 과정
	{
		
		printf(" %d 학기의 점수를 입력하세요 ",j+1);
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
	
	sum = sum + point[j][i];//각각의 점수에 대한 학점의 점수를 sum에 다 합하는 과정
	
	}avr=sum/N;// 다 합한 sum에 N(과목수)를 나누어서 전체학점에대한 점수의 평균을 구하는 과정
	printf("%d학기의 평점: %.2f\n\n",j+1,avr);// 학점의 평점을 출력(소수 둘째자리 까지)
	all=avr+all;
	}all=all/SEMESTER;
	
	printf("총%d학기의 학점의 평점은 %.2f\n\n",SEMESTER ,all);
	return 0;
			
	
}