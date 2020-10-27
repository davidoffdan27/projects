function varargout = test11(varargin)
% TEST11 MATLAB code for test11.fig
%      TEST11, by itself, creates a new TEST11 or raises the existing
%      singleton*.
%
%      H = TEST11 returns the handle to a new TEST11 or the handle to
%      the existing singleton*.
%
%      TEST11('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TEST11.M with the given input arguments.
%
%      TEST11('Property','Value',...) creates a new TEST11 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before test11_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to test11_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help test11

% Last Modified by GUIDE v2.5 26-Dec-2018 08:05:44

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @test11_OpeningFcn, ...
                   'gui_OutputFcn',  @test11_OutputFcn, ...
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


% --- Executes just before test11 is made visible.
function test11_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to test11 (see VARARGIN)

% Choose default command line output for test11
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes test11 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = test11_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function fnc_Callback(hObject, eventdata, handles)
uicontrol(handles.x0)
% --- Executes during object creation, after setting all properties.
function fnc_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
 syms x
 fun1 =str2sym(get(handles.fnc, 'String'))
 disp(fun1);
 xy= get(handles.x0, 'String')
 t=str2num(xy)
 res=limit(fun1,x,t)
 disp(res)
 if isnan(limit(fun1,x,t))
 set(handles.souve, 'String', 'no lim')
 else
 if limit(fun1,x,t)==inf
 set(handles.souve, 'String', 'inf')
 else
 set(handles.souve, 'String',char(res))
 end
 end

 set(handles.plotbtn, 'Enable', 'on')
 set(handles.pushbutton2, 'Enable', 'on')
 
function x0_Callback(hObject, eventdata, handles)
uicontrol(handles.pushbutton1)

% --- Executes during object creation, after setting all properties.
function x0_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function souve_Callback(hObject, eventdata, handles)


% --- Executes during object creation, after setting all properties.
function souve_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
 % очистка осей
  cla
  % удаление содержимого областей ввода
  set(handles.fnc, 'String', 'fun')
  set(handles.souve, 'String', '')
  set(handles.x0, 'String', 'x0')
  set(handles.pushbutton2, 'Enable', 'off')
  set(handles.plotbtn, 'Enable', 'off')
  uicontrol(handles.fnc)


% --- Executes on button press in plotbtn.
function plotbtn_Callback(hObject, eventdata, handles)
 fun1 =str2sym(get(handles.fnc, 'String'))
 disp(fun1);
 xy= get(handles.x0, 'String') 
 xy=str2num(xy)
 xl=xy-10;
 xr=xy+10;
 ezplot(fun1, [xl xr])
 grid on
