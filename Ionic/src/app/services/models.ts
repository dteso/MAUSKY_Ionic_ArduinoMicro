export interface BluetoothId {
  name: string;
  id: string;
  address: string;
  uuid?: string;
  class: string;
  rssi: string;
}

export interface SerialData {
  data : string;
  connected : boolean;
  str:string;
  lastStr: string,
  fullStr : string;
  codeInput: string;
  message: string;
};

export interface State {
  bluetoothId?:string;
  deviceMAC?: string;
  name: string;
  wifiEnabled : boolean;
  wifiConnected: boolean;
  serialEnabled: boolean;
  serialConnected: boolean;
  bluetoothEnabled: boolean;
  bluetoothConnected: boolean;
  mcu: string;
  localIp: string;    
  wifiSSID: string;
  webServerEnabled: boolean;
  ntpEnabled: boolean;
  ntpData: string;
  temperature: string;
  humidity: string;
  mqttServer: string;
  mqttPort: string;
  online?: false;
  bluetoothOnline?: false;
  system?: string;
  type?: string;
  tokenizedTopic?: string;
};