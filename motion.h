void capitnormal(){
  servo1.write(10);     
  servo2.write(140);      
}

void capit(){
  servo1.write(60);     
  servo2.write(90);     
}

void maju(){
    digitalWrite(MotorDepanKanan1, HIGH); 
    digitalWrite(MotorDepanKanan2, LOW); 
    digitalWrite(MotorDepanKiri1, HIGH); 
    digitalWrite(MotorDepanKiri2, LOW); 
    digitalWrite(MotorBlkKanan1, HIGH); 
    digitalWrite(MotorBlkKanan2, LOW); 
    digitalWrite(MotorBlkKiri1, HIGH); 
    digitalWrite(MotorBlkKiri2, LOW); 
}

void mundur(){
    digitalWrite(MotorDepanKanan1, LOW); 
    digitalWrite(MotorDepanKanan2, HIGH); 
    digitalWrite(MotorDepanKiri1, LOW); 
    digitalWrite(MotorDepanKiri2, HIGH); 
    digitalWrite(MotorBlkKanan1, LOW); 
    digitalWrite(MotorBlkKanan2, HIGH); 
    digitalWrite(MotorBlkKiri1, LOW); 
    digitalWrite(MotorBlkKiri2, HIGH); 
}


void geserKanan(){
    digitalWrite(MotorDepanKanan1, HIGH); 
    digitalWrite(MotorDepanKanan2, LOW); 
    digitalWrite(MotorDepanKiri1, LOW); 
    digitalWrite(MotorDepanKiri2, HIGH); 
    digitalWrite(MotorBlkKanan1, HIGH); 
    digitalWrite(MotorBlkKanan2, LOW); 
    digitalWrite(MotorBlkKiri1, LOW); 
    digitalWrite(MotorBlkKiri2, HIGH); 
}

void geserKiri(){
    digitalWrite(MotorDepanKanan1, LOW); 
    digitalWrite(MotorDepanKanan2, HIGH); 
    digitalWrite(MotorDepanKiri1, HIGH); 
    digitalWrite(MotorDepanKiri2, LOW); 
    digitalWrite(MotorBlkKanan1, LOW); 
    digitalWrite(MotorBlkKanan2, HIGH); 
    digitalWrite(MotorBlkKiri1, HIGH); 
    digitalWrite(MotorBlkKiri2, LOW); 
}
void serongKiri(){
    digitalWrite(MotorDepanKiri1, HIGH); 
    digitalWrite(MotorDepanKiri2, LOW); 
    digitalWrite(MotorBlkKiri1, HIGH); 
    digitalWrite(MotorBlkKiri2, LOW); 

}
void serongKanan(){
    digitalWrite(MotorDepanKanan1, HIGH); 
    digitalWrite(MotorDepanKanan2, LOW); 
    digitalWrite(MotorBlkKanan1, HIGH); 
    digitalWrite(MotorBlkKanan2, LOW); 
}

void puterKanan(){
    digitalWrite(MotorDepanKanan1, LOW); 
    digitalWrite(MotorDepanKanan2, HIGH);
    digitalWrite(MotorDepanKiri1, LOW); 
    digitalWrite(MotorDepanKiri2, HIGH); 
    digitalWrite(MotorBlkKiri1, HIGH); 
    digitalWrite(MotorBlkKiri2, LOW); 
    digitalWrite(MotorBlkKanan1, HIGH); 
    digitalWrite(MotorBlkKanan2, LOW);
}

void puterKiri(){
    digitalWrite(MotorBlkKiri1, LOW); 
    digitalWrite(MotorBlkKiri2, HIGH); 
    digitalWrite(MotorBlkKanan1, LOW); 
    digitalWrite(MotorBlkKanan2, HIGH); 
    digitalWrite(MotorDepanKanan1, HIGH); 
    digitalWrite(MotorDepanKanan2, LOW);
    digitalWrite(MotorDepanKiri1, HIGH); 
    digitalWrite(MotorDepanKiri2, LOW); 
}

void stops(){
    digitalWrite(MotorDepanKanan1, LOW); 
    digitalWrite(MotorDepanKanan2, LOW); 
    digitalWrite(MotorDepanKiri1, LOW); 
    digitalWrite(MotorDepanKiri2, LOW); 
    digitalWrite(MotorBlkKanan1, LOW); 
    digitalWrite(MotorBlkKanan2, LOW);     
    digitalWrite(MotorBlkKiri1, LOW); 
    digitalWrite(MotorBlkKiri2, LOW); 
}
