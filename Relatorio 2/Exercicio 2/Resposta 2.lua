print("Digite a quantidade de elementos:")
local N = tonumber(io.read())
local tabela = {}

print("Digite os elementos desejados:")
for i = 1, N do
    tabela[i] = tonumber(io.read())
end

print("Digite o numero desejado:")
local X = tonumber(io.read())

function contarOcorrencias(tabela, alvo)
    local quantidade = 0
    for i = 1, #tabela do
        if tabela[i] == alvo then
            quantidade = quantidade + 1
        end
    end

    return quantidade
end

local ocorrencias = contarOcorrencias(tabela, X)

print("O numero " .. X .. " aparece " .. ocorrencias .. " vezes na tabela.")
