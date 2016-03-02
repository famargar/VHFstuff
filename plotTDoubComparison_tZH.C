{
//=========Macro generated from canvas: canvas/
//=========  (Wed Feb 24 21:36:51 2016) by ROOT version5.34/23
   TCanvas *canvas = new TCanvas("canvas", "",0,0,1200,1200);
   canvas->SetHighLightColor(2);
   canvas->Range(500,-1.25,1700,1.25);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(2);
   canvas->SetLogy();
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(9);
   graph->SetName("Graph0");
   graph->SetTitle(";m_{T}(GeV);95% CL limit on #sigma x BR (pb)");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#66cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,700,3.5);
   graph->SetPoint(1,800,2);
   graph->SetPoint(2,900,1.1);
   graph->SetPoint(3,1000,0.8);
   graph->SetPoint(4,1100,0.6);
   graph->SetPoint(5,1200,0.45);
   graph->SetPoint(6,1300,0.4);
   graph->SetPoint(7,1400,0.4);
   graph->SetPoint(8,1500,0.35);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,620,1580);
   Graph_Graph1->SetMinimum(0.1);
   Graph_Graph1->SetMaximum(10);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("m_{T}(GeV)");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("95% CL limit on #sigma x BR (pb)");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("a3");
   
   graph = new TGraph(9);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#336666");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,700,0.62);
   graph->SetPoint(1,800,0.55);
   graph->SetPoint(2,900,0.4);
   graph->SetPoint(3,1000,0.35);
   graph->SetPoint(4,1100,0.3);
   graph->SetPoint(5,1200,0.25);
   graph->SetPoint(6,1300,0.2);
   graph->SetPoint(7,1400,0.15);
   graph->SetPoint(8,1500,0.15);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,620,1580);
   Graph_Graph2->SetMinimum(0.103);
   Graph_Graph2->SetMaximum(0.667);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("l");
   
   graph = new TGraph(9);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,700,0.25);
   graph->SetPoint(1,800,0.1825);
   graph->SetPoint(2,900,0.1355);
   graph->SetPoint(3,1000,0.1015);
   graph->SetPoint(4,1100,0.076);
   graph->SetPoint(5,1200,0.058);
   graph->SetPoint(6,1300,0.0447);
   graph->SetPoint(7,1400,0.0346);
   graph->SetPoint(8,1500,0.027);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,620,1580);
   Graph_Graph3->SetMinimum(0.0047);
   Graph_Graph3->SetMaximum(0.2723);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("l");
   
   graph = new TGraph(9);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#333333");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,700,0.5);
   graph->SetPoint(1,800,0.365);
   graph->SetPoint(2,900,0.271);
   graph->SetPoint(3,1000,0.203);
   graph->SetPoint(4,1100,0.152);
   graph->SetPoint(5,1200,0.116);
   graph->SetPoint(6,1300,0.0894);
   graph->SetPoint(7,1400,0.0692);
   graph->SetPoint(8,1500,0.054);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,620,1580);
   Graph_Graph4->SetMinimum(0.0094);
   Graph_Graph4->SetMaximum(0.5446);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("l");
   
   graph = new TGraph(9);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#666666");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,700,1);
   graph->SetPoint(1,800,0.73);
   graph->SetPoint(2,900,0.542);
   graph->SetPoint(3,1000,0.406);
   graph->SetPoint(4,1100,0.304);
   graph->SetPoint(5,1200,0.232);
   graph->SetPoint(6,1300,0.1788);
   graph->SetPoint(7,1400,0.1384);
   graph->SetPoint(8,1500,0.108);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","Graph",100,620,1580);
   Graph_Graph5->SetMinimum(0.0188);
   Graph_Graph5->SetMaximum(1.0892);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("l");
   
   graph = new TGraph(9);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#999999");
   graph->SetLineColor(ci);
   graph->SetLineStyle(2);
   graph->SetLineWidth(3);
   graph->SetPoint(0,700,2.25);
   graph->SetPoint(1,800,1.6425);
   graph->SetPoint(2,900,1.2195);
   graph->SetPoint(3,1000,0.9135);
   graph->SetPoint(4,1100,0.684);
   graph->SetPoint(5,1200,0.522);
   graph->SetPoint(6,1300,0.4023);
   graph->SetPoint(7,1400,0.3114);
   graph->SetPoint(8,1500,0.243);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","Graph",100,620,1580);
   Graph_Graph6->SetMinimum(0.0423);
   Graph_Graph6->SetMaximum(2.4507);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("l");
   TLine *line = new TLine(0.25,231,3.25,231);
   line->SetLineColor(2);
   line->SetLineWidth(2);
   line->Draw();
   TLatex *   tex = new TLatex(0.5,270,"#sigma_{VLQ}");
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.32,0.65,0.85,0.85,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.03);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Tt, T #rightarrow Zt/Ht, doublet","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL"," "," ");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","B2G-15-008 Tt #rightarrow Htt #rightarrow bb bl#nubqq ","l");

   ci = TColor::GetColor("#66cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","B2G-16-001 Tt #rightarrow Ztt #rightarrow ll bbqqq","l");

   ci = TColor::GetColor("#336666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","#sigma_{NLO}, c_{tZ}=1.0, BR(tZ/tH)=0.5","l");
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","#sigma_{NLO}, c_{tZ}=1.4, BR(tZ/tH)=0.5","l");

   ci = TColor::GetColor("#333333");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph4","#sigma_{NLO}, c_{tZ}=2.0, BR(tZ/tH)=0.5","l");

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph5","#sigma_{NLO}, c_{tZ}=3.0, BR(tZ/tH)=0.5","l");

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.12,0.91,"#scale[1.2]{#font[62]{CMS}}");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9,0.91,"#font[42]{2.3 fb^{-1} (13 TeV)}");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   graph = new TGraph(9);
   graph->SetName("Graph0");
   graph->SetTitle(";m_{T}(GeV);95% CL limit on #sigma x BR (pb)");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#66cccc");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetPoint(0,700,3.5);
   graph->SetPoint(1,800,2);
   graph->SetPoint(2,900,1.1);
   graph->SetPoint(3,1000,0.8);
   graph->SetPoint(4,1100,0.6);
   graph->SetPoint(5,1200,0.45);
   graph->SetPoint(6,1300,0.4);
   graph->SetPoint(7,1400,0.4);
   graph->SetPoint(8,1500,0.35);
   
   TH1F *Graph_Graph_Graph17 = new TH1F("Graph_Graph_Graph17","",100,620,1580);
   Graph_Graph_Graph17->SetMinimum(0.1);
   Graph_Graph_Graph17->SetMaximum(10);
   Graph_Graph_Graph17->SetDirectory(0);
   Graph_Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph17->SetLineColor(ci);
   Graph_Graph_Graph17->GetXaxis()->SetTitle("m_{T}(GeV)");
   Graph_Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph17->GetXaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph17->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph17->GetXaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph17->GetYaxis()->SetTitle("95% CL limit on #sigma x BR (pb)");
   Graph_Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph17->GetYaxis()->SetLabelSize(0.03);
   Graph_Graph_Graph17->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph17->GetYaxis()->SetTitleOffset(1.3);
   Graph_Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph17->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph17);
   
   graph->Draw("");
   canvas->Modified();
   canvas->cd();
   canvas->SetSelected(canvas);
}
