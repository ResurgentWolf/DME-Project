#include<graphics.h>
#include<conio.h>
#include<iostream.h>
#include<dos.h>
#include<ctype.h>

void oput(char &ch2, char ch1)
{ ch2++;
  if(ch2>=ch1)
   ch2=ch1;
}
void thankyou()
{ clrscr();
  char a='A',m='A',e='A',y='A',w='A',g='A',l='A',s='A',h='A',u='A';
  char t='A',o='A',d='A',n='A',j='A',r='A',p='A',v='A';
  char i='A',k='A',c='A';

for(int j1=0;j1<26;j1++)
  { clrscr();
    cout<<"\n\n\t\t\t\tTHANK YOU";
    cout<<"\n\n\n\t\t\t";
    cout<<"\t";
    cout<<"\n\n\t\t\t\t"<<s<<a<<v<<y<<a<<" "<<s<<a<<c<<h<<i<<" "<<g<<u<<p<<t<<a;
    delay(100);

    oput(s,'S');
    oput(a,'A');
    oput(v,'V');
    oput(y,'Y');
    oput(a,'A');
    oput(s,'S');
    oput(a,'A');
    oput(c,'C');
    oput(h,'H');
    oput(i,'I');
    oput(g,'G');
    oput(u,'U');
    oput(p,'P');
    oput(t,'T');
    oput(a,'A');

  }
  delay(250);
  cout<<"\n\n\n\n\t\t\t     Press any Key To Navigate" ;
  cout<<"\n\n\n\t\t\t        away from this page ";
  getch();
  clrscr();
}



float r,d,D,kt,syp,smax,sn,m;
long double fos;
float ans[5];
int i=0;
char ch='y';

//Definition of alpha().
void alpha(char a)
	{
	    cout<<a<<" ";
	    delay(120);  //Delays for 200 milli-seconds.

	}

//Definition of welcomescreen().
void welcomescreen()
	{   clrscr();
		cout<<"\n\n\n\n\n\n\n\n\n\t\t     ";
		alpha('S');
		alpha('T');
		alpha('R');
		alpha('E');
		alpha('S');
		alpha('S');
		alpha('E');
		alpha('S');
		cout<<" ";
		alpha('A');
		alpha('N');
		alpha('D');
		cout<<" ";
		alpha('S');
		alpha('T');
		alpha('R');
		alpha('A');
		alpha('I');
		alpha('N');
		alpha('S');
		cout<<"\n\t\t     -------------------------------------";
	    cout<<"\n\n\t\t         \"PROBLEM SOLVING USING C++\"";
	    delay(2000);
	    clrscr();

	}

//Function to create the shapes that the user will select
int shape()
{
   int choice;
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   cout<<"\t\t\t Choose The Type Of Section :";
   cout<<"\n\n\n\n\t\t    1\t\t\t\t      2";
   cout<<"\n\n\n\n\n\n\n\n\n\t\t       3\t\t\t      4";
   cout<<"\n\n\n\n\n\n\n\n\n\t\t  5\t\t\t\t      6";
   cout<<"\n\n\n\n\n\n\t\t\t   Enter Your Choice : ";

   //Figure 1 code begins
   line(100, 120, 200, 120);
   line(100, 20, 200, 20);
   line(100, 20, 100, 120);
   arc(230, 20, 180, 270, 30);
   arc(230, 120, 90, 180, 30);
   line(230, 90, 270, 90);
   line(230, 50, 270, 50);
   line(270, 50, 270, 90);

   //Figure 2 code begins
   line(360, 120, 420, 120);
   line(360, 20, 420, 20);
   line(360, 20, 360, 120);
   arc(435, 20, 180, 0, 15);
   arc(435, 120, 0, 180, 15);
   line(450, 20, 510, 20);
   line(450, 120, 510, 120);
   line(510, 20, 510, 120);

   //Figure 3 code begins
   rectangle(100, 160, 270, 260);
   circle(185, 210, 20);

   //Figure 4 code Begins
   line(360, 160, 420, 160);
   line(360, 270, 420, 270);
   line(420, 270, 420, 160);
   arc(435, 160, 180, 0, 15);
   arc(435, 270, 0, 180, 15);
   line(450, 270, 510, 270);
   line(450, 160, 510, 160);
   line(450, 270, 450, 160);
   arc(450, 215, 317.4896, 42.5104, 81.394);
   arc(420, 215, 137.4896, 222.5104, 81.394);

   //Figure 5 code Begins
   arc(230, 310, 180, 270, 30);
   arc(230, 420, 90, 180, 30);
   line(100, 310, 200, 310);
   line(100, 420, 200, 420);
   line(200, 310, 200, 420);
   arc(200, 365, 151.1893,208.8107,114.1271);
   arc(200, 365, 340.347, 19.653, 74.330);
   line(230, 340, 270, 340);
   line(230, 390, 270, 390);

   //Figure 6 code Begins
   arc(360, 365, 339.8637, 20.1363, 159.7654);
   arc(510, 365, 159.8637, 200.1363, 159.7654);
   line(360, 310, 510, 310);
   line(360, 420, 510, 420);
   circle(435, 365, 20);


   cin>>choice;
   closegraph();
   return choice;
}



void getdata()
{
 clrscr();
 cout<<"\n\t\t\t\t   Please Enter Data :\n";
 cout<<"\n \'r\' Value (mm) : ";
 cin>>r;
 cout<<"\n \'d\' Value (mm) : ";
 cin>>d;
 cout<<"\n \'D\' Value (mm) : ";
 cin>>D;
 cout<<"\n Factor Of Saftey : ";
 cin>>fos;
 cout<<"\n\n r/d Value is : "<<r/d;
 cout<<"\n\n D/d Value is : "<<D/d;
 cout<<"\n\n REFER Design Data Handbook Pg. 31 to Pg.38 for value of Kt...";
 cout<<"\n\n Kt Value is : ";
 cin>>kt;
 cout<<"\n\nEnter The Value of BENDING MOMENT (in kN-mm) : ";
 cin>>m;
 sn=((1000*m*32*7)/(22*d*d*d));
 smax=kt*sn;
 ans[i]=smax;
 i++;
 cout<<"\n Nominal Stress : (Mx32)/(pixd^3) : "<<sn<<" Mpa";
 cout<<"\n Maximum Stress : KtxNominal Stress : "<<smax<<" Mpa";
 getch();
}





void finalans()
{
 float max=ans[0];
 for(int l=1; l<i; l++)
 {
  if(ans[l]>max) max=ans[l];
 }
 cout<<"\n\n\n\n\n\t\t\t   Considering the HIGHER value...";
 cout<<"\n\n\t\t\t  MAXIMUM STRESS IS : "<<max<<" Mpa";
 cout<<"\n\n\t\t\t  Since Factor of Safety ="<<fos;
 cout<<"\n\n\t\t\t  Yield Stress = FOS x Max. Stress";
 cout<<"\n\n\t\t\t               = "<<fos<<"  x "<<max;
 cout<<"\n\n\t\t\t		 = "<<fos*max<<" Mpa";
 cout<<"\n REFER Design Data Handbook Pg.427 to Pg.429 to select material.";


}



float mmax,su,mmin,smax1,smin1,sa,sm,ktf,sen;
char material;

void bmcalc()
{
 cout<<"\n\nEnter Magnitude of Bending Moment : ";
 cin>>m;
 cout<<"\nThus, \t Mmax = +"<<m<<" kN-mm";
 cout<<"\n      \t Mmin = -"<<m<<" kN-mm";
 d=28;
 smax1=((1000*m*32*7)/(22*d*d*d));
 smin1=smax1;
 sa=(smax1+smin1)/2;
 sm=(smax1-smin1)/2;
 cout<<"\n\nMax. Stress = +"<<smax1;
 cout<<"\nMin. Stress = -"<<smin1;
 cout<<"\n\nAmplitude Stress = (Max - Min)/2 = "<<sa;
 cout<<"\n\nMean Stress = (Max + Min)/2 = "<<sm;
 cout<<"\n\nAssuming The Material To Be Highly Sensitive,\nWe consider q=1";
 ktf=kt;
 cout<<"\n\nKtf = q(Kt-1)+1 = "<<ktf;
 cout<<"\nFor Endurance Stress :";
 cout<<"\n 0.5 x Ultimate Stress\tFOR STEELS";
 cout<<"\n 0.4 x Ultimate Stress\tFOR CAST IRON";
 cout<<"\nEnter Ultimate Stress (Mpa) : ";
 cin>>su;
 cout<<"\nEnter Type Of Material : (S/I) : ";
 cin>>material;
 tolower(material);
 if(material=='s')
 {
  sen=0.5*su;
 }
 else
 {
  sen=0.4*su;
 }
 cout<<"\n\n\t\t\t  Using SODERBERGS EQUATION : ";
 cout<<"\nA=1\tFor Reversed Bending Moment";
 cout<<"\nB=0.85      For All Cases";
 cout<<"\nC=0.80      Depending on the Material";

 float var1=((kt*sa)/(0.68*sen));
 fos=1/var1;
 cout<<"\n\nThus, FACTOR OF SAFETY = "<<fos;
 if(fos<2) cout<<"\nWhich is NOT suitable...";
 else cout<<"\nWhich is Suitable...";
 getch();


}








//Main function that drives the entire program. You may also increase the waiting time at multiple points in the program as per requirement

void main()
{
 clrscr();
 int flag=1;
 welcomescreen();
 while(ch=='y')
{
 while(flag)
 {
  int choice=shape();
  switch(choice)
  {
   case 4:
   case 5: flag=0;
	   break;
   default: cout<<"\n\n\n\n\t\t\t   INVALID CHOICE. Try Again.";
	    getch();
	    break;
  }
 }
 getdata();
 cout<<"\n\nDo You Want To Enter Data For Another Section? (Y/N) : ";
 cin>>ch;
 tolower(ch);
 if(ch=='y') flag=1;
}
finalans();
getch();
char b;
clrscr();
cout<<"\n Do you want to check if Bending Moment is Reversed? (Y/N) : ";
cin>>b;
tolower(b);
if(b=='y')
{
 bmcalc();
}
 thankyou();
 getch();
}
