#include <cmath>

double square_area(double A)
{
    double radio = 2.0 * A / M_PI;
    return std::round(radio * radio * 100.0) / 100.0;
}
