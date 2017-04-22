#ifndef METODO_H
#define METODO_H
class Trapecio{
    private:
        float b,a, z1,ints, func, count=0,z3=0;
        int n;
        double e = 2.71828;
    public:
        void datos();
        void calculos();
        void resultado();
};
void Trapecio::datos() {
    std::cout << "Ingresa los limites a y b: " <<std::endl;
    std::cout<<"a ->";std::cin >> a;
    std::cout<<"b ->";std::cin >> b;
    std::cout << "Ingresa el numero de intervalos: " <<std::endl;
    std::cin >> n;
}
void Trapecio::calculos() {
    float z2[n],res;
    int count = 0;
    ints = (b-a)/n;
    z1 = (b-a)/(2*n);
    for (a; a <= b; a += ints){
      z2[count] = ((8*a) + pow(e,0.1*a)); //AQUI SE CAMBIA LA FUNCION
      count++;
    }
    for (int i = 1; i <= n-1; i++){
      z3 += z2[i];
    }
    res = (z3*2) + z2[0]+z2[n];
    std::cout <<"R: " << res * z1<<std::endl;
}
#endif
