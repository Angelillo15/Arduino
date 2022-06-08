//definir pines de salida
int in1=6;
int in2=7;
int in3=8;
int in4=9;

int ENA=5;
int ENB=11;
//definir la funcion de avanzae
void _avanzarHaciaDelante(){ 
  digitalWrite(ENA,HIGH);
  digitalWrite(ENB,HIGH);
  digitalWrite(in1,HIGH);//digital output
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
//Bucle del programa
void loop() {
  _avanzarHaciaDelante();

}
