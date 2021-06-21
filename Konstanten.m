%%%%%%%%%%%%%%%% KONSTANTEN %%%%%%%%%%%%%%%%%%%%
% Mechanik
mF  =2.3;       %kg     Masse Fensterscheibe
mS  =0.9;       %kg     Masse Schlitten
g   =9.81;      %m/s²   Fallbeschleunigung
da  =0.022;     %m      Durchmesser Antriebsrolle
mueH=0.4;       %     -  Haftreibungskoeffizient
mueG=0.35;      %       Gleitreibungskoeffizient
lF  =0.375;     %m      Gesamtweg des Fensters
d   =50;        %Nm/s   Dämpfung
c   =10000;     %N/m    Federsteifigkeit

%Elektromotor
Ua=24           %V      Nennspannung Motor
J=1.8           %g*cm²  Trägheitsmoment Motor
Ta=0.000888     %s      Zeitkonstante des Motors
i=1/49          %       Übersetzungsverhältnis

%%%%%%%%%%%%%%%% VORGABEN %%%%%%%%%%%%%%%%%%
%Haftkraft muss größer/gleich der gesamten Gewichtskraft sein:
FR_Haft =(mF+mS)*g+0.1   %N   
FD      =FR_Haft/(4*mueH)%N Druckkraft der Filzgleiter (bleibt konstant)
FR_Gleit=4*mueG*FD       %N

%Die Seilkraft muss gleich der Gewichts- und der Haftkraft sein:
F_Seil_Haft=(mF+mS)*g+FR_Haft+0.1   %N
F_Seil_Gleit=(mF+mS)*g+FR_Gleit+0.1 %N
M_Seil_Haft=F_Seil_Haft*da/2         %Nm
M_Seil_Betrieb=F_Seil_Gleit*da/2     %Nm

%%%%%%%%%%%%%%%%% Antrieb %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Umfang_Rolle=pi*da;
Umdrehungen_Rolle=lF/Umfang_Rolle   %Umdrehungen
n_Getriebe_s=Umdrehungen_Rolle/9    %Umdrehungen/s
n_Getriebe=n_Getriebe_s*60          %Umdrehungen/min
n_Motor=n_Getriebe/i                %Umdrehungen/min
n_Motor_s=n_Motor/60                %Umdrehungen/s
%daraus ergibt sich aus Motorkennfeld durch ablesen:
M_Mot=0.315                         %Nm
Ia=10                               %A
eta=0.7                             %   Wirkungsgrad (üblicher Wert)
inkr=980

%Damit können die Konstanten berechnet werden:
k4=M_Mot/Ia             %Nm/A   Maschinenkonstante
k3=k4                   %Nm/A   Induktionskonstante
UbN=k3*n_Motor_s*2*pi   %V      induzierte Spannung im Nennpunkt
Ra=(Ua-UbN)/Ia          %Ohm    Innenwiderstand im Ankerstromkreis
L=Ta*Ra                 %H      Induktivität des Motors
ks=1            %NOCH BERECHNEN



%%%%%%%%%%%%%%%% Reglerparameter %%%%%%%%%%%%%%%%%%%%%%%%
%mithilfe des Symmetrischen Optimums:
D=1
a=2*D+1
Va=1/Ra
T1=(J+(mF+mS)*((da/2)^2/(i^2*eta)))/k4
kp_I=0.0000000001       %ausprobiert: egal
Tpi_A=Ta
Tg=Tpi_A/(kp_I*Va)
Tpi=Tg*a^2
kp=T1/(a*Tg)            %ausprobiert: 0.000001
ki=kp/Tpi           %ausprobiert: 0.000001
ki_I=kp_I*Ra/L       %ausprobiert: egal