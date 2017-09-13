// Default preferences in raw data format for PROGMEM
//
#define defaultprefs_version 170728
const char defprefs_txt[] PROGMEM = R"=====(
# Example configuration
# Programmable input pins:
# gpio_00 = uppreset = 1
# gpio_17 = resume
# gpio_21 = station = stream.klubradio.hu:8080/bpstream
#
# MQTT settings
mqttbroker = 
mqttport = 1883
mqttuser = none
mqttpasswd = none
mqqprefix = 
# Enter your WiFi network specs here:
wifi_00 = MADOX3G/Newton01
wifi_01 = TUSNAD6/Newton01
#
volume = 72
toneha = 0
tonehf = 0
tonela = 0
tonelf = 0
#
preset = 1
# Some preset examples
preset_00 = stream.klubradio.hu:8080/bpstream   # Klubradio
preset_01 = stream.tilos.hu:80/tilos_128.mp3    # Tilos
preset_02 = stream.srg-ssr.ch/m/rsj/mp3_128	    # Swiss Jazz
preset_03 = 89.16.185.174:8003/stream           # linn radio
preset_04 = 89.16.185.174:8000/stream        	# Linn Jazz
preset_05 = icast.connectmedia.hu/4738/mr2.mp3	# Petofi
preset_06 = icast.connectmedia.hu/4741/mr3.mp3  # Bartok
preset_07 = 205.164.62.15:10032                 # GAIA, 64k
#
# Clock offset and daylight saving time
clk_server = pool.ntp.org                            # Time server to be used
clk_offset = 1                                       # Offset with respect to UTC in hours
clk_dst = 1                                          # Offset during daylight saving time (hours)
#
# Some IR codes
ir_40BF = upvolume = 2
ir_C03F = downvolume = 2
#
# GPIO pinnings
#ir_pin = 39                                         # GPIO Pin number for IR receiver VS1838B
ir_pin = -1                                          # GPIO Pin number for IR receiver VS1838B
enc_clk = 26                                         # GPIO Pin number for rotary encoder "CLK"
enc_dt = 36                                          # GPIO Pin number for rotary encoder "DT"
enc_sw = 25                                          # GPIO Pin number for rotary encoder "SW"
#
#sd_cs = 21                                          # GPIO Pin number for SD card "CS"
sd_cs = -1                                           # GPIO Pin number for SD card "CS"
#
vs_cs = 15                                           # GPIO Pin number for VS1053 "CS"
vs_dcs = 16                                          # GPIO Pin number for VS1053 "DCS"
vs_dreq = 2                                          # GPIO Pin number for VS1053 "DREQ"
)=====" ;
