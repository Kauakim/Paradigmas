print("Digite o valor de M:")
local inicio = tonumber(io.read())
print("Digite o valor de N:")
local fim = tonumber(io.read())
print("Digite o valor de B:")
local base = tonumber(io.read())

function gerarTabelaPotencias(inicio, fim, base)
    for expoente = inicio, fim do
        local resultado = base ^ expoente
        print(base .. "^" .. expoente .. " = " .. resultado)
    end
end

gerarTabelaPotencias(inicio, fim, base)
