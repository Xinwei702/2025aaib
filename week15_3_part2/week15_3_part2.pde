//week15_3_zongzi_part2
PImage zongzi;
void setup(){
  size(600,400);
  zongzi=loadImage("zongzi.png");
  imageMode(CENTER);
}
float [] x=new float[100];
float [] y=new float[100];
int n=0;
void draw(){
  background(#C0ffee);
  for(int i=0;i<n;i++){
    image(zongzi,x[i],y[i],60,50);
    y[i]++;
    if(y[i]>400){
      for(int k=i;k<n-1;k++){
        x[k]=x[k+1];
        y[k]=y[k+1];
      }
      n--;
    }
  }
  println(n);
}
void mousePressed(){
  x[n]=mouseX;
  y[n]=mouseY;
  n++;
}
