function varargout = test10(varargin)
% TEST10 MATLAB code for test10.fig
%      TEST10, by itself, creates a new TEST10 or raises the existing
%      singleton*.
%
%      H = TEST10 returns the handle to a new TEST10 or the handle to
%      the existing singleton*.
%
%      TEST10('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TEST10.M with the given input arguments.
%
%      TEST10('Property','Value',...) creates a new TEST10 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before test10_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to test10_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help test10

% Last Modified by GUIDE v2.5 25-Dec-2018 22:15:48

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @test10_OpeningFcn, ...
                   'gui_OutputFcn',  @test10_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


function fnc1_Callback(hObject, eventdata, handles)
  uicontrol(handles.fnc2);
  set(handles.edtRight, 'Enable', 'off')%дает доступ к х0 у0
  set(handles.edtLeft, 'Enable', 'off')

function fnc1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to fnc1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edtLeft_Callback(hObject, eventdata, handles)
% передаем фокус области ввода Right
uicontrol(handles.edtRight)

function edtLeft_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edtRight_Callback(hObject, eventdata, handles)
% делаем кнопку Plot доступной

% передаем фокус кнопке Plot
uicontrol(handles.mainbtn)
 % записываем строку с формулой в строковую переменную fun


% --- Executes during object creation, after setting all properties.
function edtRight_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
    
end

% --- Executes just before test10 is made visible.
function test10_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to test10 (see VARARGIN)

% Choose default command line output for test10
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes test10 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = test10_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;




function fnc2_Callback(hObject, eventdata, handles)

function fnc2_CreateFcn(hObject, eventdata, handles)

% hObject    handle to fnc2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end




% --- Executes on button press in mainbtn.
function mainbtn_Callback(hObject, eventdata, handles)
  fun1 = get(handles.fnc1, 'String');
  fun2 = get(handles.fnc2, 'String'); 
  y1 = ezplot(fun1);
  set(y1,'Color','red','LineWidth',2);
  hold on;
  y2 = ezplot(fun2);
  set(y2,'Color','blue','LineWidth',2);
  hold on
  grid on;
  xlabel('x')
  ylabel('y')
  set(handles.btn, 'Enable', 'on')
  set(handles.btnClear, 'Enable', 'on')
  set(handles.edtRight, 'Enable', 'on')
  set(handles.edtLeft, 'Enable', 'on')




function solvemain_Callback(hObject, eventdata, handles)


% --- Executes during object creation, after setting all properties.
function solvemain_CreateFcn(hObject, eventdata, handles)
% hObject    handle to solvemain (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in btnClear.
function btnClear_Callback(hObject, eventdata, handles)
  % очистка осей
  cla
  % удаление содержимого областей ввода
  set(handles.fnc1, 'String', '')
  set(handles.fnc2, 'String', '')
  set(handles.edtLeft, 'String', '')
  set(handles.edtRight, 'String', '')
  set(handles.solvemain, 'String','')
  set(handles.solvemain2, 'String','')
  % делаем кнопки Plot и Clear недоступными
  set(handles.btnClear, 'Enable', 'off')
  set(handles.mainbtn, 'Enable', 'on')
  set(handles.edtRight, 'Enable', 'off')
  set(handles.edtLeft, 'Enable', 'off')
  set(handles.btn, 'Enable', 'off')
  % передаем фокус области ввода Function
  uicontrol(handles.fnc1)



function solvemain2_Callback(hObject, eventdata, handles)


% --- Executes during object creation, after setting all properties.
function solvemain2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to solvemain2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in btn.
function btn_Callback(hObject, eventdata, handles)
  fun1 = get(handles.fnc1, 'String');
  fun2 = get(handles.fnc2, 'String'); 
  Left = str2num(get(handles.edtLeft, 'String'))
  Right = str2num(get(handles.edtRight, 'String'))
  fun=strcat(fun1,'-(',fun2,')');
  t=fsolve(fun,Left);
  r=num2str(t);
  set(handles.solvemain, 'String','x=','String',r)
  x=t;
  result=eval(fun1);
  set(handles.solvemain2, 'String','y=','String',result)
  uicontrol(handles.fnc1)
