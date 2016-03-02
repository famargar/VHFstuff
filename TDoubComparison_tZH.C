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
    vector<double> const TlepHhad_Tt{3.5,     2,  1.1,  0.8,  0.6, 0.45,  0.4,  0.4, 0.35};
    vector<double> const ThadZlep_Tb{0.62, 0.55,  0.4, 0.35,  0.3, 0.25,  0.2, 0.15, 0.15}; // TO BE CHANGED!
    vector<double> const theory_Tt_C10{0.500/2, 0.365/2, 0.271/2, 0.203/2, 0.152/2, 0.116/2, 0.0894/2, 0.0692/2, 0.054/2};
    vector<double> const theory_Tt_C14{0.500, 0.365, 0.271, 0.203, 0.152, 0.116, 0.0894, 0.0692, 0.054};
    vector<double> const theory_Tt_C20{0.500*2, 0.365*2, 0.271*2, 0.203*2, 0.152*2, 0.116*2, 0.0894*2, 0.0692*2, 0.054*2};
     vector<double> const theory_Tt_C30{0.500*9/2, 0.365*9/2, 0.271*9/2, 0.203*9/2, 0.152*9/2, 0.116*9/2, 0.0894*9/2, 0.0692*9/2, 0.054*9/2};

    // Canvas
    TCanvas canvas("canvas", "", 1200, 1200);
    canvas.SetTicks();
    canvas.SetGrid(kFALSE);
    canvas.SetGridy(kFALSE);
    
    // Style
    gStyle->SetStripDecimals(kFALSE);
    
    
    // Graphs with observed and mean expected limits
    
    //TGraph graph_Robert_Tb(x.size(), x.data(), ThadHhad_Tb.data());
    //graph_Robert_Tb.SetLineColor(kCyan-7);
    //graph_Robert_Tb.SetLineWidth(2);

    TGraph graph_Heiner_Tt(x.size(), x.data(), TlepHhad_Tt.data());
    graph_Heiner_Tt.SetLineColor(kCyan-6);
    graph_Heiner_Tt.SetLineStyle(1);
    graph_Heiner_Tt.SetLineWidth(2);
    
    TGraph graph_Aniello_Tb(x.size(), x.data(), ThadZlep_Tb.data());
    graph_Aniello_Tb.SetLineColor(kCyan-1);
    graph_Aniello_Tb.SetLineStyle(1);
    graph_Aniello_Tb.SetLineWidth(2);

    TGraph graph_theory_Tt_C10(x.size(), x.data(), theory_Tt_C10.data());
    graph_theory_Tt_C10.SetLineColor(kBlack);
    graph_theory_Tt_C10.SetLineStyle(2);
    graph_theory_Tt_C10.SetLineWidth(3);

    TGraph graph_theory_Tt_C14(x.size(), x.data(), theory_Tt_C14.data());
    graph_theory_Tt_C14.SetLineColor(kGray+3);
    graph_theory_Tt_C14.SetLineStyle(2);
    graph_theory_Tt_C14.SetLineWidth(3);

    TGraph graph_theory_Tt_C20(x.size(), x.data(), theory_Tt_C20.data());
    graph_theory_Tt_C20.SetLineColor(kGray+2);
    graph_theory_Tt_C20.SetLineStyle(2);
    graph_theory_Tt_C20.SetLineWidth(3);
    
    TGraph graph_theory_Tt_C30(x.size(), x.data(), theory_Tt_C30.data());
    graph_theory_Tt_C30.SetLineColor(kGray+1);
    graph_theory_Tt_C30.SetLineStyle(2);
    graph_theory_Tt_C30.SetLineWidth(3);
   
    /*
    // Graphs with error bands
    vector<double> err1SUp(x.size()), err1SDown(x.size());
    
    for (unsigned i = 0; i < x.size(); ++i)
    {
        err1SUp.at(i) = limit1SUp.at(i) - limitMean.at(i);
        err1SDown.at(i) = limitMean.at(i) - limit1SDown.at(i);
    }
    
    TGraphAsymmErrors band1S(x.size(), x.data(), limitMean.data(), nullptr, nullptr,
     err1SDown.data(), err1SUp.data());
    band1S.SetFillColor(kGreen);
    
    vector<double> err2SUp(x.size()), err2SDown(x.size());
    
    for (unsigned i = 0; i < x.size(); ++i)
    {
        err2SUp.at(i) = limit2SUp.at(i) - limitMean.at(i);
        err2SDown.at(i) = limitMean.at(i) - limit2SDown.at(i);
    }
    
    TGraphAsymmErrors band2S(x.size(), x.data(), limitMean.data(), nullptr, nullptr,
     err2SDown.data(), err2SUp.data());
    band2S.SetFillColor(kYellow);
    */

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
    graph_Heiner_Tt.Draw("a3");
    graph_Aniello_Tb.Draw("l");
    graph_theory_Tt_C10.Draw("l");
    graph_theory_Tt_C14.Draw("l");
    graph_theory_Tt_C20.Draw("l");
    graph_theory_Tt_C30.Draw("l");

    mum1.Draw("same");
    //mup1.Draw("same");
    latexm1.DrawLatex(.5,270, "#sigma_{VLQ}");
    //latexp1.DrawLatex(.5,30, "#sigma_{tHq}(C_{t} = 1)");    
    
    // Decoration for axes
    
    graph_Heiner_Tt.SetTitle(";m_{T}(GeV);"
     "95% CL limit on #sigma x BR (pb)");
    graph_Heiner_Tt.GetYaxis()->SetRangeUser(0.1, 10.0);
    graph_Heiner_Tt.GetXaxis()->SetTitleOffset(1.3);
    graph_Heiner_Tt.GetYaxis()->SetTitleOffset(1.3);
    graph_Heiner_Tt.GetYaxis()->SetLabelSize(0.03);
    graph_Heiner_Tt.GetXaxis()->SetLabelSize(0.03);
    
    
    // Add a legend
    TLegend legend(0.32, 0.65, 0.85, 0.85);
    legend.SetLineColor(0);
    legend.SetHeader("Tt, T #rightarrow Zt/Ht, doublet");
    legend.AddEntry((TObject*)0, " ", " ");	
    legend.SetTextSize(0.030);
    //legend.SetMargin(0.2);
    //legend.SetEntrySeparation(5);
    legend.AddEntry(&graph_Heiner_Tt,  "B2G-15-008 Tt #rightarrow Htt #rightarrow bb bl#nubqq ", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_Aniello_Tb, "B2G-16-001 Tt #rightarrow Ztt #rightarrow ll bbqqq", "l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Tt_C10, "#sigma_{NLO}, c_{tZ}=1.0, BR(tZ/tH)=0.5","l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Tt_C14, "#sigma_{NLO}, c_{tZ}=1.4, BR(tZ/tH)=0.5","l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Tt_C20, "#sigma_{NLO}, c_{tZ}=2.0, BR(tZ/tH)=0.5","l");
    legend.AddEntry((TObject*)0, "", "");
    legend.AddEntry(&graph_theory_Tt_C30, "#sigma_{NLO}, c_{tZ}=3.0, BR(tZ/tH)=0.5","l");
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
    
    graph_Heiner_Tt.Draw("same");
    //graph_Heiner_Tt.Draw("same");
    //gPad->SetLogy(1);
    
    // Save the figure
    canvas.Print("plotTDoubComparison_tZH.pdf");
    canvas.Print("plotTDoubComparison_tZH.C");
    cout<<"printed"<<endl;

}

#endif
