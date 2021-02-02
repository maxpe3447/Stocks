#pragma once

#include <cmath>
#include <ctime>
#include <iostream>

#define TASK_1 1
#define TASK_2 2
#define SIZE 12//размерность массивов

	class Fizika
	{
	public:
		double RES[SIZE];//массив с пезультатами 
		float lenght[SIZE]{ 0.0, 0.1, 0.15, 0.2, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6 };//длины тубки

		Fizika(short task, double N, double Ro_p, double Ro_m, short d, short D = NULL) 
			:task{ task }, N{ N }, Ro_p{ Ro_p }, Ro_m{ Ro_m }, d{ static_cast<float>(d) }, D{ static_cast<float>(D) } {
			std::srand(time(NULL));
			calc_result();
		}
		
	private:
		void calc_result()
		 {
			if(task == TASK_1){//для первого задания 
				for (int i = 0; i < SIZE; i++) {
					RES[i] = 18 * N * pow(10, -3) * lenght[i] / (pow(d * pow(10, -3), 2) * 9.81 * (Ro_m - Ro_p));
					if (i != 0) {
						float error = (std::rand() % 5); //погрешность
						error /= 1000;
						//std::cout << error<<"\n";
						RES[i] += error;
					}
				}
			}
			else if (task == TASK_2) {//для второго задания
				for (int i = 0; i < SIZE; i++) {
					RES[i] = 18 * N * pow(10, -3) * lenght[i] * (1 + 2.4 * d / D) / (pow(d * pow(10, -3), 2) * 9.81 * (Ro_m - Ro_p));
					if (i != 0) {
						float error = (std::rand() % 5);//погрешность 
						error /= 1000;
						RES[i] += error;
					}
				}
			}
		}
		short task;
		float D, d;
		
		double N{}, Ro_p{}, Ro_m{};
	};
