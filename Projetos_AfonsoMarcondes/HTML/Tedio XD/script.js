const botao_var = document.getElementById("botao")
const fechar = document.getElementById("botao2")
const video = document.getElementById("video")

botao_var.addEventListener('click', function(){
    play.style.display = 'block'
    botao2.style.display = 'block'
    botao.style.display = 'none'
    
    video.currentTime = 0;
    video.play()
});

fechar.addEventListener('click', function(){
    play.style.display = 'none'
    botao2.style.display = 'none'
    botao.style.display = 'block'
})