#include "stdio.h"
#include "math.h"

int main(){
	int i, j;
	double sum_S = 0, sum_E = 0;
	double ave[2], dev[2] = {0};
	double hensa;

	double science[20]
	       	= {65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
	double english[20]
	       	= {44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};

	double tmp;

	for(i = 0; i < 20; i++){
		sum_S += science[i];
		sum_E += english[i];
	}

	ave[0] = sum_S / 20;
	ave[1] = sum_E / 20;

	for(i = 0; i < 20; i++){
		dev[0] += ((science[i]-ave[0]) * (science[i]-ave[0])) / 20;
		dev[1] += ((english[i]-ave[1]) * (english[i]-ave[1])) / 20;
	}
	dev[0] = sqrt(dev[0]);
	dev[1] = sqrt(dev[1]);

	printf("平均：%.1f, %.1f\n", ave[0], ave[1]);
	printf("標準偏差：%.1f, %.1f\n", dev[0], dev[1]);
	printf("合計：%.1f, %.1f\n", sum_S, sum_E);
	printf("\n");

	printf("偏差値：\n");

	for(i = 0; i < 20; i++){
		hensa = (science[i] - ave[0]) / dev[0] * 10 + 50;
		printf("%d人目：%f, ", i+1, hensa);

		hensa = (english[i] - ave[1]) / dev[1] * 10 + 50;
		printf("%f\n", hensa);
		
	}
	printf("\n");


	for(i = 0; i < 20; i++){
		for(j = 19; j > i; j--){
	       		if(science[j] > science[i]){
				tmp = science[i];
				science[i] = science[j];
				science[j] = tmp;
			}
	       		if(english[j] > english[i]){
				tmp = english[i];
				english[i] = english[j];
				english[j] = tmp;
			}
		}
	}
	printf("\n");


	printf("点数の高い順にソート\n");
	printf("理科：\n");
	for(i = 0; i < 20; i++){
		printf("%.1f ", science[i]);
	}
	printf("\n");

	printf("英語：\n");
	for(i = 0; i < 20; i++){
		printf("%.1f ", english[i]);
	}
	printf("\n");

	return 0;
}
