//Created by Clinton Elliott
#include <stdio.h>
#include <math.h>

void calcTime(double*, int*, int*);
void carDiff(double*, double*, double*);

int main(void) 
{
	int horsePower1 = 0;
	int horsePower2 = 0;
	int carWeight1 = 0;
	int carWeight2 = 0;
	int carSelect1 = 0;
	int carSelect2 = 0;
	int carRate = 0;
	int looper1 = 1;
	int looper2 = 1;
	int looper3 = 0;
	double expectedTime1 = 0.000;
	double expectedTime2 = 0.000;
	double carDifference = 0.000;
	double estTime = 0.000;
	double wonTime = 0.000;
	
	int hpArray[17] = {1200, 887, 900, 650, 305, 545, 740, 1360, 192, 140, 217, 165, 268, 425, 145, 355, 245};
	
	int lbsArray[17] = {4044, 3602, 2767, 3524, 3386, 3827, 3278, 2998, 3165, 2600, 2850, 3290, 3653, 3530, 3302, 3262, 3600};
	
	printf("------------------------\n");
	printf(" _____                _ \n");
	printf("|  __ |              | |\n");
	printf("| |__) |__ _  ___ ___| |\n");
	printf("|  _  |/ _` |/ __/ _ | |\n");
	printf("| | | | (_| | (_|  __/_|\n");
	printf("|_| |_||__,_||___|___|_|\n");
	printf("------------------------\n");               
	
	printf("\nThis program will let you quarter mile race two different cars.\n");
	printf("\nSelect the first car you want:\n\n");
	printf("Press:\n");
	printf("|1| 2014 Bugatti Veyron.\n");
	printf("|2| 2014 Porsche 918.\n");
	printf("|3| 2014 Ferrari LaFerrari.\n");
	printf("|4| 2015 Chevy Corvette C7 Z06.\n");
	printf("|5| 2014 Subaru WRX STi.\n");
	printf("|6| 2014 Nissan GT-R.\n");
	printf("|7| 2014 Lamborghini Veneno.\n");
	printf("|8| 2015 Koenigsegg One:1.\n");
	printf("|9| 1994 Nissan Maxima SE.\n");
	printf("|10| 1992 Nissan Sentra SE-R.\n");
	printf("|11| 1986 Porsche 944 Turbo.\n");
	printf("|12| 2004 Subaru Legacy Sedan.\n");
	printf("|13| 2003 Volvo S80.\n");
	printf("|14| 2015 BMW M4.\n");
	printf("|15| 1999 Mercury Sable.\n");
	printf("|16| 2014 Mercedes CLA45 AMG.\n");
	printf("\nOR Press 0 for custom car.\n\n");
	printf("I want option: ");
		
	while (looper1 == 1)
	{
		scanf("%d", &carSelect1);	
		if (carSelect1 >= 0 && carSelect1 <= 16) //9
		{
			printf("\n");
			switch (carSelect1)
			{
				case 1:
					printf("You have selected the Bugatti Veyron.\n");
					printf("\n-------------------------------------\n");
					horsePower1 = hpArray [0];
					carWeight1 = lbsArray [0];
					looper1 = 0;
					break;
				case 2:
					printf("You have selected the Porsche 918.\n");
					printf("\n----------------------------------\n");
					horsePower1 = hpArray [1];
					carWeight1 = lbsArray [1];
					looper1 = 0;
					break;
				case 3:
					printf("You have selected the Ferrari LaFerrari.\n");
					printf("\n----------------------------------------\n");
					horsePower1 = hpArray [2];
					carWeight1 = lbsArray [2];
					looper1 = 0;
					break;
				case 4:
					printf("You have selected the Corvette C7.\n");
					printf("\n----------------------------------\n");
					horsePower1 = hpArray [3];
					carWeight1 = lbsArray [3];
					looper1 = 0;
					break;
				case 5:
					printf("You have selected the Subaru WRX STi.\n");
					printf("\n-------------------------------------\n");
					horsePower1 = hpArray [4];
					carWeight1 = lbsArray [4];
					looper1 = 0;
					break;
				case 6:
					printf("You have selected the Nissan GT-R.\n");
					printf("\n----------------------------------\n");
					horsePower1 = hpArray [5];
					carWeight1 = lbsArray [5];
					looper1 = 0;
					break;
				case 7:
					printf("You have selected the Lamborghini Veneno.\n");
					printf("\n-----------------------------------------\n");
					horsePower1 = hpArray [6];
					carWeight1 = lbsArray [6];
					looper1 = 0;
					break;
				case 8:
					printf("You have selected the Koenigsegg One:1.\n");
					printf("\n---------------------------------------\n");
					horsePower1 = hpArray [7];
					carWeight1 = lbsArray [7];
					looper1 = 0;
					break;
				case 9:
					printf("You have selected the 1994 Nissan Maxima SE.\n");
					printf("\n--------------------------------------------\n");
					horsePower1 = hpArray [8];
					carWeight1 = lbsArray [8];
					looper1 = 0;
					break;
				case 10:
					printf("You have selected the 1992 Nissan Sentra SE-R.\n");
					printf("\n----------------------------------------------\n");
					horsePower1 = hpArray [9];
					carWeight1 = lbsArray [9];
					looper1 = 0;
					break;
				case 11:
					printf("You have selected the 1986 Porsche 944 Turbo. Nice choice.\n");
					printf("\n----------------------------------------------------------\n");
					horsePower1 = hpArray [10];
					carWeight1 = lbsArray [10];
					looper1 = 0;
					break;
				case 12:
					printf("You have selected the 2004 Subaru Legacy Sedan. Nice choice.\n");
					printf("\n------------------------------------------------------------\n");
					horsePower1 = hpArray [11];
					carWeight1 = lbsArray [11];
					looper1 = 0;
					break;
				case 13:
					printf("You have selected the 2003 Volvo S80. Nice choice.\n");
					printf("\n--------------------------------------------------\n");
					horsePower1 = hpArray [12];
					carWeight1 = lbsArray [12];
					looper1 = 0;
					break;
				case 14:
					printf("You have selected the BMW M4.\n");
					printf("\n-----------------------------\n");
					horsePower1 = hpArray [13];
					carWeight1 = lbsArray [13];
					looper1 = 0;
					break;
				case 15:
					printf("You have selected the 1999 Mercury Sable GS. Bad choice.\n");
					printf("\n--------------------------------------------------------\n");
					horsePower1 = hpArray [14];
					carWeight1 = lbsArray [14];
					looper1 = 0;
					break;
				case 16:
					printf("You have selected the Mercedes CLA45 AMG.\n");
					printf("\n-----------------------------------------\n");
					horsePower1 = hpArray [15];
					carWeight1 = lbsArray [15];
					looper1 = 0;
					break;
				case 0:
					while (looper2 == 1)
					{
						printf("\nYou have decided to enter in a custom car.\n\n");
						printf("------------------------------------------\n\n");
						printf("Please enter the horsepower of the car:\n");
						scanf("%d", &horsePower1);
						if (horsePower1 > 10000)
						{
							printf("\nThat's too much horsepower, be real!\n");
						}
						else
						{
							printf("\nNow enter the weight of the car in lbs:\n");
							scanf("%d", &carWeight1);
							looper2 = 0;
							looper1 = 0;
							if (carWeight1 > 8000)
							{
								printf("\nThat car weights too much. Don't even bother racing it!\n");
								looper2 = 1;
								looper1 = 1;
							}
							else if (carWeight1 < 100)
							{
								printf("\nThat doesn't weigh enough. I don't think it is a real car.\n\n");
								looper2 = 1;
								looper1 = 1;
							}
						}
					}
					printf("\n---------------------------------------\n");
					break;
				default:
					printf("\nSorry, that option isn't available. Enter a value between 0 and 8:\n");
					break;
			}
		}
		else if (carSelect1 == 1987)
		{
			printf("\nYou found the secret function! You have unlocked the Buick GNX.\n");
			printf("\n---------------------------------------------------------------\n");
			horsePower1 = hpArray [16];
			carWeight1 = lbsArray [16];
			looper1 = 0;
		}
	}
	sleep(1);
	//FIXME: add code to omit first choice
	printf("\nSelect the second car you want:\n\n");
	printf("Press 100 to be reminded of car options.\n\n"); //FIXME: make a char so they can type options
	printf("I want option: ");
	looper1 = 1; //resets looper1 from first loop	
	while (looper1 == 1)
	{
		scanf("%d", &carSelect2);
		if (carSelect2 == 100)
		{
			printf("\nHere are the car options again:\n\n");
			printf("*\n");
			printf("REMINDER: You picked ");
			switch (carSelect1)
			{
				case 1:
					printf("the Bugatti Veyron");
					break;
				case 2:
					printf("the Porsche 918");
					break;
				case 3:
					printf("the Ferrari LaFerrari");
					break;
				case 4:
					printf("the Corvette C7");
					break;
				case 5:
					printf("the Subaru WRX STi");
					break;
				case 6:
					printf("the Nissan GT-R");
					break;
				case 7:
					printf("the Lamborghini Veneno");
					break;
				case 8:
					printf("the Koenigsegg One:1");
					break;
				case 9:
					printf("the 1994 Nissan Maxima SE");
					break;
				case 10:
					printf("the 1992 Nissan Sentra SE-R");
					break;
				case 11:
					printf("the 1986 Porsche 944 Turbo");
					break;
				case 12:
					printf("the 2004 Subaru Legacy Sedan");
					break;
				case 13:
					printf("the 2003 Volvo S80");
					break;
				case 14:
					printf("the BMW M4");
					break;
				case 15:
					printf("the 1999 Mercury Sable");
					break;
				case 16:
					printf("the Mercedes CLA45 AMG");
					break;
				case 1987:
					printf("the Buick Grand National");
					break;
				case 0:
					printf("a custom car");
					break;
			}
			printf(" for your previous car.\n*\n\n");
			sleep(1);
			printf("Press:\n");
			printf("|1| 2014 Bugatti Veyron.\n");
			printf("|2| 2014 Porsche 918.\n");
			printf("|3| 2014 Ferrari LaFerrari.\n");
			printf("|4| 2015 Chevy Corvette C7 Z06.\n");
			printf("|5| 2014 Subaru WRX STi.\n");
			printf("|6| 2014 Nissan GT-R.\n");
			printf("|7| 2014 Lamborghini Veneno.\n");
			printf("|8| 2015 Koenigsegg One:1.\n");
			printf("|9| 1994 Nissan Maxima SE.\n");
			printf("|10| 1992 Nissan Sentra SE-R.\n");
			printf("|11| 1986 Porsche 944 Turbo.\n");
			printf("|12| 2004 Subaru Legacy Sedan.\n");
			printf("|13| 2003 Volvo S80.\n");
			printf("|14| 2015 BMW M4.\n");
			printf("|15| 1999 Mercury Sable.\n");
			printf("|16| 2014 Mercedes CLA45 AMG.\n");
			printf("\nOR Press 0 for custom car.\n\n");
			printf("I want option: ");
		}
		else
		{
			if (carSelect2 >= 0 && carSelect2 <= 16)
			{
				printf("\n");
				switch (carSelect2)
				{
					case 1:
						printf("You have selected the Bugatti Veyron for your second car.\n");
						printf("\n---------------------------------------------------------\n");
						horsePower2 = hpArray [0];
						carWeight2 = lbsArray [0];
						looper1 = 0;
						break;
					case 2:
						printf("You have selected the Porsche 918 for your second car.\n");
						printf("\n------------------------------------------------------\n");
						horsePower2 = hpArray [1];
						carWeight2 = lbsArray [1];
						looper1 = 0;
						break;
					case 3:
						printf("You have selected the Ferrari LaFerrari for your second car.\n");
						printf("\n------------------------------------------------------------\n");
						horsePower2 = hpArray [2];
						carWeight2 = lbsArray [2];
						looper1 = 0;
						break;
					case 4:
						printf("You have selected the Corvette C7 for your second car.\n");
						printf("\n------------------------------------------------------\n");
						horsePower2 = hpArray [3];
						carWeight2 = lbsArray [3];
						looper1 = 0;
						break;
					case 5:
						printf("You have selected the Subaru WRX STi for your second car.\n");
						printf("\n---------------------------------------------------------\n");
						horsePower2 = hpArray [4];
						carWeight2 = lbsArray [4];
						looper1 = 0;
						break;
					case 6:
						printf("You have selected the Nissan GT-R for your second car.\n");
						printf("\n------------------------------------------------------\n");
						horsePower2 = hpArray [5];
						carWeight2 = lbsArray [5];
						looper1 = 0;
						break;
					case 7:
						printf("You have selected the Lamborghini Veneno for your second car.\n");
						printf("\n-------------------------------------------------------------\n");
						horsePower2 = hpArray [6];
						carWeight2 = lbsArray [6];
						looper1 = 0;
						break;
					case 8:
						printf("You have selected the Koenigsegg One:1 for your second car.\n");
						printf("\n-----------------------------------------------------------\n");
						horsePower2 = hpArray [7];
						carWeight2 = lbsArray [7];
						looper1 = 0;
						break;
					case 9:
						printf("You have selected the 1994 Nissan Maxima SE for your second car.\n");
						printf("\n----------------------------------------------------------------\n");
						horsePower2 = hpArray [8];
						carWeight2 = lbsArray [8];
						looper1 = 0;
						break;
					case 10:
						printf("You have selected the 1994 Nissan Maxima SE for your second car.\n");
						printf("\n------------------------------------------------------------------\n");
						horsePower2 = hpArray [9];
						carWeight2 = lbsArray [9];
						looper1 = 0;
						break;
					case 11:
						printf("You have selected the 1986 Porsche 944 Turbo for your second car.\n");
						printf("\n-----------------------------------------------------------------\n");
						horsePower2 = hpArray [10];
						carWeight2 = lbsArray [10];
						looper1 = 0;
						break;
					case 12:
						printf("You have selected the 2004 Subaru Legacy Sedan for your second car.\n");
						printf("\n-------------------------------------------------------------------\n");
						horsePower2 = hpArray [11];
						carWeight2 = lbsArray [11];
						looper1 = 0;
						break;
					case 13:
						printf("You have selected the 2003 Volvo S80 for your second car.\n");
						printf("\n---------------------------------------------------------\n");
						horsePower2 = hpArray [12];
						carWeight2 = lbsArray [12];
						looper1 = 0;
						break;
					case 14:
						printf("You have selected the BMW M4 for your second car.\n");
						printf("\n-------------------------------------------------\n");
						horsePower2 = hpArray [13];
						carWeight2 = lbsArray [13];
						looper1 = 0;
						break;
					case 15:
						printf("You have selected the 1999 Mercury Sable GS for your second car.\n");
						printf("\n----------------------------------------------------------------\n");
						horsePower2 = hpArray [14];
						carWeight2 = lbsArray [14];
						looper1 = 0;
						break;
					case 16:
						printf("You have selected the Mercedes CLA45 AMG for your second car.\n");
						printf("\n-----------------------------------------------------------------------------------\n");
						horsePower2 = hpArray [15];
						carWeight2 = lbsArray [15];
						looper1 = 0;
						break;
					case 0:
						looper2 = 1; //resets looper2
						while (looper2 == 1)
						{
							printf("\nYou have decided to enter in a custom car.\n\n");
							printf("------------------------------------------\n\n");
							printf("Please enter the horsepower of the car:\n");
							scanf("%d", &horsePower2);
							if (horsePower2 > 10000)
							{
								printf("\nThat's too much horsepower, be real!\n");
							}
							else
							{
								printf("\nNow enter the weight of the car in lbs:\n");
								scanf("%d", &carWeight2);
								looper2 = 0;
								looper1 = 0;
								if (carWeight2 > 8000)
								{
									printf("\nThat car weights too much. Don't even bother racing it!\n");
									looper2 = 1;
									looper1 = 1;
								}
								else if (carWeight2 < 100)
								{
									printf("\nThat doesn't weigh enough. I don't think it is a real car.\n\n");
									looper2 = 1;
									looper1 = 1;
								}
							}
						}
						printf("\n---------------------------------------\n");
						break;
					default:
						printf("\nSorry, that option isn't available. Enter a value between 0 and 8:\n");
						break;
				}
			}
			else if (carSelect2 == 1987)
			{
			printf("\nYou found the secret function! You have unlocked the Buick GNX for your second car.\n");
						printf("\n-----------------------------------------------------------------------------------\n");
						horsePower2 = hpArray [16];
						carWeight2 = lbsArray [16];
						looper1 = 0;
			}
		}
	}
	sleep(1);
	printf("\nThe result of the race is:\n\n"); //add animation?
	calcTime(&expectedTime1, &horsePower1, &carWeight1); //calculates estimated time for car 1
	calcTime(&expectedTime2, &horsePower2, &carWeight2); //calculates estimated time for car 2
	carDiff(&carDifference, &expectedTime1, &expectedTime2);
	wonTime = fabs(carDifference);
	/*testing:
	printf("*REMOVE AFTER TESTING*\n");
	printf("Car 1 expected time:%lf. Car 2 expected time:%lf.\n", expectedTime1, expectedTime2);
	printf("Car 1 weight: %d. Car 2 weight: %d.\n", carWeight1, carWeight2);
	printf("Car 1 horsepower: %d. Car 2 horsepower: %d.\n", horsePower1, horsePower2);
	printf("Difference between cars = %lf\n", wonTime);
	printf("*REMOVE AFTER TESTING*\n\n");
	*/
	sleep(2);
	if (carDifference < 0.000)
	{
		switch (carSelect1)
		{
			case 1:
			printf("The Bugatti Veyron ");
			break;
			case 2:
			printf("The Porsche 918 ");
			break;
			case 3:
			printf("The Ferrari LaFerrari ");
			break;
			case 4:
			printf("The Corvette C7 Z06 ");
			break;
			case 5:
			printf("The Subaru WRX STi ");
			break;
			case 6:
			printf("The Nissan GT-R ");
			break;
			case 7:
			printf("The Lamborghini Veneno ");
			break;
			case 8:
			printf("The Koenigsegg One:1 ");
			break;
			case 9:
			printf("The Nissan Maxima SE ");
			break;
			case 10:
			printf("The Nissan Sentra SE-R ");
			break;
			case 11:
			printf("The Porsche 944 Turbo ");
			break;
			case 12:
			printf("The Subaru Legacy ");
			break;
			case 13:
			printf("The Volvo S80 ");
			break;
			case 14:
			printf("The BMW M4 ");
			break;
			case 15:
			printf("The Mercury Sable ");
			break;
			case 16:
			printf("The Mercedes CLA45 AMG ");
			break;
			case 1987:
			printf("The Buick Grand National ");
			break;
			case 0:
			printf("Custom car 1 ");
			break;
		}
		printf("is the winner!\n");
		printf("\nIt won by %3.2lf seconds.", wonTime);
	}
	else if (carDifference > 0.000)
	{
		switch (carSelect2)
		{
			case 1:
			printf("The Bugatti Veyron ");
			break;
			case 2:
			printf("The Porsche 918 ");
			break;
			case 3:
			printf("The Ferrari LaFerrari ");
			break;
			case 4:
			printf("The Corvette C7 Z06 ");
			break;
			case 5:
			printf("The Subaru WRX STi ");
			break;
			case 6:
			printf("The Nissan GT-R ");
			break;
			case 7:
			printf("The Lamborghini Veneno ");
			break;
			case 8:
			printf("The Koenigsegg One:1 ");
			break;
			case 9:
			printf("The Nissan Maxima SE ");
			break;
			case 10:
			printf("The Nissan Sentra SE-R ");
			break;
			case 11:
			printf("The Porsche 944 Turbo ");
			break;
			case 12:
			printf("The Subaru Legacy ");
			break;
			case 13:
			printf("The Volvo S80 ");
			break;
			case 14:
			printf("The BMW M4 ");
			break;
			case 15:
			printf("The Mercury Sable ");
			break;
			case 16:
			printf("The Mercedes CLA45 AMG ");
			break;
			case 1987:
			printf("The Buick Grand National ");
			break;
			case 0:
			printf("Custom car 2 ");
			break;
		}
		printf("is the winner!\n");
		printf("\nIt won by %3.2lf seconds.", wonTime);
	}
	else 
	{
		printf("The cars tied!");
	}
	printf("\n");
	
return 0;
}

void calcTime(double *eT, int *hP, int *cW)
{
	*eT = (6.0 * cbrt(*cW / *hP)); //6.269
}

void carDiff(double *cD, double *eT1, double *eT2)
{
	*cD = (*eT1 - *eT2);
}