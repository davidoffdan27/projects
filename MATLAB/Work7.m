clc
disp('Вычисление определенного интеграла x*e^x*sin(x):')
format long


n=100;
h=5/n;%шаг
a=0;
b=1;

disp('Формула прямоугольников для центральных узлов')
x=h/2:h:5;
y=x.*exp(x).*sin(x);
I=h*sum(y);
disp(I);

disp('Формула трапеции')
x=linspace(a,b,n);% формирование массива равноотносящихся узлов
I=trapz(x,y);
disp(I);
 
disp('Симпсон')
[Is,ns1]=quad(@findint,a,b);
disp(Is);
[Is1,ns2]=quad(@findint,a,b,1e-3);
disp(Is1);

disp('Лобатто')
[Il,nl1]=quadl(@findint,a,b);
disp(Il);
[Il1,nl2]=quadl(@findint,a,b,1e-3);
disp(Il1);

disp('График')
x=0:0.01:5;
z=x.*exp(x).*sin(x);
plot(x,z,'b');
grid on;
legend('x*exp(x)*sin(x)');