clc
disp('���������� ������������� ��������� x*e^x*sin(x):')
format long


n=100;
h=5/n;%���
a=0;
b=1;

disp('������� ��������������� ��� ����������� �����')
x=h/2:h:5;
y=x.*exp(x).*sin(x);
I=h*sum(y);
disp(I);

disp('������� ��������')
x=linspace(a,b,n);% ������������ ������� ���������������� �����
I=trapz(x,y);
disp(I);
 
disp('�������')
[Is,ns1]=quad(@findint,a,b);
disp(Is);
[Is1,ns2]=quad(@findint,a,b,1e-3);
disp(Is1);

disp('�������')
[Il,nl1]=quadl(@findint,a,b);
disp(Il);
[Il1,nl2]=quadl(@findint,a,b,1e-3);
disp(Il1);

disp('������')
x=0:0.01:5;
z=x.*exp(x).*sin(x);
plot(x,z,'b');
grid on;
legend('x*exp(x)*sin(x)');