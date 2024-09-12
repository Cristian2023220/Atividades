
calcularPreco :: Float -> Int -> Float
calcularPreco preco etiqueta
    | etiqueta == 1 = preco * 0.90  -- 10% de desconto para pagamento à vista em dinheiro ou cheque
    | etiqueta == 2 = preco * 0.85  -- 15% de desconto para pagamento à vista no cartão de crédito
    | etiqueta == 3 = preco         -- Preço normal para pagamento em duas vezes sem juros
    | etiqueta == 4 = preco * 1.10  -- Preço com 10% de juros para pagamento em duas vezes
    | otherwise = error "Código de condição de pagamento inválido"


main :: IO ()
main = do
    putStrLn "Digite o preço do produto:"
    precoStr <- getLine
    let preco = read precoStr :: Float

    putStrLn "Escolha a condição de pagamento (1, 2, 3 ou 4):"
    etiquetaStr <- getLine
    let etiqueta = read etiquetaStr :: Int

    let precoFinal = calcularPreco(preco, etiqueta)
    putStrLn $ "O valor a ser pago é: " ++ show precoFinal