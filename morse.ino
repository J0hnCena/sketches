
char translateToMorse[] = "michael is a gypsy";
void setup()
{
	pinMode(10, OUTPUT);
}

void loop()
{
	for(int i = 0; i < sizeof(translateToMorse) - 1; i++) {
		char sub = translateToMorse[i];
		executeMorse(sub);
	}
}

void executeMorse(char oneChar)
{	
	switch(oneChar) {
		case 'a':
			Dot();
			Dash();
			break;
		case 'b':
			Dash();
			Dot();
			Dot();
			Dot();
			break;
		case 'c':
			Dash();
			Dot();
			Dash();
			Dot();
			break;
		case 'd':
			Dash();
			Dash();
			Dot();
			break;
		case 'e':
			Dot();
			break;
		case 'f':
			Dot();
			Dot();
			break;
		case 'g':
			Dash();
			Dash();
			Dot();
			break;
		case 'h':
			Dot();
			Dot();
			Dot();
			Dot();
			break;
		case 'i':
			Dot();
			Dot();
			break;
		case 'j':
			Dot();
			Dash();
			Dash();
			Dash();
			break;
		case 'k':
			Dash();
			Dot();
			Dash();
			break;
		case 'l':
			Dot();
			Dash();
			Dot();
			Dot();
			break;
		case 'm':
			Dash();
			Dash();
			break;
		case 'n':
			Dash();
			Dot();
			break;
		case 'o':
			Dash();
			Dash();
			Dash();
			break;
		case 'p':
			Dot();
			Dash();
			Dash();
			Dot();
			break;
		case 'q':
			Dash();
			Dash();
			Dot();
			Dash();
			break;
		case 'r':
			Dot();
			Dash();
			Dot();
			break;
		case 's':
			Dot();
			Dot();
			Dot();
			break;
		case 't':
			Dash();
			break;
		case 'u':
			Dot();
			Dot();
			Dash();
			break;
		case 'v':
			Dot();
			Dot();
			Dot();
			Dash();
			break;
		case 'w':
			Dot();
			Dash();
			Dash();
			break;
		case 'x':
			Dash();
			Dot();
			Dot();
			Dash();
			break;
		case 'y':
			Dash();
			Dot();
			Dash();
			Dash();
			break;
		case 'z':
			Dash();
			Dash();
			Dot();
			Dot();
			break;
		default:
			longSpace();
	}
		
}

void Dot()
{
	digitalWrite(10, HIGH);
	delay(500);
	digitalWrite(10, LOW);
	delay(1500);
}

void Dash()
{
	digitalWrite(10, HIGH);
	delay(1500);
	digitalWrite(10, LOW);
	delay(1500);
}

void longSpace()
{
	digitalWrite(10, LOW);
	delay(3000);
}
