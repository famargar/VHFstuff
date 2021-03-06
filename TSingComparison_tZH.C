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
    vector<double> const ThadHhad_Tb{10,     10,   10,  0.9,  0.5,  0.3,  0.3,  0.3, 0.30};
    vector<double> const TlepHhad_Tb{5,     2.5,  1.2,  0.8,  0.6, 0.45,  0.4,  0.4, 0.35};
    //vector<double> const TlepHhad_Tt{3.5,     2,  1.1,  0.8,  0.6, 0.45,  0.4,  0.4, 0.35};
    vector<double> const ThadZlep_Tb{0.62, 0.55,  0.4, 0.35,  0.3, 0.25,  0.2, 0.15, 0.15};
    vector<double> const ThadZlep_Bt{0.30, 0.25,  0.2, 0.20, 0.15, 0.15, 0.15, 0.15, 0.15}; 
    //vector<double> const ThadZlep_Bb{0.70, 0.55, 0.45, 0.35, 0.30, 0.30, 0.25, 0.25, 0.20};
    //vector<double> const TbotWbot_Yb{10.0, 1.00, 0.70, 0.50, 0.35, 0.25, 0.25, 0.25, 0.25};

    vector<double> const theory_Tb_C1{2.910/2, 1.930/2,  1.360/2,  0.975/2, 0.675/2, 0.491/2, 0.358/2, 0.270/2, 0.204/2}; 
    vector<double> const theory_Tb_C14{2.910, 1.930,  1.360,  0.975, 0.675, 0.491, 0.358, 0.270, 0.204}; 
    vector<double> const theory_Tb_C2{2.910*2, 1.930*2,  1.360*2,  0.975*2, 0.675*2, 0.491*2, 0.358*2, 0.270*2, 0.204*2}; 


    //theory_Tb=scale_Tb*theory_Tt;

    // Canvas
    TCanvas canvas("canvas", "", 800, 800);
    canvas.SetTicks();
    canvas.SetGrid(kFALSE);
    canvas.SetGridy(kFALSE);
    
    // Style
    gStyle->SetStripDecimals(kFALSE);
    
    
    // Graphs with observed and mean expected limits
    TGraph graph_Robert_Tb(x.size(), x.data(), ThadHhad_Tb.data());
    graph_Robert_Tb.SetLineColor(kCyan-7);
    graph_Robert_Tb.SetLineWidth(2);

    TGraph graph_Heiner_Tb(x.size(), x.data(), TlepHhad_Tb.data());
    graph_Heiner_Tb.SetLineColor(kCyan-6);
    graph_Heiner_Tb.SetLineStyle(1);
    graph_Heiner_Tb.SetLineWidth(2);
    
    /*
    TGraph graph_Heiner_Tt(x.size(), x.data(), TlepHhad_Tt.data());
    graph_Heiner_Tt.SetLineColor(kCyan-6);
    graph_Heiner_Tt.SetLineStyle(2);
    graph_Heiner_Tt.SetLineWidth(2);
    */
    
    TGraph graph_Aniello_Tb(x.size(), x.data(), ThadZlep_Tb.data());
    graph_Aniello_Tb.SetLineColor(kCyan-1);
    graph_Aniello_Tb.SetLineStyle(1);
    graph_Aniello_Tb.SetLineWidth(2);

    /*
    TGraph graph_Nikoz_Yb(x.size(), x.data(), TbotWbot_Yb.data());
    graph_Nikoz_Yb.SetLineColor(kCyan-2);
    graph_Nikoz_Yb.SetLineStyle(1);
    graph_Nikoz_Yb.SetLineWidth(2);
    */

    TGraph graph_theory_Tb_C1(x.size(), x.data(), theory_Tb_C1.data());
    graph_theory_Tb_C1.SetLineColor(kGray+3);
    graph_theory_Tb_C1.SetLineStyle(2);
    graph_theory_Tb_C1.SetLineWidth(4);
    
    TGraph graph_theory_Tb_C14(x.size(), x.data(), theory_Tb_C14.data());
    graph_theory_Tb_C14.SetLineColor(kGray+2);
    graph_theory_Tb_C14.SetLineStyle(2);
    graph_theory_Tb_C14.SetLineWidth(4);

    TGraph graph_theory_Tb_C2(x.size(), x.data(), theory_Tb_C2.data());
    graph_theory_Tb_C2.SetLineColor(kGray+1);
    graph_theory_Tb_C2.SetLineStyle(2);
    graph_theory_Tb_C2.SetLineWidth(4);
    
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

    gPad->SetLogy(1);
    graph_Robert_Tb.Draw("a3");
    graph_Heiner_Tb.Draw("l");
    //graph_Heiner_Tt.Draw("l");
    graph_Aniello_Tb.Draw("l");
    //graph_Nikoz_Yb.Draw("l");
    graph_theory_Tb_C1.Draw("l");
    graph_theory_Tb_C14.Draw("l");
    graph_theory_Tb_C2.Draw("l");

    mum1.Draw("same");
    //mup1.Draw("same");
    latexm1.DrawLatex(.5,270, "#sigma_{VLQ}");
    //latexp1.DrawLatex(.5,30, "#sigma_{tHq}(C_{t} = 1)");    
    
    // Decoration for axes
    
    graph_Robert_Tb.SetTitle(";m_{T}(GeV);"
     "95% CL limit on #sigma x BR (pb)");
    graph_Robert_Tb.GetYaxis()->SetRangeUser(0.1, 10.0);
    graph_Robert_Tb.GetXaxis()->SetTitleOffset(1.3);
    graph_Robert_Tb.GetYaxis()->SetTitleOffset(1.3);
    graph_Robert_Tb.GetYaxis()->SetLabelSize(0.03);
    graph_Robert_Tb.GetXaxis()->SetLabelSize(0.03);
    
    
    // Add a legend
    TLegend legend(0.40, 0.65, 0.85, 0.85);
    legend.SetLineColor(0);
    legend.SetHeader("Tb, T #rightarrow Zt/Ht, singlet");
    legend.AddEntry((TObject*)0, " ", " ");	
    legend.SetTextSize(0.025);
    //legend.SetMargin(0.2);
    //legend.SetEntrySeparation(5);
    legend.AddEntry(&graph_Robert_Tb, "B2G-16-005 Tb #rightarrow Htb #rightarrow bb bqqb  ", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_Heiner_Tb, "B2G-15-008 Tb #rightarrow Htb #rightarrow bb bl#nub ", "l");
    //legend.AddEntry((TObject*)0, "", "");
    //legend.AddEntry(&graph_Heiner_Tt, "B2G-15-008 Heiner Tt", "l");
    //legend.AddEntry((TObject*)0, "", "");
    //legend.AddEntry(&graph_Nikoz_Yb, "B2G-16-006 Nikoz Tb", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_Aniello_Tb, "B2G-16-001 Tb #rightarrow tZb #rightarrow ll bqqb", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Tb_C1, "#sigma_{NLO}, c_{Wb}=1.0, BR(tZ/tH)=0.25", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Tb_C14,"#sigma_{NLO}, c_{Wb}=1.4, BR(tZ/tH)=0.25", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Tb_C2, "#sigma_{NLO}, c_{Wb}=2.0, BR(tZ/tH)=0.25", "l");
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
    
    graph_Robert_Tb.Draw("same");
    //graph_Heiner_Tb.Draw("same");
    //gPad->SetLogy(1);
    
    // Save the figure
    canvas.Print("plotTSingComparison_tZH.pdf");
    canvas.Print("plotTSingComparison_tZH.C");
    cout<<"printed"<<endl;

}

#endif
