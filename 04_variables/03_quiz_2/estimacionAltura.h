#if !defined(ESTIMACIONALTURA_H)
#define ESTIMACIONALTURA_H

namespace constNumeros
{
    const double gravedad{9.8};
} // namespace constNumeros


double estimacionAltura(double x, double t);
void estatusProyectil(double y0, double t);

#endif // ESTIMACIONALTURA_H