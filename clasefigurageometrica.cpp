#include<iostream>
#include<math.h>
using namespace std;
double abs(double x){
    if(x>0){
        return x;
    }
    return -1*x;
}
double distancia(double x , double y,double w,double z){
    x=abs(x-w);
    y=abs(y-z);
    return sqrt(x*x+y*y);
}
class figurageometrica{
    private:
        int n;
    public :
        figurageometrica(int _n=0){
            n=_n;
        }
        void lados(int _n){
            n=_n;
        }
        int retornar() const{
            return n;
        }
        double sumatoriadeangulosinternos() const {
            if(n>0){
                return 180*(n-2);
            }
            else{
                cout<<"No es figurageometrica"<<endl;
                return 0.0;
            }
        }
        void imprimir(){
            cout<<"La figura tiene " << n << " lados"<<endl;
        }
        double angulointerno() const{
            cout<<"El poligono es regular?"<<endl;
            char respuesta;
            cin>>respuesta;
            if(respuesta=='Y'){
                return (180*(n-2))/n;
            }
            cout<<"No es"<<endl;
            return 0.0;
        }
};
class cuadrilatero: public figurageometrica{
    private:
        double x[4];
        double y[4];
    public :
        void formar(){
            double j=0;
            for(int i=0;i<4;i++){
                cin>>j;
                x[i]=j;
                cin>>j;
                y[i]=j;
            }
        }
        double area() const {
            double area1=1.0;
            for(int i=0;i<2;i++){
                area1*=(distancia(x[i],y[i],x[i+1],y[i+1]));
            }
            return area1;
        }
        double perimetro() const{
            double suma=0.0;
            for(int i=0;i<3;i++){
                suma+=(distancia(x[i],y[i],x[i+1],y[i+1]));
            }
            suma+=distancia(x[0],y[0],x[3],y[3]);
            return suma;
        }
        double diagonal() const {
            return distancia(x[0],y[0],x[2],y[2]);
        }
        string caracteristica() const {
            double var,var1,var2,var3;
            var=distancia(x[0],y[0],x[1],y[1]);
            var1=distancia(x[1],y[1],x[2],y[2]);
            var2=distancia(x[2],y[2],x[3],y[3]);
            var3=distancia(x[0],y[0],x[3],y[3]);
            if(var==var1){
                if(var==var2){
                    if(var2==var3){
                        return "Cuadrado";
                    }
                    return "Trapecio";
                }
                return "Trapezoide";
            }
            if(var==var2){
                if(var1==var3){
                    return "Rectangulo";
                }
                return "Trapecio";
            }
            return "Trapezoide";
        }
};
class circulo : public figurageometrica{
    private:
        double radio;
    public:
        circulo(double _radio=0.0){
            radio=_radio;
        }
        void insertradio(double _radio){
            radio=_radio;
        }
        double area() const {
            return (3.1416)*radio*radio;
        }
        double perimetro() const {
            return (2)*(3.141516)*radio;
        }
        double diametro() const {
            return 2*radio;
        }
};
class triangulo : public figurageometrica{
    private :
        double x[3];
        double y[3];
    public:
        void formar(){
            double j=0;
            for(int i=0;i<3;i++){
                cin>>j;
                x[i]=j;
                cin>>j;
                y[i]=j;
            }
        }
        double area() const {
            double area1=1.0;
            for(int i=0;i<2;i++){
                area1*=(distancia(x[i],y[i],x[i+1],y[i+1]));
            }
            return area1;
        }
        double perimetro() const{
            double suma=0.0;
            for(int i=0;i<2;i++){
                suma+=(distancia(x[i],y[i],x[i+1],y[i+1]));
            }
            suma+=distancia(x[0],y[0],x[2],y[2]);
            return suma;
        }
        double diagonal() const {
            return distancia(x[0],y[0],x[2],y[2]);
        }
        string caracteristica() const {
            double var,var1,var2;
            var=distancia(x[0],y[0],x[1],y[1]);
            var1=distancia(x[1],y[1],x[2],y[2]);
            var2=distancia(x[0],y[0],x[2],y[2]);
            if(var==var1){
                if((var*var+var1*var1)==var2*var2){
                    return "Isosceles y Rectangulo";
                }
                if(var1==var2){
                    return "Equilatero";
                }
                return "Isosceles";
            }
            if((var*var+var1*var1)==var2*var2){
                    return "Rectangulo y Escaleno";
            }
            if(var2==var1){
                if((var2*var2+var1*var1)==var*var){
                    return "Isosceles y Rectangulo";
                }
                return "Isosceles";
            }
            if((var2*var2+var1*var1)==var*var){
                    return "Rectangulo y Escaleno";
            }
            if(var==var2){
                if((var2*var2+var*var)==var1*var1){
                    return "Isosceles y Rectangulo";
                }
                return "Isosceles";
            }
            if((var*var+var2*var2)==var1*var1){
                    return "Rectangulo y Escaleno";
            }
            return "Escaleno";
        }
};
int main(){
int n;
class cuadrilatero *cuadrado1;
cin>>n;
cuadrado1->formar();
return 0;
}
