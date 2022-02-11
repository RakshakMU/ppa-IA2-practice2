#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the values of base and height\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=base*height*0.5;
}
void output(float base,float height,float area)
{
  printf("Area of triagle with %f and %f is %f\n",base,height,area);

}
int main()
{
  float base,height;
  input(&base,&height);
  float area;
  find_area(base,height,&area);
  output(base,height,area);
  return 0;
}