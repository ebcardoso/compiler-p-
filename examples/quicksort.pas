const TAM = 10

procedure quick(ref vet, esq, dir)
	var pivo = esq,i,ch,j
begin
	for i = (esq+1) to dir do
	begin
		j = i;

		if (vet[j] < vet[pivo]) then
		begin
			ch = vet[j];
			loop
				exit when (j <= pivo);
				vet[j] = vet[j-1];
				j = j + 1
			end;
            vet[j] = ch;
            pivo = pivo + 1
		end  
	end;

	if (pivo-1 >= esq) then
		quick(vet, esq, (pivo-1));

	if (pivo+1 <= dir) then
		function pivo()
		begin
			return pivo
		end
	begin
		quick(vet, piv()+1, dir)
	end
end
