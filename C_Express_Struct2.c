#include<stdio.h>
//#define _USE_MATH_DEFINES
//#include<math.h>
int person =0;


struct complex {	//Q 04
	double real;
	double img;
};
struct complex complex_Add(struct complex A, struct complex B) {		// Q 04
	struct complex SUM;
	SUM.real = A.real + B.real;
	SUM.img = A.img + B.img;

	return SUM;
}

struct complex second_complex_Add(struct complex* A, struct complex* B) {	//Q 04
	struct complex SUM;
	SUM.real = A->real + B->real;
	SUM.img = A->img + B->img;

	return SUM;
}
//////////////////////////////////////////////////////////////////////////////////////
struct point {	//Q 05, 08
	int x, y;
};


void quadrant(struct point* p1) {		//Q 05, 07
	if (p1->x > 0)
		if (p1->y > 0)
			printf("1사분면 위의 점");
		else
			printf("4사분면 위의 점");
	else
		if (p1->y > 0)
			printf("2사분면 위의 점");
		else
			printf("3사분면 위의 점");
}


int equal(struct point* p1, struct point* p2) {			//Q 05
	if ((p1->x == p2->x) && (p1->y == p2->y))
		return 1;
	else
		return 0;
}
struct circle {				// Q 08
	struct point center;
	double radius;
};

double area(struct circle* c) {				//Q 08
	return (c->radius) * (c->radius) * 3.14;
}
double perimeter(struct circle* c) {
	return (c->radius * 2) * 3.14;
}

///////////////////////////////////////////////////////////////////////////////////////

struct employee {	//Q 10
	int num;
	char name[10];
	char phone[12];
	int age;
};
//////////////////////////////////////////////////////////////////////////////////////


struct Inform {		//Q 11
	char name[10];
	char mobile[10];
	char home[10];
};

void Save_Inform(struct Inform* a) {		//Q 11

	
	
	printf("enter the number of person : ");
	scanf("%d", &person);
	for (int i = 0; i < person; i++) {
		printf("Enter the name : ");
		scanf(" %s", &((a + i)->name));
		printf("Enter the home num : ");
		scanf(" %s", &((a + i)->home));
		printf("Enter the Mobile : ");
		scanf(" %s", &((a + i)->mobile));
}

}
void Finder_Inform(struct Inform* a) {		//Q 11
	printf("Enter the name to Search : ");
	char Wanted[10];
	scanf("%s", &Wanted);
	int Factor=0;
	for (int i = 0; i < person; i++) {
		if (strcmp((a + i)->name,Wanted)==0)
		{
			Factor = i;
			//printf("Finded!");
			printf("Home num of that person : % s\n", (a + Factor)->home);
			printf("Mobile of that person : % s\n", (a + Factor)->mobile);
		}
	}
}

struct card {	//Q12
	int val;
	char suit;
};

struct shape {
	int type;
	union {
		struct { int base, height; }tri;
		struct { int width, height; }rect;
		struct { int radius; }circle;
	}data;
};


//////////////////////////////////////////	 MAIN	/////////////////////////////////////////

int main() {
	/* Q04
	struct complex K = { 10,3 };
	struct complex T = { 134, -5 };
	struct complex Result;
	
	Result = complex_Add(K, T);
	printf("%lf,%lf\n", Result.real, Result.img);
	Result = second_complex_Add(&K, &T);
	printf("%lf,%lf", Result.real, Result.img);*/

	/*Q05
	struct point A = { 1,3 };
	struct point B = { 2,3 };
	printf("The Result of A & B : %d", equal(&A, &B)); */

	/*	08
	struct circle L = {A, 2.5};
	printf("%lf\n", area(&L));
	printf("%lf", perimeter(&L)); */

	/*Q10 List of Struct
	typedef struct employee EMPLOYEE;

	EMPLOYEE list[2];
	list[0].age = 30; list[0].num = 1;
	strcpy(list[0].name, "KYJ");
	strcpy(list[0].phone, "01022223333");

	list[1].age = 30; list[1].num = 2;
	strcpy(list[1].name, "JJJ");
	strcpy(list[1].phone, "01022353333");

	printf("%d\n", list[0].num);
	printf("%s\n", list[1].name);*/

	/*	Q11
	struct Inform First[3];
	Save_Inform(&First);
	Finder_Inform(&First);
	*/


	/* Q12
	struct card CARD[52];
	char temp[4] = { 'c','d','h','s' };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			(CARD + i * 13 + j)->val = j + 1;
			(CARD + i * 13 + j)->suit = temp[i];
		}
	}

	for (int i = 0; i < 52; i++) {
		printf("CARD num: %d__CARD suit: %c\n", (CARD + i)->val, (CARD + i)->suit);
	}
	*/


	/*Q13
	int t = 0;
	struct shape S1;
	printf("Enter the type 1:tri, 2:rect, 3:Circle\n");
	scanf("%d", &t);
	
	struct shape *p = &S1;
	(p->type) = t;
	
	switch (t) {
		case 1:
			printf("도형의 밑변, 높이를 입력하세요 : ");
			scanf("%d %d", &(p->data.tri.base), &(p->data.tri.height));
			printf("입력된 값 : %d,%d", (p->data.tri.base), (p->data.tri.height)); 
			break;
		
		case 2:
		
			printf("도형의 가로, 세로를 입력하세요 : ");
			scanf("%d %d", &(p->data.rect.width), &(p->data.rect.height));
			printf("입력된 값 : %d,%d", (p->data.rect.width), (p->data.tri.height));
			break;
		
		case 3:
			printf("도형의 반지름을 입력하세요 : ");
			scanf("%d", &(p->data.circle.radius));
			printf("입력된 값 : %d", (p->data.circle.radius));
			break;
		
	}
	*/



	
	return 0;
}
 
// 3/5 Studying 606p~04q
// 3/6 10번까지 완료
// 3/7 11번 완료
// 4/19 다시 시작, 복습 및 12번, 13번 ing
// 
