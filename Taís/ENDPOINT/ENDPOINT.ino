#define ENDPOINT "/usuario"
#define SERVER "192.168.2.185"

RestClient client = RestClient(SERVER, 8080, ethclient);

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  while (Serial.available() > 0) {
    String valorSensor = Serial.readString();

    // put your main code here, to run repeatedly:
    int status = client.get(ENDPOINT + "/" + valorSensor,
                            // Enviamos um objeto JSON vazio para honrar o Content-Type
                            // 'application-json'
                            "{}",
                            // Para ignorar o resultdo podemos passar um pointer para
                            // NULL tamanho 0:
                            resposta,
                            // Passamos também o tamanho da array
                            TAMANHO_RESPOSTA);
  }
}

