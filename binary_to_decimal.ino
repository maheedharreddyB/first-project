void setup() 
{ Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  digitalWrite(2,0);
  digitalWrite(3,0);
  digitalWrite(4,0);
  digitalWrite(5,0);
  digitalWrite(6,0);
}
int inp;
char inc;
void loop() 
{if (Serial.available() > 0) 
  {inp = 0; 
    while(1) 
    { inc = Serial.read();
      if (inc == '\n') break;
      if (inc == -1) continue; 
      inp *= 10;
      inp = ((inc-48)+ inp);
    }
    Serial.println(inp);
  int l1,l2,l3,l4,l5,chk;
  l1=l2=l3=l4=l5=chk=0;
   for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
      for(int k=0;k<2;k++)
        for(int l=0;l<2;l++)
          for(int m=0;m<2;m++)
            {if(chk==inp)
               {l1=i;l2=j;l3=k;l4=l;l5=m;}
              chk+=1;
            }  
  Serial.print(l1);
  Serial.print(l2);
  Serial.print(l3);
  Serial.print(l4);
  Serial.println(l5);

  digitalWrite(2,l1);
  digitalWrite(3,l2);
  digitalWrite(4,l3);
  digitalWrite(5,l4);
  digitalWrite(6,l5);
  }
}
