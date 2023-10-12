library aa_engine;

{$mode objfpc}{$H+}

uses
  Classes, autoassembler, autoassemblercode,
  autoassemblerexeptionhandler, unit1,
  export_func;
  { you can add units after this };


// 这里是delphi使用的导出函数，是__fastcall？非 __stdcall
exports
   AutoAssemble name AutoAssemble;
   GetAddress name GetAddress;
   Version name Version;

begin
  InitLibrary;
end.

