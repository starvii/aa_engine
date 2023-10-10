unit export_func;

{$mode ObjFPC}{$H+}

interface

uses
  Classes, SysUtils;

implementation

function Min(X, Y: Integer): Integer; stdcall;
begin
  if X < Y then Min := X else Min := Y;
end;

end.

