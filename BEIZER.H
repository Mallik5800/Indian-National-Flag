// int cx1[4]={200,100,200,250};
// int cy1[4]={200,150,75,100};

void bezier (int x[], int y[],int c)
{
int i;
double t,xt,yt;

for (t = 0.0; t < 1.0; t += 0.0005)
{
xt = pow(1-t,3)*x[0]+3*t*pow(1-t,2)*x[1]+3*pow(t,2)*(1-t)*x[2]+pow(t,3)*x[3];
yt = pow(1-t,3)*y[0]+3*t*pow(1-t,2)*y[1]+3*pow(t,2)*(1-t)*y[2]+pow(t,3)*y[3];
putpixel (xt, yt,c);
}

for (i=0; i<4; i++)
 putpixel (x[i], y[i], c);
}
