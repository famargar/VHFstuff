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

    vector<double> const TbotWbot_Yb{7.0, 1.00, 0.70, 0.55, 0.40, 0.30, 0.28, 0.28, 0.28};
    vector<double> const ATLAS_Yb{0.3, 0.25, 0.15, 0.12, 0.10, 0.08, 0.08, 0.08, 0.08};

    vector<double> const theory_Yb_C10{5.820,   3.860,  2.720,  1.950, 1.350, 0.982, 0.716, 0.540, 0.408};
    vector<double> const theory_Yb_C07{2.910, 1.930,  1.360,  0.975, 0.675, 0.491, 0.358, 0.270, 0.204}; 
    vector<double> const theory_Yb_C05{2.910/2, 1.930/2,  1.360/2,  0.975/2, 0.675/2, 0.491/2, 0.358/2, 0.270/2, 0.204/2 }; 
    

    //theory_Tb=scale_Tb*theory_Tt;

    // Canvas
    TCanvas canvas("canvas", "", 800, 800);
    canvas.SetTicks();
    canvas.SetGrid(kFALSE);
    canvas.SetGridy(kFALSE);
    
    // Style
    gStyle->SetStripDecimals(kFALSE);
    
    
    // Graphs with observed and mean expected limits
    TGraph graph_Nikoz_Yb(x.size(), x.data(), TbotWbot_Yb.data());
    graph_Nikoz_Yb.SetLineColor(kCyan-2);
    graph_Nikoz_Yb.SetLineStyle(1);
    graph_Nikoz_Yb.SetLineWidth(2);

    //TGraph graph_ATLAS_Yb(x.size(), x.data(), ATLAS_Yb.data());
    //graph_ATLAS_Yb.SetLineColor(kCyan-2);
    //graph_ATLAS_Yb.SetLineStyle(1);
    //graph_ATLAS_Yb.SetLineWidth(2);

    TGraph graph_theory_Yb_C10(x.size(), x.data(), theory_Yb_C10.data());
    graph_theory_Yb_C10.SetLineColor(kGray+1);
    graph_theory_Yb_C10.SetLineStyle(2);
    graph_theory_Yb_C10.SetLineWidth(3);

    TGraph graph_theory_Yb_C07(x.size(), x.data(), theory_Yb_C07.data());
    graph_theory_Yb_C07.SetLineColor(kGray+2);
    graph_theory_Yb_C07.SetLineStyle(2);
    graph_theory_Yb_C07.SetLineWidth(3);

    TGraph graph_theory_Yb_C05(x.size(), x.data(), theory_Yb_C05.data());
    graph_theory_Yb_C05.SetLineColor(kGray+3);
    graph_theory_Yb_C05.SetLineStyle(2);
    graph_theory_Yb_C05.SetLineWidth(3);

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
    graph_Nikoz_Yb.Draw("a3");
    //graph_ATLAS_Yb.Draw("l");
    graph_theory_Yb_C10.Draw("l");
    graph_theory_Yb_C07.Draw("l");
    graph_theory_Yb_C05.Draw("l");

    mum1.Draw("same");
    //mup1.Draw("same");
    latexm1.DrawLatex(.5,270, "#sigma_{VLQ}");
    //latexp1.DrawLatex(.5,30, "#sigma_{tHq}(C_{t} = 1)");    
    
    // Decoration for axes    
    graph_Nikoz_Yb.SetTitle(";m_{Y}(GeV);"
     "95% CL limit on #sigma x BR (pb)");
    graph_Nikoz_Yb.GetYaxis()->SetRangeUser(0.1, 10.0);
    graph_Nikoz_Yb.GetXaxis()->SetTitleOffset(1.3);
    graph_Nikoz_Yb.GetYaxis()->SetTitleOffset(1.3);
    graph_Nikoz_Yb.GetYaxis()->SetLabelSize(0.03);
    graph_Nikoz_Yb.GetXaxis()->SetLabelSize(0.03);
    
    
    // Add a legend
    TLegend legend(0.37, 0.65, 0.85, 0.85);
    legend.SetLineColor(0);
    legend.SetHeader("Yb, Y #rightarrow Wb");
    legend.AddEntry((TObject*)0, " ", " ");	
    legend.SetTextSize(0.030);
    //legend.SetMargin(0.2);
    //legend.SetEntrySeparation(5);
    legend.AddEntry(&graph_Nikoz_Yb, "B2G-16-006 Yb #rightarrow Wbb #rightarrow l#nubb", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Yb_C10, "#sigma_{NLO}, c_{Wb}=1.0, BR(Wb)=1.0","l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Yb_C07, "#sigma_{NLO}, c_{Wb}=0.7, BR(Wb)=1.0","l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Yb_C05, "#sigma_{NLO}, c_{Wb}=0.5, BR(Wb)=1.0","l");
    
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
    
    graph_Nikoz_Yb.Draw("same");
    
    // Save the figure
    canvas.Print("plotYComparison.pdf");
    canvas.Print("plotYComparison.C");
    cout<<"printed"<<endl;

}

#endif
