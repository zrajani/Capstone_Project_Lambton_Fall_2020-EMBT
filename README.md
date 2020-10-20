# i-LETTERBOX (INTELLIGENT LETTERBOX)

This Repository is maintained for the Capstone Project to be carried out as part of requirements towards the course completion for the Fall 2020. The duration of the project would for 4 months starting from <b><u>September 14, 2020 - December 21, 2020</b></u>. 

The contributors for this repository would be [Zain Rajani](https://github.com/zrajani)

This Capstone Project would be guided under the supervision of [Dr. Mike Aleshams, Professor](https://github.com/mikeshams)

This page shall be having folders relating to the Capstone Project which would be as follows:

1. <b>Presentation</b>: All Presentation files for demonstrating the project as well showcasing the project timeline

2. <b>Documentation</b>: Documentation of the various peripherals, sensors, software, etc. would be present here for reference

3. <b>Codes</b>: All the programming required for the Capstone shall be present here

4. <b>Hardware</b>: Any Special Hardware related document or file would be present here.

  
## i-LETTERBOX Description
  
Letters are an important part of daily business. People receive letters either from the government offices for either tax payments, or approval of their loans and schemes etc. Thus people at times forget to check their mailboxes and some days people don’t get the mails at all. Thus, a system was needed where when any letter arrived for the user he/she must be notified or must be made aware of through some system.

Thus during the span in the future we try to build and modify the existing system with the help of IR Sensor to count number of letters, LDR to reset the counter and GSM/ Cloud Service to update the user. A simplified block daigram can be seen which we will try to accomplish. 

<img src="https://github.com/zrajani/iLETTERBOX_CAPSTONE_PROJECT_EMBT_F2020/blob/master/Images/Block%20Diagram_Project.png" alt="Project Block Daigram">

Through this project we demonstrate the use of commnication protocols such as the IEEE 802.11 (WiFi), Serial GPIOs, Serial UART also using the Cloud service called as ThingsSpeak and the transfer the data to the cloud via the MQTT

The working can be explained/ learned using the animated picture below: 

<img src="https://github.com/zrajani/iLETTERBOX_CAPSTONE_PROJECT_EMBT_F2020/blob/master/Images/Group%208%20Creative%20Engineering%20Drawing.jpg" alt="Animated Project Working Image">

## Required Hardware and Software

To complete this capstone following Hardware and Software would be required (Click on them to see their appearance or incase if you wish to buy)

### Hardware Components:
1. [BeagleBone AI](https://www.digikey.ca/en/products/detail/beagleboard.org/BBONE-AI/10671097?utm_adgroup=Evaluation%20Boards%20-%20Embedded%20-%20MCU%2C%20DSP&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Product_Development%20Boards%2C%20Kits%2C%20Programmers&utm_term=&productid=10671097&gclid=CjwKCAjwlbr8BRA0EiwAnt4MTkTt1_1JnRZLH953GtVrp0cPBRGxzMy4_xfZWAYaFkrr11Gw9ickwRoCjPIQAvD_BwE)
2. [Power Adapter Type C 5V,3A](https://www.amazon.ca/BENSN-Adapter-Replacement-Raspberry-Version/dp/B082Y3CSYW/ref=asc_df_B082Y3CSYW/?tag=googleshopc0c-20&linkCode=df0&hvadid=335455954923&hvpos=&hvnetw=g&hvrand=5608640327606492626&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000899&hvtargid=pla-919394702812&psc=1) <i>* Note: If you have a power adapter with 5V, 2A rating that would also work</i>
3. [LED](https://www.digikey.ca/en/products/detail/rohm-semiconductor/SLR-56VR3F/636992?utm_adgroup=LED%20Indication%20-%20Discrete&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Product_Optoelectronics&utm_term=&productid=636992&gclid=CjwKCAjw2dD7BRASEiwAWCtCbyIG4YZBKt0sgAISDEbtyR3n9TbIASLR2VqWdQLKDTC-MQSCeFqfYhoCQn0QAvD_BwE)
4. [GSM SIM900 Ardiuno Sheild](https://www.amazon.ca/gp/product/B07XY79G56/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)
5. [LDR Module](https://www.amazon.ca/Generic-Photoresistor-Detection-Photosensitive-Arduino/dp/B00VUQ6CU0/ref=pd_bxgy_2/132-5760972-8575215?_encoding=UTF8&pd_rd_i=B00VUQ6CU0&pd_rd_r=ed0f7b16-fc99-4999-9c48-257f7b9cd762&pd_rd_w=0mOoi&pd_rd_wg=teR3a&pf_rd_p=651c6196-5161-4602-81e9-26b0f9bf89e1&pf_rd_r=CD5KQFN9567QKF03RESM&psc=1&refRID=CD5KQFN9567QKF03RESM)
6. [IR Sensor](https://www.amazon.ca/gp/slredirect/picassoRedirect.html/ref=pa_sp_atf_electronics_sr_pg1_1?ie=UTF8&adId=A062407615CX62G3DMZTA&url=%2FGikfun-Infrared-Obstacle-Avoidance-EK1254x5C%2Fdp%2FB07FFM7DYQ%2Fref%3Dsr_1_1_sspa%3Fdchild%3D1%26keywords%3DIR%2Bsensor%26qid%3D1603200729%26s%3Delectronics%26sr%3D1-1-spons%26psc%3D1&qualifier=1603200729&id=5553384043873663&widgetName=sp_atf)
7. [Power Supply for GSM Module barrel jack 5V, 2A](https://www.amazon.ca/AC100V-240V-3000mA-Adapter-Supply-5-5x2-5mm/dp/B07DQR919Y/ref=asc_df_B07DQR919Y/?tag=googleshopc0c-20&linkCode=df0&hvadid=335455954923&hvpos=&hvnetw=g&hvrand=5136723120768300298&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000899&hvtargid=pla-886214471277&psc=1)
8. [Connecting Wires/ Jumper Wires](https://www.amazon.ca/Elegoo-120pcs-Multicolored-Breadboard-arduino/dp/B01EV70C78/ref=asc_df_B01EV70C78/?tag=googleshopc0c-20&linkCode=df0&hvadid=292982668700&hvpos=&hvnetw=g&hvrand=16302839760748180270&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000899&hvtargid=pla-362913641420&psc=1)
9. [Soldering Kit with Multimeters, Cutters and other tools](https://elmwoodelectronics.ca/products/ladyadas-electronics-toolkit)
10. [Few Resistors](https://elmwoodelectronics.ca/products/10969)

### Software Required:

1. [Latest Debian (Linux) Image for BB-AI](https://beagleboard.org/latest-images)
2. [ThingsSpeak](https://thingspeak.com/)
3. [Eclipse](https://www.eclipse.org/downloads/packages/release/luna/r/eclipse-ide-cc-developers)*
4. [Linaro Compiler](https://www.linaro.org/downloads/)*

<i>* It may be required if your performing cross toolchain that is programming and compiling on host and just transferring the output file to the target</i>

### Programming Language Used: C/C++ along with Python (iff No C/C++ Language Support Avaliable)

<h4>This repository is still on a way and will see many more updates in the future
