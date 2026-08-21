function analisarNumeros(n1, n2, operacao)
    if operacao == "media" then
        return calcularMedia(n1, n2)
    elseif operacao == "maior" then
        return encontrarMaior(n1, n2)
    elseif operacao == "diferenca" then
        return calcularDiferencaAbsoluta(n1, n2)
    else
        return -999999
    end
end

function calcularMedia(a, b)
    return (a+b)/2
end

function encontrarMaior(a, b)
    if a > b then
        return a
    else
        return b
    end
end

function calcularDiferencaAbsoluta(a, b)
    if a > b then
        return a - b
    else
        return b - a
    end
end

print("Digite o valor de a:")
local a = tonumber(io.read())

print("Digite o valor de b:")
local b = tonumber(io.read())

print("Digite a operacao desejada (media, maior ou diferenca):")
local opcao = tostring(io.read())

local resultado = analisarNumeros(a, b, opcao)

if resultado == -999999 then
    print("Operacao invalida!")
else 
    print(resultado)
end
