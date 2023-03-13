//Praktikum 2
//AND 2
/*
#include<stdio.h>
void main() {
	int w1 = 1, w2 = 1, t = 2;
	int x1, x2, y, out;
	printf("Operasi AND\n");
	printf("Input x1 = ");
	scanf_s("%d", &x1);
	printf("Input x2 = ");
	scanf_s("%d", &x2);
	y = w1 * x1 + w2 * x2;
	if (y >= t)
		out = 1;
	else
		out = 0;
	printf("Output=%d\n",out);
}*/

//OR 2
/*
#include <stdio.h>
void main() {
	int w1 = 2, w2 = 2, t = 2;
	int x1, x2, y, out;
	printf("Operasi OR\n");
	printf("Input x1 = ");
	scanf_s("%d", &x1);
	printf("Input x2 = ");
	scanf_s("%d", &x2);
	y = w1 * x1 + w2 * x2;
	if (y >= t)
		out = 1;
	else
		out = 0;
	printf("Output=%d\n", out);
}*/

//AND NOT
/*#include <stdio.h>
void main() {
	int w1 = 2, w2 = -1, t = 2;
	int x1, x2, y, out;
	printf("Operasi AND NOT\n");
	printf("Input x1 = ");
	scanf_s("%d", &x1);
	printf("Input x2 = ");
	scanf_s("%d", &x2);
	y = w1 * x1 + w2 * x2;
	if (y >= t)
		out = 1;
	else
		out = 0;
	printf("Output=%d\n", out);
}*/

//XOR 2
/*
#include <stdio.h>
void main() {
	int w1 = 2, w2 = -1, w3 = 2, w4 = -1,
		w5 = 2, w6 = 2, t = 2;
	int x1, x2, y, o1, o2, o3, z1, z2;
	printf("Operasi XOR\n");
	printf("Input x1 = ");
	scanf_s("%d", &x1);
	printf("Input x2 = ");
	scanf_s("%d", &x2);
	o1 = w1 * x1 + w4 * x2;
	if (o1 >= t)
		z1 = 1;
	else
		z1 = 0;
	o2 = w2 * x1 + w3 * x2;
	if (o2 >= t)
		z2 = 1;
	else
		z2 = 0;
	o3 = w5 * z1 + w6 * z2;
	if (o3 >= t)
		y = 1;
	else
		y = 0;
	printf("Outout=%d\n", y);
}*/

//AND 3
/*
#include <stdio.h>
void main() {
	int w1 = 1, w2 = 1, w3 = 1, t = 3;
	int x1, x2, x3, y, out;
	printf("Opeasi AND\n");
	printf("Input X1 = ");
	scanf_s("%d", &x1);
	printf("Input X2 = ");
	scanf_s("%d", &x2);
	printf("Input X3 = ");
	scanf_s("%d", &x3);
	y = w1 * x1 + w2 * x2 + w3 * x3;
	if (y >= t) {
		out = 1;
	}
	else {
		out = 0;
	}
	printf("Output = %d\n", out);
}*/


//OR 3
/*
#include <stdio.h>
void main() {
	int w1 = 2, w2 = 2, w3 = 2, t = 2;
	int x1, x2, x3, y, out;
	printf("Operasi OR\n");
	printf("Input X1 = ");
	scanf_s("%d", &x1);
	printf("Input X2 = ");
	scanf_s("%d", &x2);
	printf("Input X3 = ");
	scanf_s("%d", &x3);
	y = w1 * x1 + w2 * x2 + w3 * x3;
	if (y >= t) {
		out = 1;
	}
	else {
		out = 0;
	}
	printf("Output = %d\n", out);
}*/


//XOR3
/*
#include <stdio.h>
void main() {
	int w1 = 2, w2 = -1, w3 = 2, w4 = -1, w5 = 2, w6 = 2, w7 = 2, w8 = -1, w9 = 2, w10 = -1, w11 = 2, w12 = 2, t = 2;
	int x1, x2, x3, y, o1, o2, o3, o4, o5, o6, z1, z2, z3, z4, z5;
	printf("Operasi XOR\n");
	printf("Input X1 = ");
	scanf_s("%d", &x1);
	printf("Input X2 = ");
	scanf_s("%d", &x2);
	printf("Input X3 = ");
	scanf_s("%d", &x3);
	o1 = w1 * x1 + w4 * x2;
	if (o1 >= t) {
		z1 = 1;
	}
	else {
		z1 = 0;
	}
	o2 = w2 * x1 + w3 * x2;
	if (o2 >= t) {
		z2 = 1;
	}
	else {
		z2 = 0;
	}
	o3 = w5 * z1 + w6 * z2;
	if (o3 >= t) {
		z3 = 1;
	}
	else {
		z3 = 0;
	}
	o4 = w7 * z3 + w10 * x3;
	if (o4 >= t) {
		z4 = 1;
	}
	else {
		z4 = 0;
	}
	o5 = w8 * z3 + w9 * x3;
	if (o5 >= t) {
		z5 = 1;
	}
	else {
		z5 = 0;
	}
	o6 = w11 * z4 + w12 * z5;
	if (o6 >= t) {
		y = 1;
	}
	else {
		y = 0;
	}
	printf("Output = %d\n", y);
}
*/

//Praktikum 3 - Perceptron
//AND Perceptron
/*
#include<stdio.h>
#include<stdlib.h>

double d_rand() {
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}

void main() {
	int i, j, out, ERR, y;
	float w[3], O, LR = 0.1, init = 0.15;
	int x[3][4] = {
		{0,0,1,1},
		{0,1,0,1},
		{1,1,1,1}
	};
	printf("Operasi AND\n");
	int T[4] = { 0,0,0,1 };
	//inisialisasi bobot
	for (i = 0; i < 3; i++) {
		w[i] = init * d_rand();
		printf("w[%d]=%f\n", i, w[i]);
	}
	//traning
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 4; j++) {
			O = x[0][j] * w[0] + x[1][j] * w[1] + x[2][j] * w[2];
			if (O > 0.0)
				out = 1;
			else
				out = 0;
			ERR = T[j] - out;
			if (ERR != 0) {
				w[0] = w[0] + LR * x[0][j] * ERR;
				w[1] = w[1] + LR * x[1][j] * ERR;
				w[2] = w[2] + LR * x[2][j] * ERR;
			}
		}
		printf("Iterassi:%d Error:%d\n", i, ERR);
	}
	//running
	for (i = 0; i < 4; i++) {
		printf("Input X1:");
		scanf_s("%d", &x[0][0]);
		printf("Input X2:");
		scanf_s("%d", &x[1][0]);
		O = x[0][0] * w[0] + x[1][0] * w[1] + x[2][0] * w[2];
		if (O > 0.0)
			y = 1;
		else
			y = 0;
		printf("Output:%d\n", y);
	}
}*/


//OR Perceptron
/*
#include<stdio.h>
#include<stdlib.h>

double d_rand() {
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}
void main() {
	int i, j, out, ERR, y;
	float w[3], O, LR = 0.1, init = 0.15;
	int x[3][4] = {
		{0,0,1,1},
		{0,1,0,1},
		{1,1,1,1}
	};
	int T[4] = { 0,1,1,1 };
	printf("Operasi OR\n");
	//inisialisasi bobot
	for (i = 0; i < 3; i++) {
		w[i] = init * d_rand();
		printf("w[%d]=%f\n", i, w[i]);
	}
	//traning
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 4; j++) {
			O = x[0][j] * w[0] + x[1][j] * w[1] + x[2][j] * w[2];
			if (O > 0.0)
				out = 1;
			else
				out = 0;
			ERR = T[j] - out;
			if (ERR != 0) {
				w[0] = w[0] + LR * x[0][j] * ERR;
				w[1] = w[1] + LR * x[1][j] * ERR;
				w[2] = w[2] + LR * x[2][j] * ERR;
			}
		}
		printf("Iterasi:%d Err:%d\n", i, ERR);
	}
	//running
	for (i = 0; i < 4; i++) {
		printf("Input X1:");
		scanf_s("%d", &x[0][0]);
		printf("Input X2:");
		scanf_s("%d", &x[1][0]);
		O = x[0][0] * w[0] + x[1][0] * w[1] + x[2][0] * w[2];
		if (O > 0.0)
			y = 1;
		else
			y = 0;
		printf("Output:%d\n", y);
	}
}
*/

//7 Segment
/*
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
double d_rand() {
	return(((double)(rand() % 32767) / 32767.0 - 0.5) * 2.0);
}
void main() {
	int i, j, p, l, out[10], ERR[10], jum;
	int x[10][8] = {
		// a b c d e f g l
		{1,1,1,1,1,1,0,1}, //0
		{0,1,1,0,0,0,0,1}, //1
		{1,1,0,1,1,0,1,1}, //2
		{1,1,1,1,0,0,1,1}, //3
		{0,1,1,0,0,1,1,1}, //4
		{1,0,1,1,0,1,1,1}, //5
		{0,0,1,1,1,1,1,1}, //6
		{1,1,1,0,0,0,0,1}, //7
		{1,1,1,1,1,1,1,1}, //8
		{1,1,1,0,0,1,1,1} //9
	};
	int T[10][10] = {
	{1,0,0,0,0,0,0,0,0,0},
	{0,1,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,0,0},
	{0,0,0,1,0,0,0,0,0,0},
	{0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,1,0,0,0,0},
	{0,0,0,0,0,0,1,0,0,0},
	{0,0,0,0,0,0,0,1,0,0},
	{0,0,0,0,0,0,0,0,1,0},
	{0,0,0,0,0,0,0,0,0,1}
	};
	float w[10][8], O[10], LR = 0.1f, init = 0.15f, error;
	//inisialisasi bobot
	for (j = 0; j < 10; j++) {
		for (i = 0; i < 8; i++) {
			w[j][i] = init * d_rand();
		}
	}
	//traning
	for (l = 0; l < 100; l++) {
		error = 0.00;
		jum = 1;
		for (p = 0; p < 10; p++) {
			for (j = 0; j < 10; j++) {
				O[j] = 0.0;
				for (i = 0; i < 8; i++) {
					O[j] = O[j] + x[p][i] * w[j][i];
				}
				if (O[j] > 0.0)
					out[j] = 1;
				else
					out[j] = 0;
				ERR[j] = T[p][j] - out[j];
				error = error + abs(ERR[j]);
				jum++;
				if (ERR[j] != 0) {
					for (i = 0; i < 8; i++) {
						w[j][i] = w[j][i] + LR * x[p][i] * ERR[j];
					}
				}
			}
		}
		error = error / jum;
		cout << l << "\t: " << error << endl;
	}
	//running
	for (i = 0; i < 7; i++) {
		cout << "X" << i + 1 << "\t: ";
		cin >> x[0][i];
	}
	for (j = 0; j < 10; j++) {
		O[j] = 0.0;
		for (i = 0; i < 8; i++) {
			O[j] = O[j] + x[0][i] * w[j][i];
		}
		if (O[j] > 0.0)
			out[j] = 1;
		else
			out[j] = 0;
		cout << O[j] << endl;
	}
	if ((out[0] == 1) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 0" << endl;
	if ((out[0] == 0) && (out[1] == 1) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 1" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 1) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 2" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		1) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 3" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 1) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 4" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 1) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 5" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 1) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 6" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 1)
		&& (out[8] == 0) && (out[9] == 0))
		cout << "Output = 7" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 1) && (out[9] == 0))
		cout << "Output = 8" << endl;
	if ((out[0] == 0) && (out[1] == 0) && (out[2] == 0) && (out[3] ==
		0) && (out[4] == 0) && (out[5] == 0) && (out[6] == 0) && (out[7] == 0)
		&& (out[8] == 0) && (out[9] == 1))
		cout << "Output = 9" << endl;
}
*/

//Multiperceptron
/*
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
//--------------------- random function -----------------------
float d_rand(void) {
	return ((float)(((rand() % 32767) / 32767.0 - 0.5) * 2.0));
}
//-------------------------- sigmoid ------------------------------
float sigmoid(float u) {
	return ((float)(1.0 / (1.0 + exp(-u))));
}
int main() {
	int i, j, k, p, l;
	float z, delta_o, delta_h[2], g1, f1[2];
	float y[3] = { 0.0,0.0,1.0 };
	int x[3][4] = { {0,0,1,1},
	{0,1,0,1},
	{1,1,1,1} };
	float t[4] = { 0,1,1,0 };
	float w[2][3], O[2], s[3], LR = 0.1f, init = 0.15f, error;
	//inisialisasi bobot
	for (j = 0; j < 2; j++) {
		for (i = 0; i < 3; i++) {
			w[j][i] = init * d_rand();
		}
	}
	for (j = 0; j < 3; j++) {
		s[j] = init * d_rand();
	}
	//training
	for (l = 0; l < 15000; l++) {
		error = 0.0;
		for (p = 0; p < 4; p++) {
			for (j = 0; j < 2; j++) {
				O[j] = 0.0;
				for (i = 0; i < 3; i++) {
					O[j] = O[j] + x[i][p] * w[j][i];
				}
				y[j] = sigmoid(O[j]);
			}
			O[0] = 0.0;
			for (i = 0; i < 3; i++) {
				O[0] = O[0] + y[i] * s[i];
			}
			z = sigmoid(O[0]);
			g1 = z * (1 - z);
			delta_o = (t[p] - z) * g1;
			for (j = 0; j < 2; j++) {
				f1[j] = y[j] * (1 - y[j]);
			}
			for (j = 0; j < 2; j++) {
				delta_h[j] = f1[j] * delta_o * s[j];
			}
			for (i = 0; i < 3; i++) {
				s[i] = s[i] + LR * delta_o * y[i];
			}
			for (j = 0; j < 2; j++) {
				for (i = 0; i < 3; i++) {
					w[j][i] = w[j][i] + LR * delta_h[j] * x[i][p];
				}
			}
			error = error + ((t[p] - z) * (t[p] - z)) / 2;
		}
		error = error / 4;
		printf("Iterasi: %d Error: %f\n", l, error);
		if (error < 0.01)break;
	}
	//running
	char ch;
	for (;;) {
		printf("Input X1:");
		scanf_s("%d", &x[0][0]);
		printf("Input X2:");
		scanf_s("%d", &x[1][0]);
		for (j = 0; j < 2; j++) {
			O[j] = 0.0;
			for (i = 0; i < 3; i++) {
				O[j] = O[j] + x[i][0] * w[j][i];
			}
			y[j] = sigmoid(O[j]);
		}
		O[0] = 0.0;
		for (i = 0; i < 3; i++) {
			O[0] = O[0] + y[i] * s[i];
		}
		z = sigmoid(O[0]);
		printf("z: %f\n", z);
		if (z < 0.5)
			printf("output:0\n");
		else
			printf("output:1\n");
		ch = _getch();
		if (ch == 'e')break;
	}
}
*/

//Backpropagation
/*
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


//--------------------- random function -----------------------
float  d_rand(void)
{
	return ((float)(((rand() % 32767) / 32767.0 - 0.5) * 2.0));
}
//-------------------------- sigmoid ------------------------------
float  sigmoid(float u)
{
	return ((float)(1.0 / (1.0 + exp(-u))));
}
void main()
{
	int i, j, p, l;
	float z, delta_o, delta_h[6], g1, f1[6];
	float y[6] = { 0.0,0.0,1.0,0.0,0.0,0.0 };
	float x[11][4] = { {1.00,1.00,0.67,1.00},
	   {1.00,0.67,0.67,1.00},
	   {1.00,0.67,0.33,1.00},
	   {1.00,0.33,0.33,1.00},
	   {0.67,1.00,0.67,1.00},
	   {0.67,0.67,0.67,1.00},
	   {0.67,0.67,0.33,1.00},
	   {0.67,0.33,0.33,1.00},
	   {0.33,1.00,0.67,1.00},
	   {0.33,0.67,0.33,1.00},
	   {0.33,0.33,0.67,1.00} };
	float t[11] = { 1.0,1.0,1.0,0.0,1.0,1.0,1.0,0.0,1.0,0.0,1.0 };
	float w[6][4], O[6], s[6], LR = 0.1f, init = 0.15f, error;
	FILE* f;
	f = fopen("error.txt", "w");
	//inisialisasi bobot
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 4; i++)
		{
			w[j][i] = init * d_rand();
		}
	}
	for (j = 0; j < 3; j++)
	{
		s[j] = init * d_rand();
	}
	//training
	for (l = 0; l < 5000; l++)
	{
		error = 0.0;
		for (p = 0; p < 11; p++)
		{
			for (j = 0; j < 2; j++)
			{
				O[j] = 0.0;
				for (i = 0; i < 4; i++)
				{
					O[j] = O[j] + x[p][i] * w[j][i];
				}
				y[j] = sigmoid(O[j]);
			}
			O[0] = 0.0;
			for (i = 0; i < 3; i++)
			{
				O[0] = O[0] + y[i] * s[i];
			}
			z = sigmoid(O[0]);
			g1 = z * (1 - z);
			delta_o = (t[p] - z) * g1;
			for (j = 0; j < 2; j++)
			{
				f1[j] = y[j] * (1 - y[j]);
			}
			for (j = 0; j < 2; j++)
			{
				delta_h[j] = f1[j] * delta_o * s[j];
			}
			for (i = 0; i < 3; i++)
			{
				s[i] = s[i] + LR * delta_o * y[i];
			}
			for (j = 0; j < 2; j++)
			{
				for (i = 0; i < 4; i++)
				{
					w[j][i] = w[j][i] + LR * delta_h[j] * x[p][i];
				}
			}
			error = error + ((t[p] - z) * (t[p] - z)) / 2;
		}
		error = error / 11;
		printf("Iterasi: %d Error: %f\n", l, error);
		fprintf(f, "%f\n", error);
		if (error < 0.00001)break;
	}
	fclose(f);
	//running
	int x1, x2, x3;
	printf("X1=");
	scanf_s("%d", &x1);
	if (x1 == 3)x[0][0] = 1;
	if (x1 == 2)x[0][0] = 0.67;
	if (x1 == 1)x[0][0] = 0.33;
	printf("X2=");
	scanf_s("%d", &x2);
	if (x2 == 3)x[0][1] = 1;
	if (x2 == 2)x[0][1] = 0.67;
	if (x2 == 1)x[0][1] = 0.33;
	printf("X3=");
	scanf_s("%d", &x3);
	if (x3 == 2)x[0][2] = 0.67;
	if (x3 == 1)x[0][2] = 0.33;

	//x[0][0] = 1;
	//x[0][1] = 0.67;
	//x[0][2] = 0.67;
	printf("IPK: %.2f\n", x[0][0]);
	printf("Psikologi: %.2f\n", x[0][1]);
	printf("Wawancara: %.2f\n", x[0][2]);
	for (j = 0; j < 2; j++)
	{
		O[j] = 0.0;
		for (i = 0; i < 4; i++)
		{
			O[j] = O[j] + x[0][i] * w[j][i];
		}
		y[j] = sigmoid(O[j]);
	}
	O[0] = 0.0;
	for (i = 0; i < 3; i++)
	{
		O[0] = O[0] + y[i] * s[i];
	}
	z = sigmoid(O[0]);
	printf("Output:%.2f\n", z);
	if (z < 0.5)
		printf("Keputusan: TIDAK LULUS\n");
	else
		printf("Keputusan: LULUS\n");
}
*/

//Kohonen
/*
#include "stdio.h"
#include <conio.h>
#include <math.h>
void main() {
	float w[2][4] = { {0.2,0.6,0.5,0.9}, {0.8,0.4,0.7,0.3} };
	int x[4][4] = { {1,1,0,0},
					{0,0,0,1},
					{1,0,0,0},
					{0,0,1,1} };
	float D[2];
	int i, j, k, l;
	float LR = 0.6;
	//training
	for (l = 0; l < 100; l++) {
		for (k = 0; k < 4; k++) {
			for (j = 0; j < 2; j++) {
				D[j] = 0.0;
				for (i = 0; i < 4; i++) {
					D[j] = D[j] + (w[j][i] - x[k][i]) * (w[j][i] - x[k][i]);
				}
			}
			if (D[0] < D[1]) {
				for (i = 0; i < 4; i++) {
					w[0][i] = w[0][i] + LR * (x[k][i] - w[0][i]);
				}
			}
			else {
				for (i = 0; i < 4; i++) {
					w[1][i] = w[1][i] + LR * (x[k][i] - w[1][i]);
				}
			}
		}
		LR = 0.5 * LR;
	}
	//mapping cluster 
	x[0][0] = 1; x[0][1] = 1; x[0][2] = 0; x[0][3] = 0;
	for (j = 0; j < 2; j++) {
		D[j] = 0.0;
		for (i = 0; i < 4; i++) {
			D[j] = D[j] + sqrt((w[j][i] - x[0][i]) * (w[j][i] - x[0][i]));
		}
		printf("D(%d) = %.2f\n", (j + 1), D[j]);
	}
	if (D[0] < D[1]) {
		printf("Cluster 1");
	}
	else {
		printf("Cluster 2");
	}
}
*/

/*
#include "stdio.h"
#include <conio.h>
#include <math.h>
void main() {
	float w[2][2] = { { 0.5, 0.5 },
	{ 0.5, 0.5 } };
	float x[6][2] = { { 0.10, 0.10 },
	{ 0.20, 0.20, },
	{ 0.30, 0.10, },
	{ 0.50, 0.30, },
	{ 0.40, 0.40, },
	{ 0.20, 0.40, } };
	float D[2];
	int i, j, k, l;
	float LR = 0.6;
	//training
	for (l = 0; l < 10; l++) {
		for (k = 0; k < 2; k++) {
			for (j = 0; j < 2; j++) {
				D[j] = 0.0;
				for (i = 0; i < 6; i++) {
					D[j] = D[j] + (w[j][i] - x[k][i]) * (w[j][i] - x[k][i]);
				}
			}
			if (D[0] < D[1]) {
				for (i = 0; i < 2; i++) {
					w[0][i] = w[0][i] + LR * (x[k][i] - w[0][i]);
				}
			}
			else {
				for (i = 0; i < 2; i++) {
					w[1][i] = w[1][i] + LR * (x[k][i] - w[1][i]);
				}
			}
		}
		LR = 0.5 * LR;
	}
	//mapping cluster 
	x[0][0] = 0.1; x[0][1] = 0.1;
	for (j = 0; j < 2; j++) {
		D[j] = 0.0;
		for (i = 0; i < 2; i++) {
			D[j] = D[j] + sqrt((w[j][i] - x[0][i]) * (w[j][i] - x[0][i]));
		}
		printf("D(%d) = %.2f\n", (j + 1), D[j]);
	}
	if (D[0] < D[1]) {
		printf("Cluster 1");
	}
	else {
		printf("Cluster 2");
	}
}
*/

//FUZZY
/*
#include <stdio.h>
#include <conio.h>

float MFx(float a, float b, float z) {
	float hasil_MFx;
	if ((z >= a) && (z < b))hasil_MFx = (b - z) / (b - a);
	if (z <= a) hasil_MFx = 1;
	if (z >= b) hasil_MFx = 0;
	return hasil_MFx;
}

float MFy(float a, float b, float z) {
	float hasil_MFy;
	if ((z >= a) && (z < b))hasil_MFy = (z - a) / (b - a);
	if (z <= a) hasil_MFy = 0;
	if (z >= b) hasil_MFy = 1;
	return hasil_MFy;
}

float Min(float a, float b) {
	float hasil_min;
	if (a < b)
		hasil_min = a;
	else
		hasil_min = b;
	return hasil_min;
}

int main()
{
	float u1x, u2x, u3x, u1y, u2y, u3y;
	float minR1, minR2, minR3, minR4;
	float proR1, proR2, proR3, proR4;
	//Fuzzyfication
	float permintaan = 4000;
	float persediaan = 300;
	printf("Persoalan:\n");
	printf("Permintaan:%.0f\n", permintaan);
	printf("Persediaan:%.0f\n", persediaan);
	printf("Berapa jumlah produksi?\n");

	u1x = MFx(1000, 5000, permintaan);//permintaan turun
	printf("Fungsi keanggotaan permintaan turun:%.2f\n", u1x);
	u1y = MFy(1000, 5000, permintaan);//permintaan naik
	printf("Fungsi keanggotaan permintaan naik:%.2f\n", u1y);

	u2x = MFx(100, 600, persediaan);//persediaan sedikit
	printf("Fungsi keanggotaan persediaan sedikit:%.2f\n", u2x);
	u2y = MFy(100, 600, persediaan);//persediaan banyak
	printf("Fungsi keanggotaan persediaan banyak:%.2f\n", u2y);

	//rule 1 : IF Permintaan TURUN And Persediaan BANYAK THEN Produksi Barang BERKURANG
	minR1 = Min(u1x, u2y);
	printf("Minimum Permintaan TURUN And Persediaan BANYAK:%.2f\n", minR1);
	proR1 = 7000 - minR1 * 5000;
	printf("Produksi berkurang:%.0f\n", proR1);
	//rule 2 : IF Permintaan TURUN And Persediaan SEDIKIT THEN Produksi Barang BERKURANG
	minR2 = Min(u1x, u2x);
	printf("Minimum Permintaan TURUN And Persediaan SEDIKIT:%.2f\n", minR2);
	proR2 = 7000 - minR2 * 5000;
	printf("Produksi berkurang:%.0f\n", proR2);
	//rule 3 : IF Permintaan NAIK And Persediaan BANYAK THEN Produksi Barang BERTAMBAH
	minR3 = Min(u1y, u2y);
	printf("Minimum Permintaan NAIK And Persediaan BANYAK:%.2f\n", minR3);
	proR3 = 2000 + minR3 * 5000;
	printf("Produksi bertambah:%.0f\n", proR3);
	//rule 4 : IF Permintaan NAIK And Persediaan SEDIKIT THEN Produksi Barang BERTAMBAH
	minR4 = Min(u1y, u2x);
	printf("Minimum Permintaan NAIK And Persediaan SEDIKIT:%.2f\n", minR4);
	proR4 = 2000 + minR4 * 5000;
	printf("Produksi bertambah:%.0f\n", proR4);
	//Defuzzyfikasi
	float pembilang = minR1 * proR1 + minR2 * proR2 + minR3 * proR3 + minR4 * proR4;
	float penyebut = minR1 + minR2 + minR3 + minR4;
	float hasil_COA = pembilang / penyebut;
	printf("Produksi:%.0f\n", hasil_COA);

	//getch();
	return 0;
}*/

//LQV
/*
#include "stdio.h"
#include <conio.h>
#include <math.h>
int main()
{
	int i, j, k, epoh = 0, maxIter = 10;
	float x[10][6] =
	{
	{1,0,0,0,1,0},
	{0,1,1,1,1,0},
	{0,0,1,0,0,1},
	{0,0,1,0,1,0},
	{0,1,0,0,0,1},
	{1,0,1,0,1,1},
	{0,0,1,1,0,0},
	{0,1,0,1,0,0},
	{1,0,0,1,0,1},
	{0,1,1,1,1,1}
	};
	int T[10] = { 1,2,1,1,1,1,2,2,2,2 };
	float w[2][6], jarak[2], alpha = 0.05f;
	//inisialisasi bobot
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	for (i = 0; i < 6; i++)
	{
		w[0][i] = x[0][i];
		w[1][i] = x[1][i];
	}
	//traning
	for (i = 0; i < 10; i++)
	{
		for (j = 2; j < 10; j++)
		{
			jarak[0] = 0.0;
			jarak[1] = 0.0;
			for (k = 0; k < 6; k++) {
				jarak[0] = jarak[0] + (x[j][k] - w[0][k]) *
					(x[j][k] -
						w[0][k]);
				jarak[1] = jarak[1] + (x[j][k] - w[1][k]) *
					(x[j][k] -
						w[1][k]);
			}
			jarak[0] = sqrt(jarak[0]);
			jarak[1] = sqrt(jarak[1]);
			printf("jarak[0]:%f\n", jarak[0]);
			printf("jarak[1]:%f\n", jarak[1]);
			if (jarak[0] <= jarak[1]) {
				printf("jarak[0]\n");
				if (T[j] == 1) {
					for (k = 0; k < 6; k++) {
						w[0][k] = w[0][k] + alpha * (x[j][k] -
							w[0][k]);
						printf("w[0][%d]:%f\n", k, w[0][k]);
					}
				}
				else {
					for (k = 0; k < 6; k++) {
						w[0][k] = w[0][k] - alpha * (x[j][k] -
							w[0][k]);
						printf("w[0][%d]:%f\n", k, w[0][k]);
					}
				}
			}
			else {
				printf("jarak[1]\n");
				if (T[j] == 2) {
					for (k = 0; k < 6; k++) {
						w[1][k] = w[1][k] + alpha * (x[j][k] -
							w[1][k]);
						printf("w[1][%d]:%f\n", k, w[1][k]);
					}
				}
				else {
					for (k = 0; k < 6; k++) {
						w[1][k] = w[1][k] - alpha * (x[j][k] -
							w[0][k]);
						printf("w[1][%d]:%f\n", k, w[1][k]);
					}
				}
			}
		}
		alpha = alpha - 0.1 * alpha;
		epoh++;
		printf("Epoh:%d\n", epoh);
	}
	//running
	x[0][0] = 0;
	x[0][1] = 1;
	x[0][2] = 0;
	x[0][3] = 1;
	x[0][4] = 1;
	x[0][5] = 0;
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	for (k = 0; k < 6; k++) {
		jarak[0] = jarak[0] + (x[0][k] - w[0][k]) * (x[0][k] - w[0][k]);
		jarak[1] = jarak[1] + (x[0][k] - w[1][k]) * (x[0][k] - w[1][k]);
	}
	jarak[0] = sqrt(jarak[0]);
	jarak[1] = sqrt(jarak[1]);
	printf("jarak[0]:%f\n", jarak[0]);
	printf("jarak[1]:%f\n", jarak[1]);
	if (jarak[0] <= jarak[1]) {
		printf("Kelas 1\n");
	}
	else {
		printf("Kelas 2\n");
	}
}
*/

/*
#include "stdio.h"
#include <conio.h>
#include <math.h>
int main()
{
	int i, j, k, epoh = 0;
	float x[15][63] =
	{
		//Inisialisasi
		{1,1,1,1,1,1,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,1,1,1,1,1,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1},
		{1,1,1,1,1,0,0, 1,0,0,0,0,1,0, 1,0,0,0,0,0,1,
		1,0,0,0,0,1,0, 1,1,1,1,1,0,0, 1,0,0,0,0,1,0,
		1,0,0,0,0,0,1, 1,0,0,0,0,1,0, 1,1,1,1,1,0,0},
		{1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,1,1,1,1,1,1, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1},
		//A
		{0,0,0,1,0,0,0, 0,0,1,0,1,0,0, 0,0,1,0,1,0,0,
		0,0,1,0,1,0,0, 0,1,1,1,1,1,0, 0,1,0,0,0,1,0,
		0,1,0,0,0,1,0, 1,1,0,0,0,1,1, 1,1,0,0,0,1,1},
		{0,0,0,1,0,0,0, 0,0,1,0,1,0,0, 0,0,1,0,1,0,0,
		0,1,0,0,0,1,0, 0,1,0,0,0,1,0, 1,1,1,1,1,1,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1},
		{0,0,0,1,0,0,0, 0,0,1,0,1,0,0, 0,1,0,0,0,1,0,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,1,1,1,1,1,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1},
		{0,0,0,1,0,0,0, 0,1,1,0,1,1,0, 0,1,0,0,0,1,0,
		0,1,0,0,0,1,0, 0,1,1,1,1,1,0, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1},
		//B
		{1,1,1,1,1,1,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,1,1,1,1,1,0, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,1,1,1,1,1,1},
		{1,1,1,1,1,1,0, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,1,0, 1,1,1,1,1,0,0,
		1,0,0,0,0,1,0, 1,0,0,0,0,0,1, 1,1,1,1,1,1,0},
		{0,1,1,1,1,1,0, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 0,1,1,1,1,1,0, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 0,1,1,1,1,1,0},
		{1,1,1,1,1,1,0, 1,0,0,0,0,0,1, 1,0,0,0,0,1,0,
		1,1,1,1,1,0,0, 1,0,0,0,0,1,0, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,1,1,1,1,1,0},
		//H
		{1,1,0,0,0,1,1, 1,1,0,0,0,1,1, 1,1,1,1,1,1,1,
		1,1,1,1,1,1,1, 1,1,0,0,0,1,1, 1,1,0,0,0,1,1,
		1,1,0,0,0,1,1, 1,1,0,0,0,1,1, 1,1,0,0,0,1,1},
		{1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1,
		1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,1,1,1,1,1,1,
		1,1,1,1,1,1,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1},
		{1,1,0,0,0,1,1, 0,1,0,0,0,1,0, 0,1,0,0,0,1,0,
		0,1,0,0,0,1,0, 0,1,1,1,1,1,0, 0,1,0,0,0,1,0,
		0,1,0,0,0,1,0, 0,1,0,0,0,1,0, 1,1,0,0,0,1,1},
		{1,1,1,0,1,1,1, 0,1,0,0,0,1,0, 0,1,0,0,0,1,0,
		0,1,0,0,0,1,0, 0,1,1,1,1,1,0, 0,1,0,0,0,1,0,
		0,1,0,0,0,1,0, 0,1,0,0,0,1,0, 1,1,1,0,1,1,1},
	};
	int T[15] = { 1,2,3 ,1,1,1,1 ,2,2,2,2, 3,3,3,3 };
	float w[3][63], jarak[3], alpha = 0.05f;
	//inisialisasi bobot
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	jarak[2] = 0.0;
	for (i = 0; i < 63; i++)
	{
		w[0][i] = x[0][i];
		w[1][i] = x[1][i];
		w[2][i] = x[2][i];
	}
	//traning
	for (i = 0; i < 15; i++)
	{
		for (j = 3; j < 15; j++)
		{
			jarak[0] = 0.0;
			jarak[1] = 0.0;
			jarak[2] = 0.0;
			for (k = 0; k < 63; k++) {
				jarak[0] = jarak[0] + (x[j][k] - w[0][k]) *
					(x[j][k] -
						w[0][k]);
				jarak[1] = jarak[1] + (x[j][k] - w[1][k]) *
					(x[j][k] -
						w[1][k]);
				jarak[2] = jarak[2] + (x[j][k] - w[2][k]) *
					(x[j][k] -
						w[2][k]);
			}
			jarak[0] = sqrt(jarak[0]);
			jarak[1] = sqrt(jarak[1]);
			jarak[2] = sqrt(jarak[2]);
			printf("jarak[0]:%f\n", jarak[0]);
			printf("jarak[1]:%f\n", jarak[1]);
			printf("jarak[2]:%f\n", jarak[2]);
			if ((jarak[0] <= jarak[1]) && (jarak[0] <=
				jarak[2])) {
				printf("jarak[0]\n");
				if (T[j] == 1) {
					for (k = 0; k < 63; k++) {
						w[0][k] = w[0][k] + alpha *
							(x[j][k] -
								w[0][k]);
						printf("w[0][%d]:%f\n", k,
							w[0][k]);
					}
				}
				else {
					for (k = 0; k < 63; k++) {
						w[0][k] = w[0][k] - alpha *
							(x[j][k] -
								w[0][k]);
						printf("w[0][%d]:%f\n", k,
							w[0][k]);
					}
				}
			}
			else if (jarak[1] <= jarak[2]) {
				printf("jarak[1]\n");
				if (T[j] == 2) {
					for (k = 0; k < 63; k++) {
						w[1][k] = w[1][k] + alpha *
							(x[j][k] -
								w[1][k]);
						printf("w[1][%d]:%f\n", k,
							w[1][k]);
					}
				}
				else {
					for (k = 0; k < 63; k++) {
						w[1][k] = w[1][k] - alpha *
							(x[j][k] -
								w[1][k]);
						printf("w[1][%d]:%f\n", k,
							w[1][k]);
					}
				}
			}
			else {
				printf("jarak[2]\n");
				if (T[j] == 3) {
					for (k = 0; k < 63; k++) {
						w[2][k] = w[2][k] + alpha *
							(x[j][k] -
								w[2][k]);
						printf("w[2][%d]:%f\n", k,
							w[2][k]);
					}
				}
				else {
					for (k = 0; k < 63; k++) {
						w[2][k] = w[2][k] - alpha *
							(x[j][k] -
								w[2][k]);
						printf("w[2][%d]:%f\n", k,
							w[2][k]);
					}
				}
			}
		}
		alpha = alpha - 0.1 * alpha;
		epoh++;
		printf("Epoh:%d\n", epoh);
	}
	//running
	int I[1][63] = { 0,0,0,1,0,0,0, 0,0,1,0,1,0,0, 0,1,0,0,0,1,0,
	0,1,0,0,0,1,0, 0,1,1,1,1,1,0, 0,1,1,1,1,1,0, 0,1,0,0,0,1,0,
	1,1,0,0,0,1,1, 1,1,0,0,0,1,1 };
	jarak[0] = 0.0;
	jarak[1] = 0.0;
	jarak[2] = 0.0;
	for (k = 0; k < 63; k++) {
		jarak[0] = jarak[0] + (I[0][k] - w[0][k]) * (I[0][k] -
			w[0][k]);
		jarak[1] = jarak[1] + (I[0][k] - w[1][k]) * (I[0][k] -
			w[1][k]);
		jarak[2] = jarak[2] + (I[0][k] - w[2][k]) * (I[0][k] -
			w[2][k]);
	}
	jarak[0] = sqrt(jarak[0]);
	jarak[1] = sqrt(jarak[1]);
	jarak[2] = sqrt(jarak[2]);
	printf("jarak[0]:%f\n", jarak[0]);
	printf("jarak[1]:%f\n", jarak[1]);
	printf("jarak[2]:%f\n", jarak[2]);
	if ((jarak[0] <= jarak[1]) && (jarak[0] <= jarak[2])) {
		printf("Kelas A\n");
	}
	else if (jarak[1] <= jarak[2]) {
		printf("Kelas B\n");
	}
	else {
		printf("Kelas H\n");
	}
}
*/

//Fuzzy 2
/*
#include <stdio.h>
#include <conio.h>
float MFx(float a, float b, float z) {
	float hasil_MFx;
	if ((z >= a) && (z < b))hasil_MFx = (b - z) / (b - a);
	if (z <= a) hasil_MFx = 1;
	if (z >= b) hasil_MFx = 0;
	return hasil_MFx;
}
float MFy(float a, float b, float z) {
	float hasil_MFy;
	if ((z >= a) && (z < b))hasil_MFy = (z - a) / (b - a);
	if (z <= a) hasil_MFy = 0;
	if (z >= b) hasil_MFy = 1;
	return hasil_MFy;
}
float Min(float a, float b) {
	float hasil_min;
	if (a < b)
		hasil_min = a;
	else
		hasil_min = b;
	return hasil_min;
}
int main()
{
	float u1x, u2x, u3x, u1y, u2y, u3y;
	float minR1, minR2, minR3, minR4;
	float proR1, proR2, proR3, proR4;
	//Fuzzyfication
	float permintaan = 4000;
	float persediaan = 300;
	printf("Persoalan:\n");
	printf("Permintaan:%.0f\n", permintaan);
	printf("Persediaan:%.0f\n", persediaan);
	printf("Berapa jumlah produksi?\n");
	u1x = MFx(1000, 5000, permintaan);//permintaan turun
	printf("Fungsi keanggotaan permintaan turun:%.2f\n", u1x);
	u1y = MFy(1000, 5000, permintaan);//permintaan naik
	printf("Fungsi keanggotaan permintaan naik:%.2f\n", u1y);
	u2x = MFx(100, 600, persediaan);//persediaan sedikit
	printf("Fungsi keanggotaan persediaan sedikit:%.2f\n", u2x);
	u2y = MFy(100, 600, persediaan);//persediaan banyak
	printf("Fungsi keanggotaan persediaan banyak:%.2f\n", u2y);

	//rule 1 : IF Permintaan TURUN And Persediaan BANYAK THEN Produksi Barang BERKURANG
	minR1 = Min(u1x, u2y);
	printf("Minimum Permintaan TURUN And Persediaan BANYAK:%.2f\n", minR1);
	proR1 = 7000 - minR1 * 5000;
	printf("Produksi berkurang:%.0f\n", proR1);

	//rule 2 : IF Permintaan TURUN And Persediaan SEDIKIT THEN Produksi Barang BERKURANG
	minR2 = Min(u1x, u2x);
	printf("Minimum Permintaan TURUN And Persediaan SEDIKIT:%.2f\n", minR2);
	proR2 = 7000 - minR2 * 5000;
	printf("Produksi berkurang:%.0f\n", proR2);

	//rule 3 : IF Permintaan NAIK And Persediaan BANYAK THEN Produksi Barang BERTAMBAH
	minR3 = Min(u1y, u2y);
	printf("Minimum Permintaan NAIK And Persediaan BANYAK:%.2f\n", minR3);
	proR3 = 2000 + minR3 * 5000;
	printf("Produksi bertambah:%.0f\n", proR3);

	//rule 4 : IF Permintaan NAIK And Persediaan SEDIKIT THEN Produksi Barang BERTAMBAH
	minR4 = Min(u1y, u2x);
	printf("Minimum Permintaan NAIK And Persediaan SEDIKIT:%.2f\n", minR4);
	proR4 = 2000 + minR4 * 5000;
	printf("Produksi bertambah:%.0f\n", proR4);

	//Defuzzyfikasi
	float pembilang = minR1 * proR1 + minR2 * proR2 + minR3 * proR3 + minR4 *proR4;
	float penyebut = minR1 + minR2 + minR3 + minR4;
	float hasil_COA = pembilang / penyebut;
	printf("Produksi:%.0f\n", hasil_COA);
}
*/

#include "stdio.h"
#include <conio.h>
#include <math.h>
float Jarak(float a, float b, float c, float z) {
	float hasil_jarak;
	if ((z >= a) && (z < b))hasil_jarak = float(z - a) / (b - a);
	if ((z >= b) && (z < c))hasil_jarak = float(c - z) / (c - b);
	if ((z < 2) || (z > 14)) hasil_jarak = 1.0;
	if ((z > c) || (z < a)) hasil_jarak = 0.0;
	return hasil_jarak;
}
float Kecepatan(float a, float b, float c, float z) {
	float hasil_kecepatan;
	if ((z >= a) && (z < b))hasil_kecepatan = (z - a) / (b - a);
	if ((z >= b) && (z < c))hasil_kecepatan = (c - z) / (c - b);
	if ((z < 20) || (z > 60)) hasil_kecepatan = 1;
	if ((z > c) || (z < a)) hasil_kecepatan = 0;
	return hasil_kecepatan;
}
float Min(float a, float b) {
	float hasil_min;
	if (a < b)
		hasil_min = a;
	else
		hasil_min = b;
	return hasil_min;
}
void main() {
	float u1x, u2x, u3x, u4x, u1y, u2y, u3y;
	float min1, min2, min3, min4, min5, min6, min7, min8, min9, min10, min11,min12;
	float rem1, rem2, rem3, rem4, rem5, rem6, rem7, rem8, rem9, rem10, rem11,rem12;

	//Fuzzyfication
	printf("Persoalan:\n");
	float jarak = 16;
	printf("Jarak:%.2f\n", jarak);
	float kec = 10;
	printf("Kecepatan:%.2f\n", kec);
	printf("Berapa sudut rem?");

	//fuzzyfication
	u1x = Jarak(0, 2, 6, jarak);
	printf("Fungsi keanggotaan jarak short:%.2f\n", u1x);
	u2x = Jarak(2, 6, 10, jarak);
	printf("Fungsi keanggotaan jarak medium:%.2f\n", u2x);
	u3x = Jarak(6, 10, 14, jarak);
	printf("Fungsi keanggotaan jarak long:%.2f\n", u3x);
	u4x = Jarak(10, 14, 100, jarak);
	printf("Fungsi keanggotaan jarak very long:%.2f\n", u4x);
	u1y = Kecepatan(0, 20, 40, kec);
	printf("Fungsi keanggotaan kecepatan low:%.2f\n", u1y);
	u2y = Kecepatan(20, 40, 60, kec);
	printf("Fungsi keanggotaan kecepatan medium:%.2f\n", u2y);
	u3y = Kecepatan(40, 60, 100, kec);
	printf("Fungsi keanggotaan kecepatan high:%.2f\n", u3y);

	//Rule base
	//rule 1 :
	min1 = Min(u1x, u1y);
	printf("Minimum jarak short And kecepatan low:%.2f\n", min1);
	rem1 = 50;
	printf("rem moderate:%.2f\n", rem1);

	//rule 2 :
	min2 = Min(u1x, u2y);
	printf("Minimum jarak short And kecepatan medium:%.2f\n", min2);
	rem2 = 100;
	printf("rem hard:%.2f\n", rem2);

	//rule 3 :
	min3 = Min(u1x, u3y);
	printf("Minimum jarak short And kecepatan high:%.2f\n", min3);
	rem3 = 100;
	printf("rem hard:%.2f\n", rem3);

	//rule 4 :
	min4 = Min(u2x, u1y);
	printf("Minimum jarak medium And kecepatan low:%.2f\n", min4);
	rem4 = 25;
	printf("rem soft:%.2f\n", rem4);

	//rule 5 :
	min5 = Min(u2x, u2y);
	printf("Minimum jarak medium And kecepatan medium:%.2f\n", min5);
	rem5 = 50;
	printf("rem moderate:%.2f\n", rem5);

	//rule 6 :
	min6 = Min(u2x, u3y);
	printf("Minimum jarak medium And kecepatan high:%.2f\n", min6);
	rem6 = 100;
	printf("rem hard:%.2f\n", rem6);

	//rule 7 :
	min7 = Min(u3x, u1y);
	printf("Minimum jarak long And kecepatan low:%.2f\n", min7);
	rem7 = 0;
	printf("rem no break:%.2f\n", rem7);

	//rule 8 :
	min8 = Min(u3x, u2y);
	printf("Minimum jarak long And kecepatan medium:%.2f\n", min8);
	rem8 = 25;
	printf("rem soft:%.2f\n", rem8);

	//rule 9 :
	min9 = Min(u3x, u3y);
	printf("Minimum jarak long And kecepatan high:%.2f\n", min9);
	rem9 = 50;
	printf("rem moderate:%.2f\n", rem9);

	//rule 10 :
	min10 = Min(u4x, u1y);
	printf("Minimum jarak very long And kecepatan low:%.2f\n", min10);
	rem10 = 0;
	printf("rem no break:%.2f\n", rem10);

	//rule 6 :
	min6 = Min(u2x, u3y);
	printf("Minimum jarak medium And kecepatan high:%.2f\n", min6);
	rem6 = 100;
	printf("rem hard:%.2f\n", rem6);

	//rule 7 :
	min7 = Min(u3x, u1y);
	printf("Minimum jarak long And kecepatan low:%.2f\n", min7);
	rem7 = 0;
	printf("rem no break:%.2f\n", rem7);

	//rule 8 :
	min8 = Min(u3x, u2y);
	printf("Minimum jarak long And kecepatan medium:%.2f\n", min8);
	rem8 = 25;
	printf("rem soft:%.2f\n", rem8);

	//rule 9 :
	min9 = Min(u3x, u3y);
	printf("Minimum jarak long And kecepatan high:%.2f\n", min9);
	rem9 = 50;
	printf("rem moderate:%.2f\n", rem9);

	//rule 10 :
	min10 = Min(u4x, u1y);
	printf("Minimum jarak very long And kecepatan low:%.2f\n", min10);
	rem10 = 0;
	printf("rem no break:%.2f\n", rem10);

	//rule 11 :
	min11 = Min(u4x, u2y);
	printf("Minimum jarak very long And kecepatan medium:%.2f\n", min11);
	rem11 = 0;
	printf("rem no break:%.2f\n", rem11);

	//rule 12 :
	min12 = Min(u4x, u3y);
	printf("Minimum jarak very long And kecepatan high:%.2f\n", min12);
	rem12 = 25;
	printf("rem soft:%.2f\n", rem12);

	//defuzzyfication
	float pembilang = min1 * rem1 + min2 * rem2 + min3 * rem3 + min4 * rem4 + min5 * rem5 + min6 * rem6 + min7 * rem7 + min8 * rem8 + min9 * rem9 + min10 * rem10 + min11 * rem11 + min12 * rem12;
	float penyebut = min1 + min2 + min3 + min4 + min5 + min6 + min7 + min8 + min9 + min10 + min11 + min12;
	float hasil_COA = pembilang / penyebut;
	printf("Sudut rem:");
	printf("%.2f\n", hasil_COA);
}