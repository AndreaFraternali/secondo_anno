TCanvas * fonts()
{
   TCanvas *Tf = new TCanvas("Tf", "Tf",0,0,500,700);
   Tf->Range(0,0,1,1);
   Tf->SetBorderSize(2);
   Tf->SetFrameFillColor(0);
                                                                                
   double y = 0.95;
   for (int f = 12; f<=142; f+=10) {
      if (f<142) drawtext(0.02,y, f,"ABCDFGF abcdefgh 0123456789 @#$");
      else drawtext(0.02,y, f,"ABCD efgh 01234 @#$");
      y- = 0.07;
   }
   return Tf;
}

void drawtext(double x, double y, int f, char *s)
{
   TLatex *t = new TLatex(x,y,Form("#font[41]{%d :} %s",f,s));
   t->SetTextFont(f);
   t->SetTextAlign(12);
   t->Draw();
}