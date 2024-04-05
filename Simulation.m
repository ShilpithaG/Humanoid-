% forward kinematics of 5DOF robot arm 

close all 
clear all
clc 

% inputs

l1 = 4.1;    % length of 1st link = l1
l2 = 12;     % length of 2nd link = l2
l3 = 9.2;    % length of 3rd link = l3
l4 = 2.8;    % length of 4th link = l4
l5 = 12;     % length of 5th link = l5

theta1 = linspace(0,90,3);
theta2 = linspace(0,90,3);
theta3 = linspace(0,90,3);
theta4 = linspace(0,90,3);
theta5 = linspace(0,90,3);


ct = 1; %counter
for a = 1:length(theta1)
    THETA1 = theta1(a) ;
    for b = 1:length(theta2)
        THETA2 = theta2(b);
        for c = 1:length(theta3)
          THETA3 = theta3(c) ;
          for d = 1:length(theta4)
           THETA4 = theta4(d);
            for e = 1:length(theta5)
             THETA5 = theta5(e);

          % coordinates

             x0 = 0;
             y0 = 0;
             x1 = l1*cosd(THETA1);
             y1 = l1*sind(THETA1);
             x2 = x1+l2*cosd(THETA2);
             y2 = y1+l2*sind(THETA2);
             x3 = x2+l3*cosd(THETA3);
             y3 = y2+l3*sind(THETA3);
             x4 = x3+l4*cosd(THETA4);
             y4 = y3+l4*sind(THETA4);
             x5 = x4+l5*cosd(THETA5);
             y5 = y4+l5*sind(THETA5);

           % plotting

             plot ([x0 x1],[y0 y1],[x1 x2],[y1 y2],[x2 x3],[y2 y3],[x3 x4],[y3 y4],[x4 x5],[y4 y5],'linewidth',2)

             grid on                  // turning grid on
             axis ([-15 30 -15 30])      // axis range
             pause (0.1)
             m(ct) = getframe(gcf);
             ct = ct+1;
