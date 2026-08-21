print("Digite a quantidade de elementos:")
local N = tonumber(io.read())
local tabela = {}

print("Digite os elementos desejados:")
for i = 1, N do
    tabela[i] = tonumber(io.read())
end

print("Digite o limite desejado:")
local K = tonumber(io.read())

function filtrarMaiores(tabela, limite)
    local maiores = {}
    for i = 1, #tabela do
        if tabela[i] > limite then
            table.insert(maiores, tabela[i])
        end
    end

    return maiores
end

local maiores = filtrarMaiores(tabela, K)

print("Numeros maiores que " .. K .. ":")
for i = 1, #maiores do
    print(maiores[i])    
end
