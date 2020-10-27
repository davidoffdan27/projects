clc
disp('Решение системы линейных уравнений 1/(x-y)+x^2=1; x^2/(x-y)=-2;')
[x,fval,exitflag,output,jacobian]=fsolve(@solvesys,[1,2])
disp('Построение графиков системы')
y=-10:1:10;
y1=ezplot('1/(x-y)+x^2-1')
set(y1,'Color','red','LineWidth',2);
hold on
y2=ezplot('x^2/(x-y)+2')
set(y2,'Color','blue','LineWidth',2);
grid on
legend('1/(x-y)+x^2=1')