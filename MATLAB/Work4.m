clc
disp('���������� ������ ��������� cos(3*x)^(-1)-6*cos(3*x)=4*sin(3*x):')
[x,fval,exitflag,output]=fsolve(@solveeq,1)
[x,fval,exitflag,output]=fsolve(@solveeq,2)
disp('���������� ������� �������:')
x=-5:1:5;
y=cos(3.*x).^(-1)-6.*cos(3.*x)-4.*sin(3.*x);
plot(x,y)
grid on
legend('cos(3*x)^(-1)-6*cos(3*x)=4*sin(3*x)')