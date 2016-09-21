void setup() 
{                
  pinMode(4, OUTPUT);   // Mengatur Digital Pin 4 Sebagai Output  
}
void loop() 
{
  digitalWrite(4, HIGH);   // Menyalakan LED pada Pin 4
  delay(4500);               // Tunggu 4,5 detik
  digitalWrite(4, LOW);    // Mematikan LED pada Pin 4
  delay(4500);               // Tunggu 4,5 detik
}
