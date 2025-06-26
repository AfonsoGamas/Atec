
-- 1. Quantos utilizadores existem?
SELECT COUNT(*) AS total_utilizadores FROM utilizadores;

-- 2. Qual foi o último acesso do utilizador João?
SELECT MAX(data_acesso) AS ultimo_acesso
FROM historico_acessos
JOIN utilizadores ON historico_acessos.utilizador_id = utilizadores.id
WHERE utilizadores.nome = 'João Silva';

-- 3. Quem acedeu mais vezes?
SELECT utilizadores.nome, COUNT(*) AS acessos
FROM historico_acessos
JOIN utilizadores ON historico_acessos.utilizador_id = utilizadores.id
GROUP BY utilizadores.id
ORDER BY acessos DESC
LIMIT 1;

-- 4. Quem nunca acedeu?
SELECT nome
FROM utilizadores
WHERE id NOT IN (
    SELECT DISTINCT utilizador_id FROM historico_acessos
);

-- 5. Qual o email da Maria?
SELECT email FROM utilizadores WHERE nome = 'Maria Santos';

-- 6. Quantos acessos houve hoje?
SELECT COUNT(*) AS acessos_hoje
FROM historico_acessos
WHERE DATE(data_acesso) = CURDATE();

-- 7. Qual é o hash da password do Carlos?
SELECT password_hash FROM utilizadores WHERE nome = 'Carlos Costa';

-- 8. Quem teve o primeiro acesso?
SELECT utilizadores.nome, historico_acessos.data_acesso
FROM historico_acessos
JOIN utilizadores ON historico_acessos.utilizador_id = utilizadores.id
ORDER BY historico_acessos.data_acesso ASC
LIMIT 1;

-- 9. Há utilizadores com emails repetidos?
SELECT email, COUNT(*) AS quantidade
FROM utilizadores
GROUP BY email
HAVING quantidade > 1;

-- 10. Houve acessos no fim de semana?
SELECT *
FROM historico_acessos
WHERE WEEKDAY(data_acesso) IN (5, 6);  -- 5 = Sábado, 6 = Domingo
