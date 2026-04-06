#include <stdio.h>
#include <math.h>

double compoundInterest(double principal, double rate, double time, int timesCompounded, double total);

int main() {

    double principal = 0.0;
    double rate = 0.0;
    char m_y;
    double time = 0;
    int timesCompunded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");   

    printf("Enter the principal (p): ");
    scanf("%lf", &principal);

    printf("Enter the rate (r): ");
    scanf("%lf", &rate);
    rate = rate/100;

    time_constraint:
    printf("Specify the # of time month/years (m/y): ");
    scanf("%c", &m_y);
    if(m_y == 'm') {
        scanf("%lf", &time);
        time = time/12;
    } else if(m_y == 'y') {
        scanf("%lf", &time);
    } else {goto time_constraint;}
    long long int t = (long long int)time;

    printf("Enter the # times compounded (n): ");
    scanf("%d", &timesCompunded);

    total = compoundInterest(principal, rate, time, timesCompunded, total);
    printf("After %lld years, the total will be $%.2lf\n", t, total);
}

double compoundInterest(double principal, double rate, double time, int timesCompounded, double total) {
    total = principal * pow(1+rate/timesCompounded, timesCompounded * time);
    return total;
}

//repetition, experience, clarity 