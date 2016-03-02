# VHFstuff
These macros create the summary plots for the single Very Heavy Fermions analyses, according to different multiplets representations

YComparison.C           compares Y analyses limits w/ theory 

TSingComparison.C       compares T singlet analysis with Wb final state w/ theory

TSingComparison_tZH.C   compares T singlet analyses with T->tZ/T->tZ final states w/theory

TDoubComparison_tZH.C   compares T doublet analyses w/ theory

BSingComparison.C       compares B singlet analyses w/ theory (Bb theory missing)

The macros need to be compiled with a C++11 even compiler, and the resulting a.out executed.
They produce plot<VLQ><representation>Comparison.C/.pdf files containing the corresponding VLQ/representation plot
