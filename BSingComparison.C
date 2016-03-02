#include <vector>
#include <iostream>
#include "TStyle.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "TLatex.h"
#include "TGraphAsymmErrors.h"
#include "TAxis.h"
#include "TLine.h"

using namespace std;

#ifndef __CINT__

int main() {

    // Data points for limits
    //vector<double> const x{0.5, 1., 1.5, 2., 2.4, 2.7, 3.};
    vector<double> const x{700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};

    // limits in pb
    vector<double> const BhadZlep_Bt{0.30, 0.25,  0.2, 0.20, 0.15, 0.15, 0.15, 0.15, 0.15}; 
    vector<double> const BhadZlep_Bb{0.70, 0.60, 0.45, 0.31, 0.31, 0.31, 0.30, 0.30, 0.28};
    vector<double> const BhadHhad_Bb{  10, 6.00, 4.00, 2.50, 1.60, 1.00, 0.80, 0.60, 0.40};
    vector<double> const BhadZhad_Bb{  10, 10.0, 5.00, 2.50, 2.10, 2.00, 1.60, 1.50, 1.20};
    
    vector<double> const theory_Bt_C10{0.698*0.5, 0.500*0.5, 0.365*0.5, 0.271*0.5, 0.203*0.5, 0.152*0.5, 0.116*0.5, 0.0894*0.5, 0.0692*0.5};
    vector<double> const theory_Bt_C20{0.698*2, 0.500*2, 0.365*2, 0.271*2, 0.203*2, 0.152*2, 0.116*2, 0.0894*2, 0.0692*2};
    vector<double> const theory_Bt_C50{0.698*12.5, 0.500*12.5, 0.365*12.5, 0.271*12.5, 0.203*12.5, 0.152*12.5, 0.116*12.5, 0.0894*12.5, 0.0692*12.5};

    // Canvas
    TCanvas canvas("canvas", "", 1200, 1200);
    canvas.SetTicks();
    canvas.SetGrid(kFALSE);
    canvas.SetGridy(kFALSE);
    
    // Style
    gStyle->SetStripDecimals(kFALSE);
    
    // Graphs with observed and mean expected limits

    TGraph graph_Aniello_Bt(x.size(), x.data(), BhadZlep_Bt.data());
    graph_Aniello_Bt.SetLineColor(kYellow+3);
    graph_Aniello_Bt.SetLineStyle(1);
    graph_Aniello_Bt.SetLineWidth(2);

    TGraph graph_Aniello_Bb(x.size(), x.data(), BhadZlep_Bb.data());
    graph_Aniello_Bb.SetLineColor(kYellow+2);
    graph_Aniello_Bb.SetLineStyle(1);
    graph_Aniello_Bb.SetLineWidth(2);
    
    TGraph graph_Giorgia_BbH(x.size(), x.data(), BhadHhad_Bb.data());
    graph_Giorgia_BbH.SetLineColor(kYellow+1);
    graph_Giorgia_BbH.SetLineStyle(1);
    graph_Giorgia_BbH.SetLineWidth(2);

    TGraph graph_Giorgia_BbZ(x.size(), x.data(), BhadZhad_Bb.data());
    graph_Giorgia_BbZ.SetLineColor(kYellow);
    graph_Giorgia_BbZ.SetLineStyle(1);
    graph_Giorgia_BbZ.SetLineWidth(2);

    TGraph graph_theory_Bt_C10(x.size(), x.data(), theory_Bt_C10.data());
    graph_theory_Bt_C10.SetLineColor(kBlack);
    graph_theory_Bt_C10.SetLineStyle(2);
    graph_theory_Bt_C10.SetLineWidth(3);

    //TGraph graph_theory_Bt_C14(x.size(), x.data(), theory_Bt_C14.data());
    //graph_theory_Bt_C14.SetLineColor(kGray+3);
    //graph_theory_Bt_C14.SetLineStyle(2);
    //graph_theory_Bt_C14.SetLineWidth(3);

    TGraph graph_theory_Bt_C20(x.size(), x.data(), theory_Bt_C20.data());
    graph_theory_Bt_C20.SetLineColor(kGray+2);
    graph_theory_Bt_C20.SetLineStyle(2);
    graph_theory_Bt_C20.SetLineWidth(3);

    TGraph graph_theory_Bt_C50(x.size(), x.data(), theory_Bt_C50.data());
    graph_theory_Bt_C50.SetLineColor(kGray+1);
    graph_theory_Bt_C50.SetLineStyle(2);
    graph_theory_Bt_C50.SetLineWidth(3);
    
    // add reference lines...
    TLine mum1(0.25, 231, 3.25, 231);
    TLine mup1(0.25,  18, 3.25,  18);
    mum1.SetLineWidth(2);
    mum1.SetLineColor(2);
    mup1.SetLineWidth(2);

    // ..and corresponding text on top of them
    TLatex latexm1;
    TLatex latexp1;
    latexm1.SetTextAlign(11);
    latexp1.SetTextAlign(10);
    latexm1.SetTextSize(0.030);
    latexp1.SetTextSize(0.030);

    /*
    // Draw graphs
    band2S.Draw("a3");
    band1S.Draw("3");
    graph_Heiner_Tb.Draw("l");
    */

    gPad->SetLogy(1);
    //graph_Robert_Tb.Draw("a3");
    graph_Aniello_Bt.Draw("a3");
    graph_Aniello_Bb.Draw("l");
    graph_Giorgia_BbH.Draw("l");
    graph_Giorgia_BbZ.Draw("l");
    graph_theory_Bt_C10.Draw("l");
    //graph_theory_Bt_C14.Draw("l");
    graph_theory_Bt_C20.Draw("l");
    graph_theory_Bt_C50.Draw("l");

    mum1.Draw("same");
    //mup1.Draw("same");
    latexm1.DrawLatex(.5,270, "#sigma_{VLQ}");
    //latexp1.DrawLatex(.5,30, "#sigma_{tHq}(C_{t} = 1)");

    // Decoration for axes
    
    graph_Aniello_Bt.SetTitle(";m_{B}(GeV);"
     "95% CL limit on #sigma x BR (pb)");
    graph_Aniello_Bt.GetYaxis()->SetRangeUser(0.1, 10.0);
    graph_Aniello_Bt.GetXaxis()->SetTitleOffset(1.3);
    graph_Aniello_Bt.GetYaxis()->SetTitleOffset(1.3);
    graph_Aniello_Bt.GetYaxis()->SetLabelSize(0.03);
    graph_Aniello_Bt.GetXaxis()->SetLabelSize(0.03);
    
    
    // Add a legend
    TLegend legend(0.45, 0.65, 0.85, 0.85);
    legend.SetLineColor(0);
    legend.SetHeader("B #rightarrow Hb/Zb analyses - singlet");
    legend.AddEntry((TObject*)0, " ", " ");	
    legend.SetTextSize(0.025);
    //legend.SetMargin(3);
    //legend.SetEntrySeparation(5);
    legend.AddEntry(&graph_Aniello_Bt, "B2G-16-001 Bt #rightarrow Zbt #rightarrow llbbqq ", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_Aniello_Bb, "B2G-16-001 Bb #rightarrow Zbb #rightarrow llbbqq ", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_Giorgia_BbH, "B2G-99-999 Bb #rightarrow Hbb #rightarrow bbbbqq ", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_Giorgia_BbZ, "B2G-99-999 Bb #rightarrow Zbb #rightarrow bbbbbqq ", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Bt_C10, "#sigma_{NLO}(Bt), c_{Wt}=1.0, BR(bZ/bH)=0.25", "l");
    //legend.AddEntry((TObject*)0, "", "");
    //legend.AddEntry(&graph_theory_Bt_C14, "#sigma_{NLO}, c_{Wt}=1.4, BR(bZ/bH)=0.25", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Bt_C20, "#sigma_{NLO}(Bt), c_{Wt}=2.0, BR(bZ/bH)=0.25", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Bt_C50, "#sigma_{NLO}(Bt), c_{Wt}=5.0, BR(bZ/bH)=0.25", "l");
    legend.Draw();
    
    
    // CMS labels
    //TLatex cmsLabel(0.12, 0.91, "#scale[1.2]{#font[62]{CMS}} #font[52]{Preliminary}");
    TLatex cmsLabel(0.12, 0.91, "#scale[1.2]{#font[62]{CMS}}");
    cmsLabel.SetNDC();
    cmsLabel.SetTextSize(0.04);
    cmsLabel.SetTextAlign(11);
    
    TLatex energyLabel(0.9, 0.91, "#font[42]{2.3 fb^{-1} (13 TeV)}");
    energyLabel.SetNDC();
    energyLabel.SetTextSize(0.04);
    energyLabel.SetTextAlign(31);
    
    cmsLabel.Draw();
    energyLabel.Draw();
    
    graph_Aniello_Bt.Draw("same");
    //graph_Aniello_Bb.Draw("same");
    //gPad->SetLogy(1);
    
    // Save the figure
    canvas.Print("plotBSingComparison.pdf");
    canvas.Print("plotBSingComparison.C");
    cout<<"printed"<<endl;

}

#endif
