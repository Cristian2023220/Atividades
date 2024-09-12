
main :: IO ()
main = do
    putStrLn "Digite o número de identificação do aluno:"
    idAluno <- getLine
    putStrLn "Digite a primeira nota:"
    nota1 <- readLn
    putStrLn "Digite a segunda nota:"
    nota2 <- readLn
    putStrLn "Digite a terceira nota:"
    nota3 <- readLn
    putStrLn "Digite a média dos exercícios:"
    me <- readLn

    let ma = (nota1 + nota2 * 2 + nota3 * 3 + me) / 7
    let conceito = atribuirConceito ma
    let status = if conceito `elem` ["A", "B", "C"] then "Aprovado" else "Reprovado"

    putStrLn $ "Número do aluno: " ++ idAluno
    putStrLn $ "Notas: " ++ show nota1 ++ ", " ++ show nota2 ++ ", " ++ show nota3
    putStrLn $ "Média dos exercícios: " ++ show me
    putStrLn $ "Média de aproveitamento: " ++ show ma
    putStrLn $ "Conceito: " ++ conceito
    putStrLn $ "Status: " ++ status


atribuirConceito :: Float -> String
atribuirConceito ma
    | ma >= 90 = "A"
    | ma >= 75 = "B"
    | ma >= 60 = "C"
    | ma >= 40 = "D"
    | otherwise = "E"