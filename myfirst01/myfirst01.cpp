#include<stdio.h>

float jishuanyuan(float x)
{
	float R = x;
	float yuan = R * R*3.1415926;
	return yuan;
}

int printyuan(float y)
{
	float Y = y;
	printf("%f\n", Y);
	return 0;
}

int main()

{
	float R ,Z = 0;
	scanf("%f\n",&R);
	//Z = jishuanyuan(R);
	printf("%f\n",R);
	return 0;

}

