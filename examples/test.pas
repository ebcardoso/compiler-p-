var x, b = "breno", z = (8.7 + k);
const a = 7, c = "cardoso";
var d1 = "compiler", d2 = (3+x*3);
const n = true;

procedure varrer()
	function fatorial(x)
		var fat = 1;
	begin
		for i = x downto 2 do
			fat = fat * i;
		return x
	end

	function fatorial2(y)
		var fat = 1, x;
	begin
		x = y;
		loop
			fat = fat * x;
			x = x - 1;
			exit when(x == 1)
		end;
		return x
	end
begin
	x = 3
end

function delta(a, b, c)
	var raiz;
begin
	del = b*b - 4*a*c;
	if (del < 0) then
		begin
			raiz = sqrt(del);
			return raiz
		end
	else
		break
end

function printNOME(a)
begin
	switch(a)
	begin
		case "Breno":
			a = b+3;
			break
		case "Lucas":
			a = b+4;
			break
		case "Renato":
			a = b+5;
			break
		case "Sidemar":
			a = b+6;
			break
	end
end
