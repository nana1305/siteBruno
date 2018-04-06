// obter o código da biblioteca
const five = require("johnny-five");

// criar uma instância que representa nossa placa
const board = new five.Board({
  port: "COM3" // substitua pela porta a qual seu Arduino estiver conectado
});

// vincular código a ser rodado quando a comunicação com a placa começar
board.on("ready", function() {

  // vincular uma variável do tipo Led que controla o pino 13
  const led = new five.Led(13);

  // piscar o led a cada 500ms
  led.blink(500);
});