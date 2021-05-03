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
FR_Haft =(mF+mS)*g       %N   
FD      =FR_Haft/(4*mueH)%N Druckkraft der Filzgleiter (bleibt konstant)
FR_Gleit=4*mueG*FD       %N

%Die Seilkraft muss etwas größer der Gewichts- und der Haftkraft sein:
F_Seil_Haft=(mF+mS)*g+FR_Haft+0.1   %N
F_Seil_Gleit=(mF+mS)*g+FR_Gleit+0.1 %N

M_Mot_Haft=F_Seil_Haft*da/2         %Nm
M_Mot_Betrieb=F_Seil_Gleit*da/2     %Nm
