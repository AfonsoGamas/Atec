USE SISTEMA_LOGIN;

-- Inserção de utilizadores com SHA2-256
INSERT INTO utilizadores (nome, email, password_hash) VALUES
('Afonso', 'afonso@mail.pt', '8d969eef6ecad3c29a3a629280e686cff8fabd9107a4c6f3c6c93b8f5e4f1d9c7'),  -- hash de '123456'
('João Silva', 'joao@mail.pt', 'ef92b778bafe771e89245b89ecbc0bada6638d9a35ed3f450860cdb1ed953c96'), -- hash de 'password123'
('Maria Santos', 'maria@mail.pt', '5e884898da28047151d0e56f8dc6292773603d0d6aabbdd686bcd8d0f1bf5c3f');  -- hash de 'password'

-- Simulação de logins
INSERT INTO historico_acessos (utilizador_id, data_acesso) VALUES
(1, '2025-06-11 10:15:00'),
(2, '2025-06-11 11:00:00'),
(1, '2025-06-11 12:30:00'),
(3, '2025-06-10 18:45:00');

-- Atualização do último acesso
UPDATE utilizadores
SET ultimo_acesso = (
    SELECT MAX(data_acesso)
    FROM historico_acessos
    WHERE historico_acessos.utilizador_id = utilizadores.id
);
