unit export_func;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils, Windows;

implementation

function AutoAssemble(processId: DWORD, aaScript: LPCTSTR, command: LONG): BOOL; stdcall;
begin

end;

function GetAddress(processId: DWORD, addressLine: LPCTSTR): DWORD; stdcall;
begin

end;

function Version(): LPCTSTR; stdcall;
begin
  Version := '0.11 copyright by starvii.';
end;

end.

