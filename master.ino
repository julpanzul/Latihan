void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char x = Serial.read();
    if(x >= '0' && x <= '9'){
      // tanda '' untuk tipe data char diubah ke nilai integer yang merupakaan ASCII 
      // harus dikurangi '0' agar nilainya sesuai yang diinginkan
      int z = x - '0';
      for(int y=0; y<=z; y++){
        Serial.println(y);
      }
    }
  }
}
