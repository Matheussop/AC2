
/* Use File->Load Prog to
   load a different Program
*/
#define led10 10
#define led11 11
#define led12 12
#define led13 13
int count;
bool azulS = false ;
int a = 11 ;
void setup() {
	Serial.begin(9600);     
	pinMode(led10, OUTPUT);
	pinMode(led11, OUTPUT);
	pinMode(led12, OUTPUT);
	pinMode(led13, OUTPUT);
}
void acendeLed(int a){
	digitalWrite(led11,0);
	digitalWrite(led12,0);
	digitalWrite(led13,0);
	digitalWrite(a,1);
}
void piscarAzul(){
	digitalWrite(led10,!azulS);
	azulS = !azulS;
}
void loop()
{
	String b = Serial.readString();
	if(!b.equals("")){
		a = b.toInt();	
	}
	acendeLed(a);
	piscarAzul();
	delay(500);
}
