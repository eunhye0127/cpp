#include <iostream>

void swap(int *num1, int *num2){
    int num;
    num = *num1;
    *num1 = *num2;
    *num2 = num;
}

void swap(char *ch1, char *ch2){
    char ch;
    ch = *ch1;
    *ch1 = *ch2;
    *ch2 = ch;
}

void swap(double *dbl1, double *dbl2){
    double dbl;
    dbl = *dbl1;
    *dbl1 = *dbl2;
    *dbl2 = dbl;
}

int main(void)

{

	int num1=20, num2=30;

	swap(&num1,&num2);

	std::cout<<num1<<' '<<num2<<' ';



	char ch1='A',ch2='Z';

	swap(&ch1,&ch2);

	std::cout<<ch1<<' '<<ch2<<' ';



	double dbl1=1.111,dbl2=5.555;

	swap(&dbl1,&dbl2);

	std::cout<<dbl1<<' '<<dbl2<<' ';

	return 0;

}