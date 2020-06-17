#include <stdio.h>
#include <conio.h>

struct Date {
	int year;
	int month;
	int day;
};

typedef struct Timer {
	long int mil;
	long int minute;
	long int hour;
	long int day;
	long int year;
} Timer;

float getAge(int year);

//Main Program
int main(){
	//Declear variable
	int year;
	float age;
	char *name;

	printf("Enter your name : ");
	scanf("%[^\n]s",name);
	printf("Hi! %s. ",name);
	printf("Please fill date of birth.\n");

	
	printf("Year : ");
	scanf("%d",&year);
	age = getAge(year);
	printf("%.2f", age);

	return 0;
	
}

float getAge(int year){
	
	//Declearation variable
	float age;
	struct Date curTime;
	Timer time;
	long long int millisec;
	
	//Configuration time
	time.mil = 1000;
	time.minute = 60;
	time.hour = 60;
	time.day = 24;
	time.year = 365;
	
	/*Convert year to millisecond*/
	millisec = time.mil * time.minute * time.hour * time.day * time.year;
	
	//Calculated age
	age = (2020 * millisec) - (year * millisec);
	age = age / millisec;
	
	return age;
}
