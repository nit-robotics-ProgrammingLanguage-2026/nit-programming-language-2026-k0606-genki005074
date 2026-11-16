#include <stdio.h>

int main(void)
{
    const double g = 3.71;
    double ylimit;
    double step = 0.0;
    double y = 0.0;

    if (scanf("%lf", &ylimit) != 1)
    {
        return 0;
    }
    if (ylimit < 0.0)
    {
        printf("NG");
        return 0;
    }

    while (y < ylimit)
    {
        step += 1.0;
        // t = step / 10.0 として、落下距離 g * t * t / 2 を求める。
        y = (g * 100.0) * step * step / 20000.0;
    }

    double t = step / 10.0;
    printf("%.3f", g * t);
    return 0;
}
