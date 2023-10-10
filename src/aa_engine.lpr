library aa_engine;

{$mode objfpc}{$H+}

uses
  Classes, autoassembler, autoassemblercode,
  autoassemblerexeptionhandler, unit1,
  export_func
  { you can add units after this };

// 这里是delphi使用的导出函数，是__fastcall？非 __stdcall
exports
   Min name SetWindowsValue;

begin
  // 这里是 __stdcall 的导出函数
  InitLibrary;
end.

