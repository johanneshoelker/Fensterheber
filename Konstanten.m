% Mechanik
mF  =2.3;       %kg     Masse Fensterscheibe
mS  =0.9;       %kg     Masse Schlitten
g   =9.81;      %m/s²   Fallbeschleunigung
da  =0.022;     %m      Durchmesser Antriebsrolle
mueH=0.4;       %       Haftreibungskoeffizient
mueG=0.35;      %       Gleitreibungskoeffizient
lF  =0.375;     %m      Gesamtweg des Fensters
d   =50;        %Nm/s   Dämpfung
c   =10000;     %N/m    Federsteifigkeit

%Haftkraft muss größer/gleich der gesamten Gewichtskraft sein:
FR_Haft =(mF+mS)*g+0.1       %N   
FD      =FR_Haft/(4*mueH)%N Druckkraft der Filzgleiter (bleibt konstant)
FR_Gleit=4*mueG*FD       %N

%Die Seilkraft muss gleich der Gewichts- und der Haftkraft sein:
F_Seil_Haft=(mF+mS)*g+FR_Haft+0.1   %N
F_Seil_Gleit=(mF+mS)*g+FR_Gleit+0.1 %N

M_Mot_Haft=F_Seil_Haft*da/2         %Nm
M_Mot_Betrieb=F_Seil_Gleit*da/2     %Nm

%Elektromotor
Ua=24           %V      Nennspannung Motor
%Induktivität abhängig vom gewählten Motor
J=1.8           %g*cm²  Trägheitsmoment Motor
Ta=0.000888     %s      Zeitkonstante des Motors
Ra=1            %Ohm    NOCH BERECHNEN
L=Ta/Ra         %H      Induktivität des Motors
k4=1            %NOCH BERECHNEN
k3=1            %NOCH BERECHNEN
ks=1            %NOCH BERECHNEN

Umfang_Rolle=pi*da;
Umdrehungen_Rolle=lF/Umfang_Rolle   %Umdrehungen
n_Getriebe_s=Umdrehungen_Rolle/9     %Umdrehungen/s
n_Getriebe=n_Getriebe_s*60            %Umdrehungen/min
M=F_Seil_Haft*da/2                  %Nm     maximal benötigtes Drehmoment an der Rolle
