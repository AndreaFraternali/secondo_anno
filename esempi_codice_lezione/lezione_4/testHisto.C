void testHisto()
{
//=========Macro generated from canvas: c1/fitFunc examples
//=========  (Wed Oct 13 23:36:53 2021) by ROOT version 6.22/08
   TCanvas *c1 = new TCanvas("c1", "fitFunc examples",200,31,600,400);
   gStyle->SetOptFit(1);
   gStyle->SetOptTitle(0);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.51,0.99,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(-6.25,-529.9875,6.25,4769.888);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetFrameBorderMode(0);
   c1_1->SetFrameBorderMode(0);
   
   TH1F *h0__3 = new TH1F("h0__3","test histogram",100,-5,5);
   h0__3->SetBinContent(6,1);
   h0__3->SetBinContent(7,1);
   h0__3->SetBinContent(8,2);
   h0__3->SetBinContent(11,1);
   h0__3->SetBinContent(12,1);
   h0__3->SetBinContent(13,2);
   h0__3->SetBinContent(14,8);
   h0__3->SetBinContent(15,6);
   h0__3->SetBinContent(16,10);
   h0__3->SetBinContent(17,12);
   h0__3->SetBinContent(18,14);
   h0__3->SetBinContent(19,18);
   h0__3->SetBinContent(20,46);
   h0__3->SetBinContent(21,56);
   h0__3->SetBinContent(22,72);
   h0__3->SetBinContent(23,99);
   h0__3->SetBinContent(24,122);
   h0__3->SetBinContent(25,130);
   h0__3->SetBinContent(26,195);
   h0__3->SetBinContent(27,266);
   h0__3->SetBinContent(28,327);
   h0__3->SetBinContent(29,390);
   h0__3->SetBinContent(30,517);
   h0__3->SetBinContent(31,588);
   h0__3->SetBinContent(32,738);
   h0__3->SetBinContent(33,860);
   h0__3->SetBinContent(34,990);
   h0__3->SetBinContent(35,1162);
   h0__3->SetBinContent(36,1425);
   h0__3->SetBinContent(37,1518);
   h0__3->SetBinContent(38,1816);
   h0__3->SetBinContent(39,2136);
   h0__3->SetBinContent(40,2400);
   h0__3->SetBinContent(41,2465);
   h0__3->SetBinContent(42,2738);
   h0__3->SetBinContent(43,3005);
   h0__3->SetBinContent(44,3213);
   h0__3->SetBinContent(45,3553);
   h0__3->SetBinContent(46,3658);
   h0__3->SetBinContent(47,3692);
   h0__3->SetBinContent(48,3824);
   h0__3->SetBinContent(49,3998);
   h0__3->SetBinContent(50,4023);
   h0__3->SetBinContent(51,4038);
   h0__3->SetBinContent(52,3955);
   h0__3->SetBinContent(53,3896);
   h0__3->SetBinContent(54,3708);
   h0__3->SetBinContent(55,3692);
   h0__3->SetBinContent(56,3427);
   h0__3->SetBinContent(57,3087);
   h0__3->SetBinContent(58,2948);
   h0__3->SetBinContent(59,2763);
   h0__3->SetBinContent(60,2556);
   h0__3->SetBinContent(61,2344);
   h0__3->SetBinContent(62,2030);
   h0__3->SetBinContent(63,1845);
   h0__3->SetBinContent(64,1540);
   h0__3->SetBinContent(65,1386);
   h0__3->SetBinContent(66,1180);
   h0__3->SetBinContent(67,1004);
   h0__3->SetBinContent(68,817);
   h0__3->SetBinContent(69,766);
   h0__3->SetBinContent(70,618);
   h0__3->SetBinContent(71,480);
   h0__3->SetBinContent(72,426);
   h0__3->SetBinContent(73,322);
   h0__3->SetBinContent(74,257);
   h0__3->SetBinContent(75,183);
   h0__3->SetBinContent(76,153);
   h0__3->SetBinContent(77,105);
   h0__3->SetBinContent(78,96);
   h0__3->SetBinContent(79,79);
   h0__3->SetBinContent(80,59);
   h0__3->SetBinContent(81,41);
   h0__3->SetBinContent(82,17);
   h0__3->SetBinContent(83,22);
   h0__3->SetBinContent(84,21);
   h0__3->SetBinContent(85,15);
   h0__3->SetBinContent(86,9);
   h0__3->SetBinContent(87,5);
   h0__3->SetBinContent(88,6);
   h0__3->SetBinContent(89,1);
   h0__3->SetBinContent(90,2);
   h0__3->SetBinContent(91,3);
   h0__3->SetEntries(100000);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.675,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   TText *ptstats_LaTex = ptstats->AddText("Entries = 100000 ");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.0009847 #pm 0.003164");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      1 #pm 0.002237");
   ptstats->SetOptStat(2210);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   h0__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h0__3);
   h0__3->SetFillColor(4);
   h0__3->SetMarkerStyle(20);
   h0__3->SetMarkerSize(0.5);
   h0__3->GetXaxis()->SetTitle("x");
   h0__3->GetXaxis()->SetLabelSize(0.04);
   h0__3->GetXaxis()->SetTitleSize(0.04);
   h0__3->GetXaxis()->SetTitleOffset(1);
   h0__3->GetYaxis()->SetTitle("Entries");
   h0__3->GetYaxis()->SetLabelSize(0.04);
   h0__3->GetYaxis()->SetTitleSize(0.04);
   h0__3->GetYaxis()->SetTitleOffset(1.2);
   h0__3->GetZaxis()->SetLabelSize(0.04);
   h0__3->GetZaxis()->SetTitleSize(0.04);
   h0__3->GetZaxis()->SetTitleOffset(1);
   h0__3->Draw("H");
   
   TH1F *h0__4 = new TH1F("h0__4","test histogram",100,-5,5);
   h0__4->SetBinContent(6,1);
   h0__4->SetBinContent(7,1);
   h0__4->SetBinContent(8,2);
   h0__4->SetBinContent(11,1);
   h0__4->SetBinContent(12,1);
   h0__4->SetBinContent(13,2);
   h0__4->SetBinContent(14,8);
   h0__4->SetBinContent(15,6);
   h0__4->SetBinContent(16,10);
   h0__4->SetBinContent(17,12);
   h0__4->SetBinContent(18,14);
   h0__4->SetBinContent(19,18);
   h0__4->SetBinContent(20,46);
   h0__4->SetBinContent(21,56);
   h0__4->SetBinContent(22,72);
   h0__4->SetBinContent(23,99);
   h0__4->SetBinContent(24,122);
   h0__4->SetBinContent(25,130);
   h0__4->SetBinContent(26,195);
   h0__4->SetBinContent(27,266);
   h0__4->SetBinContent(28,327);
   h0__4->SetBinContent(29,390);
   h0__4->SetBinContent(30,517);
   h0__4->SetBinContent(31,588);
   h0__4->SetBinContent(32,738);
   h0__4->SetBinContent(33,860);
   h0__4->SetBinContent(34,990);
   h0__4->SetBinContent(35,1162);
   h0__4->SetBinContent(36,1425);
   h0__4->SetBinContent(37,1518);
   h0__4->SetBinContent(38,1816);
   h0__4->SetBinContent(39,2136);
   h0__4->SetBinContent(40,2400);
   h0__4->SetBinContent(41,2465);
   h0__4->SetBinContent(42,2738);
   h0__4->SetBinContent(43,3005);
   h0__4->SetBinContent(44,3213);
   h0__4->SetBinContent(45,3553);
   h0__4->SetBinContent(46,3658);
   h0__4->SetBinContent(47,3692);
   h0__4->SetBinContent(48,3824);
   h0__4->SetBinContent(49,3998);
   h0__4->SetBinContent(50,4023);
   h0__4->SetBinContent(51,4038);
   h0__4->SetBinContent(52,3955);
   h0__4->SetBinContent(53,3896);
   h0__4->SetBinContent(54,3708);
   h0__4->SetBinContent(55,3692);
   h0__4->SetBinContent(56,3427);
   h0__4->SetBinContent(57,3087);
   h0__4->SetBinContent(58,2948);
   h0__4->SetBinContent(59,2763);
   h0__4->SetBinContent(60,2556);
   h0__4->SetBinContent(61,2344);
   h0__4->SetBinContent(62,2030);
   h0__4->SetBinContent(63,1845);
   h0__4->SetBinContent(64,1540);
   h0__4->SetBinContent(65,1386);
   h0__4->SetBinContent(66,1180);
   h0__4->SetBinContent(67,1004);
   h0__4->SetBinContent(68,817);
   h0__4->SetBinContent(69,766);
   h0__4->SetBinContent(70,618);
   h0__4->SetBinContent(71,480);
   h0__4->SetBinContent(72,426);
   h0__4->SetBinContent(73,322);
   h0__4->SetBinContent(74,257);
   h0__4->SetBinContent(75,183);
   h0__4->SetBinContent(76,153);
   h0__4->SetBinContent(77,105);
   h0__4->SetBinContent(78,96);
   h0__4->SetBinContent(79,79);
   h0__4->SetBinContent(80,59);
   h0__4->SetBinContent(81,41);
   h0__4->SetBinContent(82,17);
   h0__4->SetBinContent(83,22);
   h0__4->SetBinContent(84,21);
   h0__4->SetBinContent(85,15);
   h0__4->SetBinContent(86,9);
   h0__4->SetBinContent(87,5);
   h0__4->SetBinContent(88,6);
   h0__4->SetBinContent(89,1);
   h0__4->SetBinContent(90,2);
   h0__4->SetBinContent(91,3);
   h0__4->SetEntries(100000);
   
   ptstats = new TPaveStats(0.78,0.675,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats_LaTex = ptstats->AddText("Entries = 100000 ");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.0009847 #pm 0.003164");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      1 #pm 0.002237");
   ptstats->SetOptStat(2210);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   h0__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h0__4);
   h0__4->SetFillColor(4);
   h0__4->SetMarkerStyle(20);
   h0__4->SetMarkerSize(0.5);
   h0__4->GetXaxis()->SetTitle("x");
   h0__4->GetXaxis()->SetLabelSize(0.04);
   h0__4->GetXaxis()->SetTitleSize(0.04);
   h0__4->GetXaxis()->SetTitleOffset(1);
   h0__4->GetYaxis()->SetTitle("Entries");
   h0__4->GetYaxis()->SetLabelSize(0.04);
   h0__4->GetYaxis()->SetTitleSize(0.04);
   h0__4->GetYaxis()->SetTitleOffset(1.2);
   h0__4->GetZaxis()->SetLabelSize(0.04);
   h0__4->GetZaxis()->SetTitleSize(0.04);
   h0__4->GetZaxis()->SetTitleOffset(1);
   h0__4->Draw("E,P,SAME");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   TPad *c1_2 = new TPad("c1_2", "c1_2",0.01,0.01,0.99,0.49);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(-6.25,-521.5875,6.25,4694.288);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   c1_2->SetFrameBorderMode(0);
   
   TH1F *h1__5 = new TH1F("h1__5","test histogram",100,-5,5);
   h1__5->SetBinContent(6,1);
   h1__5->SetBinContent(10,1);
   h1__5->SetBinContent(11,3);
   h1__5->SetBinContent(12,3);
   h1__5->SetBinContent(13,7);
   h1__5->SetBinContent(14,12);
   h1__5->SetBinContent(15,10);
   h1__5->SetBinContent(16,11);
   h1__5->SetBinContent(17,10);
   h1__5->SetBinContent(18,19);
   h1__5->SetBinContent(19,20);
   h1__5->SetBinContent(20,39);
   h1__5->SetBinContent(21,55);
   h1__5->SetBinContent(22,56);
   h1__5->SetBinContent(23,88);
   h1__5->SetBinContent(24,116);
   h1__5->SetBinContent(25,139);
   h1__5->SetBinContent(26,209);
   h1__5->SetBinContent(27,243);
   h1__5->SetBinContent(28,312);
   h1__5->SetBinContent(29,379);
   h1__5->SetBinContent(30,474);
   h1__5->SetBinContent(31,631);
   h1__5->SetBinContent(32,752);
   h1__5->SetBinContent(33,878);
   h1__5->SetBinContent(34,944);
   h1__5->SetBinContent(35,1236);
   h1__5->SetBinContent(36,1355);
   h1__5->SetBinContent(37,1610);
   h1__5->SetBinContent(38,1791);
   h1__5->SetBinContent(39,2119);
   h1__5->SetBinContent(40,2290);
   h1__5->SetBinContent(41,2429);
   h1__5->SetBinContent(42,2810);
   h1__5->SetBinContent(43,2942);
   h1__5->SetBinContent(44,3287);
   h1__5->SetBinContent(45,3461);
   h1__5->SetBinContent(46,3683);
   h1__5->SetBinContent(47,3757);
   h1__5->SetBinContent(48,3917);
   h1__5->SetBinContent(49,3921);
   h1__5->SetBinContent(50,3935);
   h1__5->SetBinContent(51,3974);
   h1__5->SetBinContent(52,3900);
   h1__5->SetBinContent(53,3954);
   h1__5->SetBinContent(54,3727);
   h1__5->SetBinContent(55,3583);
   h1__5->SetBinContent(56,3483);
   h1__5->SetBinContent(57,3248);
   h1__5->SetBinContent(58,3002);
   h1__5->SetBinContent(59,2829);
   h1__5->SetBinContent(60,2560);
   h1__5->SetBinContent(61,2298);
   h1__5->SetBinContent(62,2128);
   h1__5->SetBinContent(63,1851);
   h1__5->SetBinContent(64,1566);
   h1__5->SetBinContent(65,1377);
   h1__5->SetBinContent(66,1193);
   h1__5->SetBinContent(67,968);
   h1__5->SetBinContent(68,894);
   h1__5->SetBinContent(69,707);
   h1__5->SetBinContent(70,589);
   h1__5->SetBinContent(71,470);
   h1__5->SetBinContent(72,395);
   h1__5->SetBinContent(73,313);
   h1__5->SetBinContent(74,245);
   h1__5->SetBinContent(75,188);
   h1__5->SetBinContent(76,172);
   h1__5->SetBinContent(77,96);
   h1__5->SetBinContent(78,78);
   h1__5->SetBinContent(79,65);
   h1__5->SetBinContent(80,38);
   h1__5->SetBinContent(81,42);
   h1__5->SetBinContent(82,34);
   h1__5->SetBinContent(83,25);
   h1__5->SetBinContent(84,20);
   h1__5->SetBinContent(85,8);
   h1__5->SetBinContent(86,5);
   h1__5->SetBinContent(87,7);
   h1__5->SetBinContent(88,5);
   h1__5->SetBinContent(89,2);
   h1__5->SetBinContent(90,3);
   h1__5->SetBinContent(91,2);
   h1__5->SetBinContent(93,1);
   h1__5->SetEntries(100000);
   
   ptstats = new TPaveStats(0.78,0.675,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats_LaTex = ptstats->AddText("Entries = 100000 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.0004727 #pm 0.003154");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.9973 #pm 0.00223");
   ptstats->SetOptStat(2210);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   h1__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h1__5);
   h1__5->SetFillColor(2);
   h1__5->SetMarkerStyle(20);
   h1__5->SetMarkerSize(0.5);
   h1__5->GetXaxis()->SetTitle("x");
   h1__5->GetXaxis()->SetLabelSize(0.04);
   h1__5->GetXaxis()->SetTitleSize(0.04);
   h1__5->GetXaxis()->SetTitleOffset(1);
   h1__5->GetYaxis()->SetTitle("Entries");
   h1__5->GetYaxis()->SetLabelSize(0.04);
   h1__5->GetYaxis()->SetTitleSize(0.04);
   h1__5->GetYaxis()->SetTitleOffset(1.2);
   h1__5->GetZaxis()->SetLabelSize(0.04);
   h1__5->GetZaxis()->SetTitleSize(0.04);
   h1__5->GetZaxis()->SetTitleOffset(1);
   h1__5->Draw("H");
   
   TH1F *h1__6 = new TH1F("h1__6","test histogram",100,-5,5);
   h1__6->SetBinContent(6,1);
   h1__6->SetBinContent(10,1);
   h1__6->SetBinContent(11,3);
   h1__6->SetBinContent(12,3);
   h1__6->SetBinContent(13,7);
   h1__6->SetBinContent(14,12);
   h1__6->SetBinContent(15,10);
   h1__6->SetBinContent(16,11);
   h1__6->SetBinContent(17,10);
   h1__6->SetBinContent(18,19);
   h1__6->SetBinContent(19,20);
   h1__6->SetBinContent(20,39);
   h1__6->SetBinContent(21,55);
   h1__6->SetBinContent(22,56);
   h1__6->SetBinContent(23,88);
   h1__6->SetBinContent(24,116);
   h1__6->SetBinContent(25,139);
   h1__6->SetBinContent(26,209);
   h1__6->SetBinContent(27,243);
   h1__6->SetBinContent(28,312);
   h1__6->SetBinContent(29,379);
   h1__6->SetBinContent(30,474);
   h1__6->SetBinContent(31,631);
   h1__6->SetBinContent(32,752);
   h1__6->SetBinContent(33,878);
   h1__6->SetBinContent(34,944);
   h1__6->SetBinContent(35,1236);
   h1__6->SetBinContent(36,1355);
   h1__6->SetBinContent(37,1610);
   h1__6->SetBinContent(38,1791);
   h1__6->SetBinContent(39,2119);
   h1__6->SetBinContent(40,2290);
   h1__6->SetBinContent(41,2429);
   h1__6->SetBinContent(42,2810);
   h1__6->SetBinContent(43,2942);
   h1__6->SetBinContent(44,3287);
   h1__6->SetBinContent(45,3461);
   h1__6->SetBinContent(46,3683);
   h1__6->SetBinContent(47,3757);
   h1__6->SetBinContent(48,3917);
   h1__6->SetBinContent(49,3921);
   h1__6->SetBinContent(50,3935);
   h1__6->SetBinContent(51,3974);
   h1__6->SetBinContent(52,3900);
   h1__6->SetBinContent(53,3954);
   h1__6->SetBinContent(54,3727);
   h1__6->SetBinContent(55,3583);
   h1__6->SetBinContent(56,3483);
   h1__6->SetBinContent(57,3248);
   h1__6->SetBinContent(58,3002);
   h1__6->SetBinContent(59,2829);
   h1__6->SetBinContent(60,2560);
   h1__6->SetBinContent(61,2298);
   h1__6->SetBinContent(62,2128);
   h1__6->SetBinContent(63,1851);
   h1__6->SetBinContent(64,1566);
   h1__6->SetBinContent(65,1377);
   h1__6->SetBinContent(66,1193);
   h1__6->SetBinContent(67,968);
   h1__6->SetBinContent(68,894);
   h1__6->SetBinContent(69,707);
   h1__6->SetBinContent(70,589);
   h1__6->SetBinContent(71,470);
   h1__6->SetBinContent(72,395);
   h1__6->SetBinContent(73,313);
   h1__6->SetBinContent(74,245);
   h1__6->SetBinContent(75,188);
   h1__6->SetBinContent(76,172);
   h1__6->SetBinContent(77,96);
   h1__6->SetBinContent(78,78);
   h1__6->SetBinContent(79,65);
   h1__6->SetBinContent(80,38);
   h1__6->SetBinContent(81,42);
   h1__6->SetBinContent(82,34);
   h1__6->SetBinContent(83,25);
   h1__6->SetBinContent(84,20);
   h1__6->SetBinContent(85,8);
   h1__6->SetBinContent(86,5);
   h1__6->SetBinContent(87,7);
   h1__6->SetBinContent(88,5);
   h1__6->SetBinContent(89,2);
   h1__6->SetBinContent(90,3);
   h1__6->SetBinContent(91,2);
   h1__6->SetBinContent(93,1);
   h1__6->SetEntries(100000);
   
   ptstats = new TPaveStats(0.78,0.675,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats_LaTex = ptstats->AddText("Entries = 100000 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.0004727 #pm 0.003154");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.9973 #pm 0.00223");
   ptstats->SetOptStat(2210);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   h1__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(h1__6);
   h1__6->SetFillColor(2);
   h1__6->SetMarkerStyle(20);
   h1__6->SetMarkerSize(0.5);
   h1__6->GetXaxis()->SetTitle("x");
   h1__6->GetXaxis()->SetLabelSize(0.04);
   h1__6->GetXaxis()->SetTitleSize(0.04);
   h1__6->GetXaxis()->SetTitleOffset(1);
   h1__6->GetYaxis()->SetTitle("Entries");
   h1__6->GetYaxis()->SetLabelSize(0.04);
   h1__6->GetYaxis()->SetTitleSize(0.04);
   h1__6->GetYaxis()->SetTitleOffset(1.2);
   h1__6->GetZaxis()->SetLabelSize(0.04);
   h1__6->GetZaxis()->SetTitleSize(0.04);
   h1__6->GetZaxis()->SetTitleOffset(1);
   h1__6->Draw("E,P,SAME");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
