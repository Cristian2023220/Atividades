
main :: IO ()
main = do
    putStrLn "Digite o seu peso (kg):"
    peso <- readLn
    putStrLn "Digite a sua altura (m):"
    altura <- readLn
    let imc = calcularIMC peso altura
    putStrLn ("Seu IMC é: " ++ show imc)
    putStrLn ("Sua condição é: " ++ condicaoIMC imc)


calcularIMC :: Float -> Float -> Float
calcularIMC peso altura = peso / (altura ^ 2)


condicaoIMC :: Float -> String
condicaoIMC imc
    | imc < 18.5 = "Abaixo do peso"
    | imc < 25.0 = "Peso normal"
    | imc < 30.0 = "Acima do peso"
    | otherwise  = "Obeso"