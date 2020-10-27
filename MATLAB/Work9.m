clc
disp('���������� �������� ������� � �����������:')
x=0:10;
y=x.*exp(x).*sin(x);

xx=linspace(0,10);
yy=xx.*exp(xx).*sin(xx);

yn=interp1(x,y,xx,'nearest');
yl=interp1(x,y,xx,'linear');
yc=interp1(x,y,xx,'cubic');
ys=interp1(x,y,xx,'spline');
plot(x,y,'o');
hold on
plot(x,y,'o',xx,yy,xx,yn,xx,yl,xx,yc,xx,ys);
grid on
legend('data','function','nearest','linear','cubic','spline');
disp('����������� ����������� ������������')
Pogryn=max(abs(yn-yy));
disp(Pogryn);
disp('����������� �������� ������������ ')
Pogryl=max(abs(yl-yy));
disp(Pogryl);
disp('����������� ���������� ������������ ������ ')
Pogryc=max(abs(yc-yy));
disp(Pogryc);
disp('����������� ����������� �������')
Pogrys=max(abs(ys-yy));
disp(Pogrys);