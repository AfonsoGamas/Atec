from transformers import GPT2LMHeadModel, GPT2Tokenizer
import torch

# Carregar o modelo pré-treinado GPT-2
tokenizer = GPT2Tokenizer.from_pretrained("gpt2")
model = GPT2LMHeadModel.from_pretrained("gpt2")

# Função para gerar resposta
def gerar_resposta(pergunta):
    # Codificar a pergunta em tokens
    inputs = tokenizer.encode(pergunta, return_tensors="pt")

    # Gerar a resposta
    outputs = model.generate(inputs, max_length=150, num_return_sequences=1, no_repeat_ngram_size=2)

    # Decodificar a resposta e retornar
    resposta = tokenizer.decode(outputs[0], skip_special_tokens=True)
    return resposta

# Loop de interação com o usuário
while True:
    pergunta = input("Você: ")
    if pergunta.lower() == "sair":
        break
    resposta = gerar_resposta(pergunta)
    print(f"AI: {resposta}")
